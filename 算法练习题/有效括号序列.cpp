#include<iostream>
#include<string>
#include<stack>
using namespace std;
//��Ŀ��
// ����һ���������ַ�'(',')','[',']','{','}'���ַ���
// �жϸ������ַ����Ƿ��ǺϷ�����������
// ���ű�������ȷ��˳��رգ�"()"��"(){}[]"���ǺϷ����������У�
// ����"(]"��"([)]"�����Ϸ���
// 
// Ҫ�󣺿ռ临�ӶȺ�ʱ�临�ӶȾ�ΪO(n)
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