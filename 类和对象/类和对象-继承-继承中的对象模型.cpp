#include <iostream>
using namespace std;

class Base
{
public:
	Base()
	{
		A = 100;
	}
	int A;
};

class Son :public Base
{
public:
	Son()
	{
		A = 200;
	}
	int A;
};

void test01()
{
	Son s1;
	cout << s1.A << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}


//继承中的构造和析构顺序如下：
//先构造父类 再构造子类 析构的顺序与构造相反 也即先析构子类 再析构父类

//继承中同名的成员处理方式
// 访问子类同名成员 直接访问即可
// 访问父类同名成员 需要加作用域