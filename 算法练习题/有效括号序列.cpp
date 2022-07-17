#include<iostream>
#include<string>
#include<stack>
using namespace std;
//题目：
// 给出一个仅包含字符'(',')','[',']','{','}'的字符串
// 判断给出的字符串是否是合法的括号序列
// 括号必须以正确地顺序关闭，"()"和"(){}[]"均是合法的括号序列，
// 但是"(]"和"([)]"均不合法。
// 
// 要求：空间复杂度和时间复杂度均为O(n)
//

class Solution
{
public:

	bool isValid(string s)
	{
		int len = s.size();
		stack<char> sta;
		for (int i = 0; i < len; i++)
		{
			if (s[i] == '(')sta.push(')');
			else if (s[i] == '[')sta.push(']');
			else if (s[i] == '{')sta.push('}');
			else if (sta.empty())return false;
			else if (s[i] != sta.top())return false;
			else sta.pop();
		}
		return sta.empty();
	}
};