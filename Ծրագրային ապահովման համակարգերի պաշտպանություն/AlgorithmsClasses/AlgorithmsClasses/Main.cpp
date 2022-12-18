#include "GCD.h"
#include "ASCIIEncoder.h"
#include "ShablonEncoder.h"
#include "TransposeEncoder.h"
#include "RLEEncoder.h"
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    //gcd check
    /*int a = 21, b = 67;
    GCDCalculator calc(a, b);
    cout << calc.calculate() << endl;*/

    // ascii check
   /* string text;
    cout << "Input text: "; getline(cin, text);
    int k = 3;

    ASCIIEncoder encoder;
    string encoded = encoder.encode(text, k);
    cout << "Encoded: " << encoded << endl;

    string decoded = encoder.decode(encoded, k);
    cout << "Decoded: " << decoded << endl;*/

    //shablon check
    /*string str = "hello";
    string alphabet1 = "abcdefghijklmnopqrstuvwxyz";
    string alphabet2 = alphabet1;
    random_shuffle(alphabet2.begin(), alphabet2.end());

    cout << "alphabet1: " << alphabet1 << endl;
    cout << "shuffled : " << alphabet2 << endl;

    ShablonEncoder encoder;
    string encoded = encoder.encode(str, alphabet1, alphabet2);
    cout << "text   : " << str << endl;
    cout << "encoded: " << encoded << endl;*/

    //check transpose encoder
    /*string text;
    cout << "Input text: "; getline(cin, text);
    int len = text.length();
    int m, n = 0;
    Helper::get_dividers(len, m, n);
    cout << m << ", " << n << endl;

    TransposeEncoder encoder(m, n);
    string encoded = encoder.encode(text, m, n);
    cout << "Encoded: " << encoded << endl;*/

    //check rle encoder
    string str = "aaabbcdddd";
    char out[1024];

    RLEEncoder encoder;
    string encoded = encoder.encode(str);
    cout << encoded << endl;


    return 0;
}
