#include "RLEEncoder.h"
#include <string>
using namespace std;


string RLEEncoder::encode(string& str) {
    string out = "";
    int j = 0;
    int counter;

    for (int i = 0; i < str.length(); i++) {
        counter = 1;
        for (j = i + 1; j < str.length(); j++) {
            if (str[i] == str[j])
                counter++;
            else
                break;
        }

        out += str[i];
        out += to_string(counter);
        i = j - 1;
    }
    return out;
}