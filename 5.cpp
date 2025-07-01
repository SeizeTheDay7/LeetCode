#include "5.h"
using namespace std;

string Five::longestPalindrome(string s)
{
	//int left = 0, right = 0;
	//for (int i = 0; i < s.size(); i++)
	//{
	//	for (int j = s.size()-1; i < j; j--)
	//	{
	//		if (j - i < right - left) continue;
	//		bool isPalin = true;
	//		for (int k = 0; k < (j-i+1)/2; k++)
	//		{
	//			if (s[i+k] != s[j-k])
	//			{
	//				isPalin = false;
	//				break;
	//			}
	//		}
	//		if (isPalin)
	//		{
	//			left = i;
	//			right = j;
	//		}
	//	}
	//}
	//return s.substr(left, right - left + 1);
	int sLen = s.size(), start = 0, maxLen = 1;
	int left, right;
	for (int i = 0; i < sLen;)
	{
		left = right = i;
		while (right + 1 < sLen && s[right] == s[right + 1]) right++;
		i = right+1;
		while (0 <= left && right < sLen && s[left] == s[right]) { left--; right++; }
		if (right - left - 1 > maxLen) { start = left + 1; maxLen = right - left - 1; }
	}
	return s.substr(start,maxLen);
}