#include "GCD.h"
#include <iostream>
using namespace std;

GCDCalculator::GCDCalculator(int a, int b) {
    cout << "Initializing gcd calculator" << endl;
    this->a = a;
    this->b = b;
}

GCDCalculator::~GCDCalculator() {
    cout << "Deleting gcd calculator" << endl;
}

int GCDCalculator::calculate() {
    int result = min(this->a, this->b);
    while (result > 0) {
        if (this->a % result == 0 && this->b % result == 0) {
            break;
        }
        result--;
    }
    return result;
}
