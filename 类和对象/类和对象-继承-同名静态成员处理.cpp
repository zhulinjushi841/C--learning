#include <iostream>
using namespace std;
//静态成员和非静态成员出现同名 处理方式一致 只不过有两种访问方式 也即 1、通过对象访问 2、通过类名访问
// 访问子类同名成员 直接访问即可
// 访问父类同名成员 需要加作用域

class Base
{
public:
	static int A;
	static void func()
	{
		cout << "Base 下 静态函数调用" << endl;
	}
	static void func(int a)
	{
		cout << "Base 下 静态函数调用" << endl;
	}
};

int Base::A = 100;

class Son :public Base
{
public:
	static int A;
	static void func()
	{
		cout << "Son 下 静态函数调用" << endl;
	}
};
int Son::A = 200;

//同名静态属性
void test01()
{
	//1、通过对象访问
	Son s1;
	cout << "Son下 A= " << s1.A << endl;
	cout << "Base下 A= " << s1.Base::A << endl;

	//2、通过类名访问
	cout << "Son下 A= " << Son::A << endl;
	//第一个::表示通过类名方式访问     第二个::表示访问父类作用域下
	cout << "Son下 A= " << Son::Base::A << endl;
}

//同名静态成员函数
void test02()
{
	Son s;
	//1、通过对象访问
	s.func();
	s.Base::func();

	//2、通过类名访问
	Son::func();
	Son::Base::func();
	//子类出现和父类同名静态成员函数 也会隐藏父类中所有同名成员函数
	//如果想访问父类中被隐藏的同名成员 需要加作用域
	Son::Base::func(100);

}
int main()
{
	test02();
	system("pause");

	return 0;
}