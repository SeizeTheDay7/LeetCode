#include "13.h"

int Thirteen::romanToInt(std::string s)
{
	//int idx = 0;
	//int s_len = s.length();
	//int result = 0;
	//while (idx < s_len)
	//{
	//	char a = s[idx];
	//	char b = '_';
	//	if (idx+1 < s_len) b = s[idx + 1];

	//	if (a == 'I')
	//	{
	//		if (b == 'V') { result += 4; idx += 2; }
	//		else if (b == 'X') { result += 9; idx += 2; }
	//		else { result += 1; idx += 1; }
	//	}
	//	else if (a == 'V') { result += 5; idx += 1; }
	//	else if (a == 'X')
	//	{
	//		if (b == 'L') { result += 40; idx += 2; }
	//		else if (b == 'C') { result += 90; idx += 2; }
	//		else { result += 10; idx += 1; }
	//	}
	//	else if (a == 'L') { result += 50; idx += 1; }
	//	else if (a == 'C')
	//	{
	//		if (b == 'D') { result += 400; idx += 2; }
	//		else if (b == 'M') { result += 900; idx += 2; }
	//		else { result += 100; idx += 1; }
	//	}
	//	else if (a == 'D') { result += 500; idx += 1; }
	//	else if (a == 'M') { result += 1000; idx += 1; }
	//}
	//return result;

	int n = 0;   
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'I') {
            if (s[i+1]=='V' || s[i+1]=='X'){
                n-=1;
            }
            else {
                n+=1;
            }
        }
        else if (s[i]== 'V') {
            n+=5;
        }
        else if (s[i] == 'X') {
            if (s[i+1]=='L' || s[i+1]=='C'){
                n-=10;
            }
            else{
                n+=10;
            }
        }
        else if (s[i] == 'L') {
            n+=50;
        }
        else if (s[i] == 'C') {
            if(s[i+1]=='D' || s[i+1]=='M') {
                n-=100;
            }
            else{
                n+=100;
            }
        }
        else if (s[i] == 'D') {
            n+=500;
        }
        else if (s[i] == 'M') {
            n+=1000;
        }
    }
    return n;
}