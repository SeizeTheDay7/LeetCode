#include <string>
#include "9.h"

bool Nine::isPalindrome(int x) {
    //std::string x_str = std::to_string(x);
    //int x_len = x_str.length();
    //for(int i=0; i< x_len/2; i++)
    //{
    //    if (x_str[i] != x_str[x_len - i -1])
    //    {
    //        return false;
    //    }
    //}
    //return true;

    if (x < 0 || (x != 0 && x % 10 == 0)) return false;

    int x_backward = 0;

    while (x > x_backward)
    {
        x_backward = x_backward * 10 + x % 10;
        x /= 10;
    }

    return x == x_backward || x == x_backward / 10;
}
