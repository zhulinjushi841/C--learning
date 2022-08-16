#include<iostream>
using namespace std;
//
// 4.2.4构造函数调用规则
// 默认情况下，C++编译器至少给一个类添加3个函数
// 1.默认构造函数(无参，函数体为空)
// 2.默认析构函数(无参，函数体为空)
// 3.默认拷贝构造函数，对属性进行值拷贝
// 
// 构造函数调用规则如下：
// 如果用户定义有参构造函数，C++不再提供默认无参构造，但是会提供默认拷贝构造
// 如果用户定义拷贝构造函数，C++不会再提供其他构造函数
// 
// 
// 4.2.6 初始化列表
// 作用：
// C++提供了初始化，用来初始化属性
// 语法：
// 构造函数():属性1(值1)，属性2(值2)...{}
//

class Person
{
public:
	//传统初始化操作
	Person(int a, int b, int c)
	{
		m_A = a;
		m_B = b;
		m_C = c;
	}

	//初始化列表初始化属性
	Person(int a, int b, int c) :m_A(a), m_B(b), m_C(c)
	{

	}

	int m_A;
	int m_B;
	int m_C;
};


void test01()
{
	/*Person p(10, 20, 30);*/
	Person p;
	cout << "m_A = " << p.m_A << endl;
	cout << "m_B = " << p.m_B << endl;
	cout << "m_C = " << p.m_C << endl;

}

int main()
{
	test01();
	system("pause");
	return 0;
}