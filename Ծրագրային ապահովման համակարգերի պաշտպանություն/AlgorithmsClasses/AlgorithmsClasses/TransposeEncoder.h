#pragma once
#include "Helper.h"
#include "Encoder.h"
#include <iostream>

class TransposeEncoder : public Encoder
{
public:
    int m;
    int n;
    TransposeEncoder(int m, int n);
    string encode(string& text, int& M, int& N);
};

