#include<string>
#include<iostream>
using namespace std;
//
// STL-��������
// ��������
// �����������
// ���
// ���� �������ò�����() ���� ����󳣳�Ϊ ��������(function object)
// �������� ʹ�����ص�()ʱ ��Ϊ�����ں������� Ҳ���� �º���
// ���ʣ�
// ��������(�º���)��һ�� �� ����һ������
//
// ��������ʹ��
// �ص㣺
// ����������ʹ��ʱ ��������ͨ������������ �����в��� �����з���ֵ
// �������󳬳���ͨ�����ĸ��� ��������������Լ���״̬
// �������������Ϊ��������
// �ܽ᣺
// �º�����д���ǳ���� ��������Ϊ�������д���
//

class MyAdd
{
public:
	int operator() (int a, int b)
	{
		return a + b;
	}
};

//1.����������ʹ��ʱ ��������ͨ������������ �����в��� �����з���ֵ
void test01()
{
	MyAdd myAdd;
	cout << myAdd(10, 30) << endl;
}


//2.�������󳬳���ͨ�����ĸ��� ��������������Լ���״̬
class MyPrint
{
public:
	MyPrint()
	{
		this->count = 0;
	}
	void operator() (string test)
	{
		cout << test << endl;
		this->count++;
	}
	int count;		//��¼�ڲ��Լ���״̬
};

void test02()
{
	MyPrint myPrint;
	myPrint("Hello World");
	myPrint("Hello World");
	myPrint("Hello World");
	myPrint("Hello World");

	cout << "MyPrint ���õĴ��� ��" << myPrint.count << endl;

}


void doPrint(MyPrint &mp,string test)
{
	mp(test);
}

//3.�������������Ϊ��������
void test03()
{
	MyPrint myPrint;
	doPrint(myPrint, "Hello C++");

}


int main()
{
	test03();
	system("pause");
	return 0;
}