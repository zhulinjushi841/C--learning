#include <iostream>
using namespace std;

class Base
{
public:
	Base()
	{
		A = 100;
	}
	int A;
};

class Son :public Base
{
public:
	Son()
	{
		A = 200;
	}
	int A;
};

void test01()
{
	Son s1;
	cout << s1.A << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}


//�̳��еĹ��������˳�����£�
//�ȹ��츸�� �ٹ������� ������˳���빹���෴ Ҳ������������ ����������

//�̳���ͬ���ĳ�Ա����ʽ
// ��������ͬ����Ա ֱ�ӷ��ʼ���
// ���ʸ���ͬ����Ա ��Ҫ��������