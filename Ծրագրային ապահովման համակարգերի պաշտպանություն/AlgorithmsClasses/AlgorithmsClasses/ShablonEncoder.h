#pragma once
#include "Helper.h"
#include "Encoder.h"
#include <iostream>
using namespace std;

class ShablonEncoder : public Encoder
{
public:
    string encode(string& str, string& alphabet1, string& alphabet2);
};
