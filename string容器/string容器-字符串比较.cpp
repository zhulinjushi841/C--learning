#include<iostream>
#include <string>
using namespace std;

//
// string�ַ����Ƚ�
// ����������
// �ַ���֮��ıȽ�
// �ȽϷ�ʽ��
// �ַ����Ƚ��ǰ���ASCII����жԱ� ����ĸ��� ����	x����h
// =����0
// >����1
// <����-1
// ����ԭ�ͣ�
// int compare(const string &s) const;		//���ַ���s�Ƚ�
// int compare(const char *s) const;		//���ַ���s�Ƚ�
//

void test01()
{
	string str1 = "xello";
	string str2 = "hello";

	if (str1.compare(str2) == 0)
	{
		cout << "str1 ���� str2" << endl;
	}
	else if (str1.compare(str2) > 0)
	{
		cout << "str1 ���� str2" << endl;
	}
	else if (str1.compare(str2) < 0)
	{
		cout << "str1 С�� str2" << endl;
	}
}

int main()
{
	test01();
}