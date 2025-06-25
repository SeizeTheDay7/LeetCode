#include <iostream>
#include "9.h"
#include "13.h"
#include "14.h"
using namespace std;

int main()
{
	//cout << boolalpha << Nine::isPalindrome(323) << endl;
	//cout << Thirteen::romanToInt("DCXXI");
	vector<string> strs = { "flower", "flow", "flight" };
	cout << Fourteen::longestCommonPrefix(strs);
	return 0;
}