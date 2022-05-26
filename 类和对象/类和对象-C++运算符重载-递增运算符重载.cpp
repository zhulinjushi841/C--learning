#include<iostream>
#include<string>
#include<vector>
using namespace std;
//
// 关系运算符重载
// 作用：
// 重载关系运算符，可以让两个自定义类型对象进行对比操作
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
		cout << "p1和p2是相等的!" << endl;
	}
	else
	{
		cout << "p1和p2是不相等的！" << endl;
	}
	if (p1 != p3)
	{
		cout << "p1和p3是不等的!" << endl;
	}
	else
	{
		cout << "p1和p3是相等的！" << endl;
	}
}


//仿函数非常灵活 没有固定的写法
//加法类
int main()
{
	test01();
	system("pause");
	return 0;

}