#include<iostream>
#include<string>
#include<vector>
using namespace std;
//
// �����������������
// �������������()Ҳ��������
// �������غ�ʹ�õķ�ʽ�ǳ������ĵ��ã���˳�Ϊ�º���
// �º���û�й̶�д�����ǳ����
//

//��ӡ�����
class MyPrint
{
public:
	//���غ������������
	void operator() (string test)
	{
		cout << test << endl;
	}
};

void MyPrint02(string test)
{
	cout << test << endl;
}

void test01()
{
	MyPrint myprint;

	myprint("Hello World");		//����ʹ�������������ں������� ��˳�Ϊ�º���

	MyPrint02("hello world");
}


//�º����ǳ���� û�й̶���д��
//�ӷ���

class MyAdd
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};

void test02()
{
	MyAdd myadd;
	int ret = myadd(100, 200);
	cout << "ret = " << ret << endl;

	//������������		ǰ��MyAdd()�ڴ���һ�������Ķ��� ��������ʹ�����ص�() �º���
	cout << MyAdd()(100, 100) << endl;
}

int main()
{
	/*test01();*/
	test02();
	system("pause");
	return 0;
		
}