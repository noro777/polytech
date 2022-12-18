#include "ShablonEncoder.h"


string ShablonEncoder::encode(string& str, string& alphabet1, string& alphabet2) {
    string encoded = "";
    for (int i = 0; i < str.length();i++) {
        int index = Helper::binary_search(str[i], alphabet1);
        if (index != -1)
            encoded += (alphabet2[index]);
        else {
            cout << index << endl;
        }
    }
    return encoded;
}