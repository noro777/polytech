#include "Encoder.h"
#include "ASCIIEncoder.h"

string ASCIIEncoder::encode(string& text, int& k) {
    string encoded;
    for (int i = 0; i < text.length(); i++) {
        encoded += text[i] + k;
    }
    return encoded;
}

string ASCIIEncoder::decode(string& text, int& k) {
    string decoded;
    for (int i = 0; i < text.length(); i++) {
        decoded += text[i] - k;
    }
    return decoded;
}