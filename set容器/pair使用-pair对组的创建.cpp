#include<string>
#include<iostream>
using namespace std;
//
// pair���鴴��
// ����������
// �ɶԳ��ֵ����ݣ����ö�����Է�����������
// ���ִ�����ʽ��
// pair<type, type> p (value1, value2);
// pair<type, type> p = make_pair( value1, value2);
//

void test01()
{
	//��һ�ַ�ʽ 
	pair<string, int> p("Tom", 20);
	cout << "������ " << p.first << " ���䣺 " << p.second << endl;

	//�ڶ��ַ�ʽ
	pair<string, int> p2 = make_pair("Jerry", 30);
	cout << "������ " << p2.first << "���䣺 " << p2.second << endl;
}

pair<string, int> p("Jack", 19);
pair<string, int> p2 = make_pair("Jerry", 39);


int main()
{
	test01();
	system("pause");
	return 0;
}