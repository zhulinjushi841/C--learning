#include<string>
#include<iostream>
using namespace std;
//
// 1.3.6 ��ģ���Ա����������ʵ��
// ѧϰĿ�꣺
// �ܹ�������ģ���еĳ�Ա��������ʵ��
//

template<class T1,class T2>
class Person
{
public:
	Person(T1 name, T2 age);
	//{
	//	this->m_Age = age;
	//	this->m_Name = name;
	//}


	void ShowPerson();
	//{
	//	cout << "������" << this->m_Name << "���䣺" << this->m_Age << endl;
	//}

	T1 m_Name;
	T2 m_Age;
};

//���캯��������ʵ��
template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
	
		this->m_Age = age;
		this->m_Name = name;
}

//��Ա����������ʵ��
template<class T1, class T2>
void Person<T1, T2>::ShowPerson()
{
	cout << "������" << this->m_Name << " ���䣺" << this->m_Age << endl;
}


void test01()
{
	Person<string, int> P("Tom", 20);
	P.ShowPerson();
}

int main()
{
	test01();
	system("pause");
	return 0;
}