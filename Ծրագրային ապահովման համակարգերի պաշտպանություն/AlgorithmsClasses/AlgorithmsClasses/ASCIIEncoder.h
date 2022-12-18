#pragma once
#include <iostream>
#include "Encoder.h"
using namespace std;

class ASCIIEncoder : public Encoder
{
public:
    string encode(string& text, int& k);
    string decode(string& text, int& k);
};