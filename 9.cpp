#include <iostream>
#include <string>
using namespace std;

class Nine {
public:
    bool isPalindrome(int x) {
        bool result = true;
        string x_str = x.ToString();
        int x_len = x_str.Length();
        for(int i=0; i<x_len/2; i++)
        {
            if (x_str[i] != x_str[x_len - i])
            {
                result = false;
                break;
            }
        }
        return result;
    }
};