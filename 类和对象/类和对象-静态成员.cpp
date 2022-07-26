#include<iostream>
using namespace std;

//
// 4.2.8静态成员
// 静态成员就是在成员变量和成员函数前加上关键字static，称为静态成员
// 静态成员分为：
// 静态成员变量
// 所有成员共享一份数据
// 在编译阶段分配内存
// 类内声明，类外初始化
// 
// 静态成员函数
// 所有对象共享同一个函数
// 静态成员函数只能访问静态成员变量
// 
//

//静态成员变量
class Person
{
public:
	// 所有成员共享一份数据
	// 在编译阶段分配内存
	// 类内声明，类外初始化
	static int A;


	//静态成员函数
	static void func()
	{
		A = 100;	//静态成员函数可以访问 静态成员变量
		//B = 200;	//静态成员函数 不可以访问 非静态成员变量
		//无法区分到底是哪个对象的B属性
		
		cout << "static void func调用" << endl;
	}

	//静态成员函数也是有访问权限的，类外访问不到私有静态成员函数


	int B;

	//静态成员变量也是有访问权限的
private:
	//static int B;		//类外访问不到私有静态成员


};

int Person::A = 0;

void test01()
{
	Person p;
	cout << p.A << endl;

	Person p2;
	p2.A = 200;

	cout << p.A << endl;
}

void test02()
{
	//静态成员变量 不属于某个对象上，所有对象都共享同一份数据
	//因此静态成员变量有两种访问方式

	//1.通过对象进行访问
	Person p;
	cout << p.A << endl;

	//2.通过类名直接进行访问
	cout << Person::A << endl;
}


void test03()
{
	//1.通过对象访问
	Person p;
	p.func();

	//2.通过类名访问
	Person::func();
}

int main()
{
	test03();
	system("pause");
}