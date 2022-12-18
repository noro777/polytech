#pragma once
#include <iostream>
#include "Encoder.h"
using namespace std;


class RLEEncoder : public Encoder
{
public:
    string encode(string& str);
};
