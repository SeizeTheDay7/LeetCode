#include "14.h"

std::string Fourteen::longestCommonPrefix(std::vector<std::string>& strs)
{
	// strs의 첫번째 원소에 대해
	// 첫번째 char부터 마지막 char까지 순회하면서
	// strs 안에 있는 다른 원소들의 같은 인덱스의 char과 비교하여
	// 모두 같다면 통과, 하나라도 다르면 루프 취소
	std::string s = strs[0];
	int count = 0;
	for (count = 0; count < s.length(); count++)
	{
		for (int i = 1; i < strs.size(); i++)
		{
			if (strs[i].length() <= count || s[count] != strs[i][count])
			{
				return s.substr(0, count);
			}
		}
	}
	return s.substr(0,count);
}