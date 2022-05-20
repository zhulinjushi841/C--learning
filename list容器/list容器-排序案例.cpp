#include<list>
#include<string>
#include<iostream>
using namespace std;
//
// 排序案例
// 案例描述：将Person自定义数据类型进行排序，Person中属性有姓名、年龄、身高
// 排序规则：按照年龄进行升序 如果年龄相同 则按照身高进行降序
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

//指定排序规则
bool comparePerson(Person& p1, Person& p2)
{
	//按照年龄做升序
	if (p1.Age == p2.Age)
	{
		//年龄相同 按照身高降序
		return p1.Height > p2.Height;
	}
	else
	{
		return p1.Age < p2.Age;
	}
	
}

void test01()
{
	list<Person> L1; //创建容器

	//准备数据
	Person p1("Sam", 30, 178);
	Person p2("Jerome", 20, 183);
	Person p3("David", 33, 179);
	Person p4("Rose", 30, 188);
	Person p5("Tom", 19, 168);
	Person p6("Jack", 37, 170);

	//插入数据
	L1.push_back(p1);
	L1.push_back(p2);
	L1.push_back(p3);
	L1.push_back(p4);
	L1.push_back(p5);
	L1.push_back(p6);

	for (list<Person>::iterator it = L1.begin(); it != L1.end(); it++)
	{
		cout << "姓名为：" << it->Name << " 年龄为：" << it->Age << " 身高为：" << it->Height << endl;
	}

	//排序
	cout << "排序后" << endl;
	cout << "------------------------------------------------------" << endl;

	L1.sort(comparePerson);
	for (list<Person>::iterator it = L1.begin(); it != L1.end(); it++)
	{
		cout << "姓名为：" << it->Name << " 年龄为：" << it->Age << " 身高为：" << it->Height << endl;
	}





}

int main()
{
	test01();
	system("pause");
	return 0;
}