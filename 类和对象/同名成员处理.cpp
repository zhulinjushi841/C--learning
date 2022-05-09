#include <iostream>
using namespace std;

//同名成员处理
//子类对象可以直接访问到子类中的同名函数
//子类对象加作用域可以访问到父类同名成员
//当子类与父类中拥有同名的成员函数，子类会隐藏父类中的同名成员函数 加作用域可以访问到父类中的同名函数

class Base
{
public:
	Base()
	{
		A = 100;
	}
	int A;
	void func()
	{
		cout << "Base下函数调用" << endl;
	}
};


class Son :public Base
{
public:
	Son()
	{
		A = 200;
	}
	int A;
	void func()
	{
		cout << "Son下函数调用" << endl;
	}
	
};

//同名属性成员处理
void test01()
{
	Son s1;
	cout << "Son下的A " << s1.A << endl;
	//如果通过子类对象 访问到父类中的同名成员 需要加作用域
	cout << "Base下的A " << s1.Base::A << endl;
}

//同名成员函数处理
void test02()
{
	Son s;
	s.func(); //直接调用 调用的是子类中的同名成员
	//如果子类中出现和父类同名的成员函数 子类的同名成员会隐藏掉父类中所有的同名成员函数
	//如果想访问到父类中的被隐藏的同名成员函数 需要加作用域
	s.Base::func();		//调用父类中的同名函数 需要在函数前加上父类和作用域符号 ::
}

int main()
{
	test02();

	system("pause");
}