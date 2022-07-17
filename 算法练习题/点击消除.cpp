#include<iostream>
#include<stack>
#include<vector>
#include<string>
using namespace std;
//
// 题目：
// 输入描述：
// 一个字符串，仅由小写字母组成。(字符串大小不大于300000)
// 输出描述：
// 一个字符串，为"点击消除"后的最终形态，如果最终的字符串为空串，则输出0
//

int main()
{
	string s;
	cin >> s;
	int len = s.size();
	stack<char> sta;
	for (int i = 0; i < len; i++)
	{
		if (sta.empty())sta.push(s[i]);
		else if (sta.top() == s[i])sta.pop();
		else sta.push(s[i]);
	}
	
	if (sta.empty())
	{
		cout << 0;
		return 0;
	}

	string res(sta.size(), '0');
	for (int i = res.size() - 1; i >= 0; i--)
	{
		res[i] = sta.top();
		sta.pop();
	}
	cout << res;
	return 0;
}