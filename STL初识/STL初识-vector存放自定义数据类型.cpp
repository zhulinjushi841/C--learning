#include<iostream>
#include<vector>
#include<string>
using namespace std;

//ѧϰĿ�꣺vector�д���Զ����������ͣ�����ӡ���

class Person
{
public:
	Person(string name, int age)
	{
		this->name = name;
		this->age = age;
	}

	string name;
	int age;
};

void test01()
{
	vector<Person> v;

	Person p1("a", 10);
	Person p2("b", 20);
	Person p3("c", 30);
	Person p4("d", 40);
	Person p5("e", 50);
	
	//���������������
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	//���������е�����
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "������" << it->name << " ���䣺" << it->age << endl;
	}
}


//����Զ������� ָ��
void test02()
{
	vector<Person*> v;

	Person p1("a", 10);
	Person p2("b", 20);
	Person p3("c", 30);
	Person p4("d", 40);
	Person p5("e", 50);

	//���������������
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);

	//��������
	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)		//it��ָ��Person��ָ���ָ��
	{
		cout << "������" << (*it)->name << " ���䣺" << (*it)->age << endl;
	}
}

int main()
{
	test02();
}