#include<list>
#include<string>
#include<iostream>
using namespace std;
//
// ������
// ������������Person�Զ����������ͽ�������Person�����������������䡢���
// ������򣺰�������������� ���������ͬ ������߽��н���
//

class Person
{
public:
	Person(string Name, int Age, int Height)
	{
		this->Name = Name;
		this->Age = Age;
		this->Height = Height;
	}
	string Name;
	int Age;
	int Height;
};

//ָ���������
bool comparePerson(Person& p1, Person& p2)
{
	//��������������
	if (p1.Age == p2.Age)
	{
		//������ͬ ������߽���
		return p1.Height > p2.Height;
	}
	else
	{
		return p1.Age < p2.Age;
	}
	
}

void test01()
{
	list<Person> L1; //��������

	//׼������
	Person p1("Sam", 30, 178);
	Person p2("Jerome", 20, 183);
	Person p3("David", 33, 179);
	Person p4("Rose", 30, 188);
	Person p5("Tom", 19, 168);
	Person p6("Jack", 37, 170);

	//��������
	L1.push_back(p1);
	L1.push_back(p2);
	L1.push_back(p3);
	L1.push_back(p4);
	L1.push_back(p5);
	L1.push_back(p6);

	for (list<Person>::iterator it = L1.begin(); it != L1.end(); it++)
	{
		cout << "����Ϊ��" << it->Name << " ����Ϊ��" << it->Age << " ���Ϊ��" << it->Height << endl;
	}

	//����
	cout << "�����" << endl;
	cout << "------------------------------------------------------" << endl;

	L1.sort(comparePerson);
	for (list<Person>::iterator it = L1.begin(); it != L1.end(); it++)
	{
		cout << "����Ϊ��" << it->Name << " ����Ϊ��" << it->Age << " ���Ϊ��" << it->Height << endl;
	}





}

int main()
{
	test01();
	system("pause");
	return 0;
}