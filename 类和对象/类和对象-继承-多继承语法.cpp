#include <iostream>
using namespace std;
//C++允许一个类继承多个类
//语法 class 子类：继承方式 父类1 ，继承方式 父类2...
//多继承可能会引发父类中有同名成员出现 需要加作用域区分

//注意：C++实际开发中不建议使用多继承
class Base1
{
public:
	Base1()
	{
		A = 100;
	}
	int A;
};

class Base2
{
public:
	Base2()
	{
		A = 200;
	}
	int A;
};
//子类 需要继承Base1 Base2
//语法 class 子类：继承方式 父类1 ，继承方式 父类2...
class Son :public Base1, public Base2
{
public:
	Son()
	{
		C = 300;
		D = 400;
	}
	int C, D;
};

void test01()
{
	Son s1;
	cout << "sizeof Son = " << sizeof(s1) << endl;
	//当父类中出现同名成员 需要加作用域来区分
	cout << "A = " << s1.Base1::A << endl;
	cout << "A = " << s1.Base2::A << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}