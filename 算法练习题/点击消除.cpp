#include<iostream>
#include<stack>
#include<vector>
#include<string>
using namespace std;
//
// ��Ŀ��
// ����������
// һ���ַ���������Сд��ĸ��ɡ�(�ַ�����С������300000)
// ���������
// һ���ַ�����Ϊ"�������"���������̬��������յ��ַ���Ϊ�մ��������0
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