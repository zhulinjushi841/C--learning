#include <iostream>
using namespace std;
//��̬��Ա�ͷǾ�̬��Ա����ͬ�� ����ʽһ�� ֻ���������ַ��ʷ�ʽ Ҳ�� 1��ͨ��������� 2��ͨ����������
// ��������ͬ����Ա ֱ�ӷ��ʼ���
// ���ʸ���ͬ����Ա ��Ҫ��������

class Base
{
public:
	static int A;
	static void func()
	{
		cout << "Base �� ��̬��������" << endl;
	}
	static void func(int a)
	{
		cout << "Base �� ��̬��������" << endl;
	}
};

int Base::A = 100;

class Son :public Base
{
public:
	static int A;
	static void func()
	{
		cout << "Son �� ��̬��������" << endl;
	}
};
int Son::A = 200;

//ͬ����̬����
void test01()
{
	//1��ͨ���������
	Son s1;
	cout << "Son�� A= " << s1.A << endl;
	cout << "Base�� A= " << s1.Base::A << endl;

	//2��ͨ����������
	cout << "Son�� A= " << Son::A << endl;
	//��һ��::��ʾͨ��������ʽ����     �ڶ���::��ʾ���ʸ�����������
	cout << "Son�� A= " << Son::Base::A << endl;
}

//ͬ����̬��Ա����
void test02()
{
	Son s;
	//1��ͨ���������
	s.func();
	s.Base::func();

	//2��ͨ����������
	Son::func();
	Son::Base::func();
	//������ֺ͸���ͬ����̬��Ա���� Ҳ�����ظ���������ͬ����Ա����
	//�������ʸ����б����ص�ͬ����Ա ��Ҫ��������
	Son::Base::func(100);

}
int main()
{
	test02();
	system("pause");

	return 0;
}