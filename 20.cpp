#include "20.h"

bool Twenty::isValid(std::string s)
{
	std::stack<char> cs;
	for (char c : s)
	{
		if (cs.empty())
		{
			cs.push(c);
		}
		// 아래 3개 묶었으면 좋았을듯
		else if (c == ')')
		{
			if (cs.top() == '(') cs.pop();
			else return false;
		}
		else if (c == '}')
		{
			if (cs.top() == '{') cs.pop();
			else return false;
		}
		else if (c == ']')
		{
			if (cs.top() == '[') cs.pop();
			else return false;
		}
		else
		{
			cs.push(c);
		}
	}
	if (!cs.empty()) return false;
	else return true;
}