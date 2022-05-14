#include<set>
#include<string>
#include<iostream>
using namespace std;
//
// set����Զ�����������
// 
//
class Person
{
public:
	Person(string name, int age)
	{
		this->Age = age;
		this->Name = name;
	}
	string Name;
	int Age;
};

//�º�����������һ����
class comparePerson
{
public:
	bool operator()(const Person& p1, const Person& p2) const
	{
		//�������� ����
		return p1.Age > p2.Age;
	}
};

void test01()
{
	//�Զ����������� ����ָ��������� �����޷���������
 	set<Person,comparePerson> s;
	
	//����Person����
	Person p1("Tom", 20);
	Person p2("Mike", 22);
	Person p3("Rose", 24);
	Person p4("Jack", 26);

	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);

	for (set<Person>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << "������ " << it->Name << " ���䣺" << it->Age << endl;
	}

}

int main()
{
	test01();
	system("pause");
	return 0;
}