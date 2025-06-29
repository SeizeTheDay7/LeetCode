#include"3.h"
using namespace std;

int Three::lengthOfLongestSubstring(std::string s)
{
	//// �ߺ��Ǵ°� ������ �ű⼭���� �տ� �ִ� �ߺ� ���� Substring �����
	//// �ߺ��Ǵ°� ������ maxLen ���� �õ�
	//int strLen = s.length();
	//int startIdx = 0;
	//int maxLen = 0;
	//std::unordered_set<char> checklist;
	//for (int i = 0; i < strLen; i++)
	//{
	//	// �ߺ� �� ã�Ҵٸ� �߰�
	//	if (checklist.find(s[i]) == checklist.end())
	//	{
	//		checklist.insert(s[i]);
	//	}
	//	// �ߺ� ã�Ҵٸ� substring ����
	//	else
	//	{
	//		for (int j=startIdx; j<i; j++)
	//		{
	//			if (s[i] == s[j])
	//			{
	//				startIdx = j + 1;
	//				break;
	//			}
	//			else
	//			{
	//				checklist.erase(s[j]);
	//			}
	//		}
	//	}
	//	maxLen = std::max(i - startIdx + 1, maxLen);
	//}
	//return maxLen;

	// �����̵� ���̺�
	// ASCII ���̺��� ����� �����ߴ� �ε����� ���
	// right�� �÷����� �ִ� ���� (right - left) ����
	// right�� ���̺� ���� �ߺ��� �ִٸ� (���̺� ���� -1�� �ƴ϶��) left = �ߺ��� �ε��� + 1

	vector<int> table(256, -1);
	int left = 0;
	int s_len = s.size();
	int maxLen = 0;

	for (int right = 0; right < s_len; right++)
	{
		if (table[s[right]] != -1 && left <= table[s[right]])
		{
			left = table[s[right]]+1;
		}
		table[s[right]] = right;
		
		maxLen = max(maxLen, right - left + 1);
	}

	return maxLen;
}