#include<iostream>
using namespace std;
//
// �������������
// ���ã�
// ��������Զ�����������
//
class Person
{
	friend ostream& operator<< (ostream& cout, Person& p);
public:
	Person(int a, int b)
	{
		this->A = a;
		this->B = b;
	}
private:
	//���ó�Ա�������� ���������
	//ͨ���������ó�Ա��������<<���������Ϊ�޷�ʵ��cout�����
	/*void operator<< (Person &p)
	{

	}*/

	int A;
	int B;
};


//ֻ������ȫ�ֺ����������������
//�˴�ʹ������ʽ��̵�˼�� ����Ϊcout��Ϳ���ʹ��cout�������޵���  ostream��ԭʼ�汾coutҲ����ʽ��̵�˼��
ostream& operator<< (ostream& cout, Person& p)		//���� operator<< (cout, p) ����ʽΪ cout<<p
{
	cout << "A= " << p.A << " B= " << p.B << endl;
	return cout;
}


void test01()
{
	Person p(10, 20);


	cout << p << endl << "Hello World" << endl;

}

int main()
{
	test01();
	return 0;
}