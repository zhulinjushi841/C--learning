#include <iostream>
using namespace std;
//C++����һ����̳ж����
//�﷨ class ���ࣺ�̳з�ʽ ����1 ���̳з�ʽ ����2...
//��̳п��ܻ�������������ͬ����Ա���� ��Ҫ������������

//ע�⣺C++ʵ�ʿ����в�����ʹ�ö�̳�
class Base1
{
public:
	Base1()
	{
		A = 100;
	}
	int A;
};

class Base2
{
public:
	Base2()
	{
		A = 200;
	}
	int A;
};
//���� ��Ҫ�̳�Base1 Base2
//�﷨ class ���ࣺ�̳з�ʽ ����1 ���̳з�ʽ ����2...
class Son :public Base1, public Base2
{
public:
	Son()
	{
		C = 300;
		D = 400;
	}
	int C, D;
};

void test01()
{
	Son s1;
	cout << "sizeof Son = " << sizeof(s1) << endl;
	//�������г���ͬ����Ա ��Ҫ��������������
	cout << "A = " << s1.Base1::A << endl;
	cout << "A = " << s1.Base2::A << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}