#include <iostream>
using namespace std;

//�̳з�ʽ

//�����̳�
class Base1
{
public:
	int A;
protected:
	int B;
private:
	int C;
};

class Son1 :public Base1
{
public:
	void func()
	{
		A = 10;		//�����еĹ���Ȩ�޳�Ա ����������Ȼ�ǹ���Ȩ��
		B = 20;		//�����еı���Ȩ�޳�Ա ����������Ȼ�Ǳ���Ȩ��
		//C = 10;	//�����е�˽��Ȩ�޳�Ա ������ʲ���
	}
};

void test01()
{
	Son1 s1;
	s1.A = 100;
	//s1.B = 20;	//��Son1�� B�Ǳ���Ȩ�� ������ʲ���
}

//�����̳�
class  Base2
{
public:
	int A;
protected:
	int B;
private:
	int C;
};

class Son2 :protected Base2
{
public:
	void func()
	{
		A = 100;	//�����еĹ�����Ա �������Ϊ����Ȩ��
		B = 200;	//ͬ��
		//C = 20;	//������ʲ���
	}
};

void test02()
{
	Son2 s2;
	//s2.A = 100;		//��Son2�У���Ϊ����Ȩ�ޣ����������ʲ���
	//s1.B = 20;	//��Son2�� B�Ǳ���Ȩ�� ������ʲ���
}

//˽�м̳�
class Base3
{
public:
	int A;
protected:
	int B;
private:
	int C;
};
class Son3 :private Base3
{
public:
	void func()
	{
		A = 20;			//�����еĹ�����Ա �������б�Ϊ˽�г�Ա
		B = 30;			//ͬ��
		//C = 30;		//˽�г�Ա���ۺ��ּ̳з�ʽ��������ʲ���
	}
};



int main()
{
	
	system("pause");
	return 0;
}