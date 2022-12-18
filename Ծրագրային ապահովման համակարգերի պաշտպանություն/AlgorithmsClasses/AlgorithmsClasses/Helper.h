#pragma once
#include <iostream>
using namespace std;

class Helper {
public:
    //this function searches for index of char in string
    static int binary_search(char& ch, string& text) {
        int left = 0;
        int right = text.length() - 1;
        while (left <= right) {
            int mid = (left + right) / 2;

            if (text[mid] == ch) return mid;
            else if (text[mid] > ch) right = mid - 1;
            else left = mid + 1;
        }
        return -1;
    }

    //this function changes i and j variables via reference
    static void get_dividers(int len, int& i, int& j) {
        for (i = sqrt(len); i >= 1; i--) {
            if (len % i == 0) {
                j = len / i;
                break;
            }
        }
    }
};