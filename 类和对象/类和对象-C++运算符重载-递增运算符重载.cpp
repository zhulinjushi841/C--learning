#include<iostream>
#include<string>
#include<vector>
using namespace std;
//
// ��ϵ���������
// ���ã�
// ���ع�ϵ������������������Զ������Ͷ�����жԱȲ���
//

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

	bool operator==(Person& p)
	{
		if (this->name == p.name && this->age == p.age)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator!= (Person& p)
	{
		if (this->name == p.name && this->age == p.age)
		{
			return false;
		}
		else
		{
			return true;
		}
	}

};
void test01()
{
	Person p1("Jack", 10);
	Person p2("Jack", 10);
	Person p3("Rose", 23);
	if (p1 == p2)
	{
		cout << "p1��p2����ȵ�!" << endl;
	}
	else
	{
		cout << "p1��p2�ǲ���ȵģ�" << endl;
	}
	if (p1 != p3)
	{
		cout << "p1��p3�ǲ��ȵ�!" << endl;
	}
	else
	{
		cout << "p1��p3����ȵģ�" << endl;
	}
}


//�º����ǳ���� û�й̶���д��
//�ӷ���
int main()
{
	test01();
	system("pause");
	return 0;

}