#include<iostream>
#include<string>
using namespace std;
//
// �ڶ�̬�� ͨ���������麯����ʵ���Ǻ�������� ��Ҫ���ǵ���������д������
// ��˿��Խ��麯����Ϊ ���麯��
// ���麯���﷨��
// virtual ����ֵ���� ������ (�����б�) = 0��
// 
// ���������˴��麯�� �����Ҳ��Ϊ������
// 
// ��������ص㣺
// �޷�ʵ��������
// ���������д�������еĴ��麯�� ����Ҳ���ڳ�����
// 
// �ܽ᣺
// ��̬��Ŀ�ľ���ʹ�����еĽӿڸ���ͨ�û�
//
class Base
{
public:
	//���麯��
	//ֻҪ��һ�����麯�� �����ͳ�Ϊ������
	//�������ص㣺
	//1.�޷�ʵ��������
	//2.��������������Ҫ��д�����еĴ��麯�� ����Ҳ���ڳ�����
	virtual void func() = 0;

};

class Son :public Base
{
public:
	void func()
	{
		cout << "Son������д���麯��" << endl;
	}
};

class Son1 :public Base
{
public:
	void func()
	{
		cout << "Son1������д���麯��" << endl;
	}
};

void test01()
{
	Son s1;	//�������޷�ʵ�������� ������Ҫ��д���麯��֮����ܽ�����ʵ�����Ĳ���
	Base* it = new Son;
	it->func();
	delete it;

	it = new Son1;
	it->func();
	delete it;
}

int main()
{
	test01();
	system("pause");
	return 0;
}