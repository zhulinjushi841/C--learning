#include<iostream>
#include<vector>
#include<string>
using namespace std;

//学习目标：vector中存放自定义数据类型，并打印输出

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
	
	//向容器中添加数据
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	//遍历数据中的数据
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名：" << it->name << " 年龄：" << it->age << endl;
	}
}


//存放自定义数据 指针
void test02()
{
	vector<Person*> v;

	Person p1("a", 10);
	Person p2("b", 20);
	Person p3("c", 30);
	Person p4("d", 40);
	Person p5("e", 50);

	//向容器中添加数据
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);

	//遍历容器
	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)		//it是指向Person类指针的指针
	{
		cout << "姓名：" << (*it)->name << " 年龄：" << (*it)->age << endl;
	}
}

int main()
{
	test02();
}