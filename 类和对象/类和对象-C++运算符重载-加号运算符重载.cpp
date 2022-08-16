#include<iostream>
using namespace std;
//
// ���������
// ��������صĸ��
// �����е���������½��ж��壬����������һ�ֹ��ܣ�����Ӧ��ͬ����������
//
// // operator��C++�Ĺؼ��֣����������һ��ʹ��
// ��ʾһ����������������ʱӦ����operator=��operator+��������Ϊһ����������
// �÷���
// ���������
// ��ʾ��
// һ�����������
// 
// �Ӻ����������
// ���ã�ʵ�������Զ�������������ӵ�����
// �������õ��������ͣ�������֪����ν�������
// 
// �ܽ᣺
//1. �������õ��������͵ı��ʽ��������ǲ����ܸı��
//2.��Ҫ�������������
//

class Person
{
public:
	int A;
	int B;
	Person PersonAddPerson(Person& p);
	/*ͨ�����Ա������ʵ�����������*/
	Person operator+ (Person& p)
	{
		Person temp;
		temp.A = this->A + p.A;
		temp.B = this->B + p.B;
		return temp;
	}

	
};

//���б�д��Ա����ʵ������Personʵ����ӵĲ���
Person Person::PersonAddPerson(Person& p)
{
	Person temp;
	temp.A = this->A + p.A;
	temp.B = this->B + p.B;
	return temp;
}


//ͨ��ȫ�ֺ�������+
Person operator+ (Person& p1, Person& p2)
{
	Person temp;
	temp.A = p1.A + p2.A;
	temp.B = p2.B + p1.B;
	return temp;
}

//�������ص���������غ���
Person operator+ (Person p1, int a)
{
	Person temp;
	temp.A = p1.A + a;
	temp.B = p1.B + a;
	return temp;

}

void test01()
{
	Person p1,p2;
	p1.A = 10;
	p1.B = 20;
	p2.A = 30;
	p2.B = 40;

	//��Ա�������ر��ʵ���
	//Person p3 = p1.operator+(p2);

	//ȫ�ֺ������ر��ʵ���
	//Person p3 = operator+(p1,p2);
	Person p3 = p1 + p2;

	//��������� Ҳ�ɷ�����������
	Person p4 = p1 + 100;	//Person + int


	cout << "p3.A = " << p3.A << " p3.B = " << p3.B << endl;
	cout << "p4.A = " << p4.A << " p3.B = " << p4.B << endl;
}



int main()
{
	test01();
	system("pause");
}