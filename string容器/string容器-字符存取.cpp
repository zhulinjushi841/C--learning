#include<iostream>
#include<string>
using namespace std;

//string�ַ���ȡ
// string�е����ַ���ȡ��ʽ������
// 
// char& operator[](int n);		//ͨ��[]��ʽȡ�ַ�
// char& at(int n);				//ͨ��at������ȡ�ַ�
//

void test01()
{
	string str = "hello";
	
	//1.ͨ��[]���ʵ����ַ�
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << " ";
	}
	cout << endl;
	//2.ͨ��at��ʽ���ʵ����ַ�
	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << " ";
	}
	cout << endl;


//�޸ĵ����ַ�
	str[0] = 'x';
	cout << "str = " << str << endl;

	str[1] = 'x';
	cout << "str = " << str << endl;
}

int main()
{
	test01();
}