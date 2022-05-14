#include<set>
#include<iostream>
using namespace std;
//
// 赋值运算符重载
// C++编译器至少给一个类添加4个函数
// 1.默认构造函数(无参，函数体为空)
// 2.默认析构函数(无参，函数体为空)
// 3.默认拷贝构造函数，对属性进行值拷贝
// 4.赋值运算符operator=，对属性进行值拷贝
// 
// 如果类中有属性指向堆区，做赋值操作时也会出现深浅拷贝的问题
//

class Person
{
public:
	Person(int age)
	{
		Age = new int(age);
	}
	int* Age;

	~Person()
	{
		if (Age != nullptr)
		{
			delete Age;
			Age = nullptr;
		}
	}


	//重载 赋值运算符
	Person& operator= (Person& p)
	{
		//编译器是提供浅拷贝
		//Age = p.Age;

		//应该先判断是否有属性在堆区，如果有 先释放干净 再深拷贝
		if (Age != nullptr)
		{
			delete Age;
			Age = nullptr;
		}

		//深拷贝
		Age = new int(*p.Age);

		//返回对象自身
		return *this;
	}
};

void test01()
{
	Person p1(18);
	Person p2(20);

	p2 = p1;  //赋值操作

	cout << "p1的年龄为 ： " << *(p1.Age) << endl;
	cout << "p2的年龄为 ： " << *(p2.Age) << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}