#include<set>
#include<string>
#include<iostream>
using namespace std;
//
// set存放自定义数据类型
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

//仿函数本质上是一个类
class comparePerson
{
public:
	bool operator()(const Person& p1, const Person& p2) const
	{
		//按照年龄 降序
		return p1.Age > p2.Age;
	}
};

void test01()
{
	//自定义数据类型 必须指定排序规则 否则无法进行排序
 	set<Person,comparePerson> s;
	
	//创建Person对象
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
		cout << "姓名： " << it->Name << " 年龄：" << it->Age << endl;
	}

}

int main()
{
	test01();
	system("pause");
	return 0;
}