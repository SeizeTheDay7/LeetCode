#include"3.h"
using namespace std;

int Three::lengthOfLongestSubstring(std::string s)
{
	//// 중복되는게 있으면 거기서부터 앞에 있는 중복 없는 Substring 만들기
	//// 중복되는게 없으면 maxLen 갱신 시도
	//int strLen = s.length();
	//int startIdx = 0;
	//int maxLen = 0;
	//std::unordered_set<char> checklist;
	//for (int i = 0; i < strLen; i++)
	//{
	//	// 중복 못 찾았다면 추가
	//	if (checklist.find(s[i]) == checklist.end())
	//	{
	//		checklist.insert(s[i]);
	//	}
	//	// 중복 찾았다면 substring 갱신
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

	// 슬라이딩 테이블
	// ASCII 테이블을 만들고 등장했던 인덱스를 기록
	// right를 올려가며 최대 길이 (right - left) 갱신
	// right의 테이블 값과 중복이 있다면 (테이블 값이 -1이 아니라면) left = 중복값 인덱스 + 1

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