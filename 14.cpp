#include "14.h"

std::string Fourteen::longestCommonPrefix(std::vector<std::string>& strs)
{
	// strs�� ù��° ���ҿ� ����
	// ù��° char���� ������ char���� ��ȸ�ϸ鼭
	// strs �ȿ� �ִ� �ٸ� ���ҵ��� ���� �ε����� char�� ���Ͽ�
	// ��� ���ٸ� ���, �ϳ��� �ٸ��� ���� ���
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