#include<string>
#include<iostream>
using namespace std;
//
// STL-函数对象
// 函数对象
// 函数对象概念
// 概念：
// 重载 函数调用操作符() 的类 其对象常称为 函数对象(function object)
// 函数对象 使用重载的()时 行为类似于函数调用 也叫作 仿函数
// 本质：
// 函数对象(仿函数)是一个 类 不是一个函数
//
// 函数对象使用
// 特点：
// 函数对象在使用时 可以像普通函数那样调用 可以有参数 可以有返回值
// 函数对象超出普通函数的概念 函数对象可以有自己的状态
// 函数对象可以作为参数传递
// 总结：
// 仿函数的写法非常灵活 并可以作为参数进行传递
//

class MyAdd
{
public:
	int operator() (int a, int b)
	{
		return a + b;
	}
};

//1.函数对象在使用时 可以像普通函数那样调用 可以有参数 可以有返回值
void test01()
{
	MyAdd myAdd;
	cout << myAdd(10, 30) << endl;
}


//2.函数对象超出普通函数的概念 函数对象可以有自己的状态
class MyPrint
{
public:
	MyPrint()
	{
		this->count = 0;
	}
	void operator() (string test)
	{
		cout << test << endl;
		this->count++;
	}
	int count;		//记录内部自己的状态
};

void test02()
{
	MyPrint myPrint;
	myPrint("Hello World");
	myPrint("Hello World");
	myPrint("Hello World");
	myPrint("Hello World");

	cout << "MyPrint 调用的次数 ：" << myPrint.count << endl;

}


void doPrint(MyPrint &mp,string test)
{
	mp(test);
}

//3.函数对象可以作为参数传递
void test03()
{
	MyPrint myPrint;
	doPrint(myPrint, "Hello C++");

}


int main()
{
	test03();
	system("pause");
	return 0;
}