#include<iostream>
#include<string>
#include"Person.h"
//���ֱ��ʹ�����ַ�ʽ����ֱ�����Ϊ������ֻ�ܿ���ͷ�ļ��еĴ�����޷�����Դ�ļ������еĺ���
//ԭ������ģ�庯���Ĵ���ʱ���ǵ��ý׶Σ�ֻ���ڵ��õ�ʱ��Żᴴ��
//

//��һ�ֽ����ʽ��ֱ�Ӱ��� Դ�ļ�
#include"Person.cpp"

//�ڶ��ֽ����ʽ����.h��.cpp�е�����д��һ�𣬽���׺����Ϊ.hpp�ļ�
#include"Person.hpp"
using namespace std;
//
// 1.3.7 ��ģ����ļ���д
// ѧϰĿ�꣺
// ������ģ���Ա�������ļ���д�����������Լ������ʽ
// ���⣺
// ��ģ���г�Ա��������ʱ��ʵ�ڵ��ý׶Σ����·��ļ���дʱ���Ӳ���
// �����
// �����ʽ1��ֱ�Ӱ���.cppԴ�ļ�
// �����ʽ2����������ʵ��д��ͬһ���ļ��У������ĺ�׺��Ϊ.hpp,hpp��Լ�������ƣ�������ǿ��
// 
//
//template<class T1, class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//
//	void ShowPerson();
//
//	T1 m_Name;
//	T2 m_Age;
//};

//template<class T1, class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
//template<class T1, class T2>
//void Person<T1, T2>::ShowPerson()
//{
//	cout << "������" << m_Name << " ���䣺" << m_Age << endl;
//}

void test01()
{
	Person<string, int> p("Jerry", 18);
	p.ShowPerson();
}

int main()
{
	test01();
	system("pause");
	return 0;
}