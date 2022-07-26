#include<iostream>
using namespace std;
//
// 3.3函数重载
// 3.3.1函数重载概述
// 作用：函数名可以相同，提高复用性
// 
// 函数重载满足条件：
// 1.同一个作用域下
// 2.函数名相同
// 3.函数参数 类型不同 或者 个数不同 或者 顺序不同
// 
// 注意：函数的返回值不可以作为函数重载的条件
// 
// 
// 
// 3.3.2函数重载注意事项
// 引用作为重载条件
// 函数重载碰到函数默认参数
//

// 函数重载满足条件：
// 1.同一个作用域下
// 2.函数名相同
// 3.函数参数 类型不同 或者 个数不同 或者 顺序不同


// 3.函数参数 类型不同
void func()
{
	cout << "func的调用" << endl;
}

void func(int a)
{
	cout << "func(int a)的调用" << endl;
}

//3.函数参数  个数不同
void func(double a)
{
	cout << "func(int a)的调用" << endl;
}

// 3.函数参数 顺序不同
void func(double a, int b)
{
	cout << "func(double a, int b)的调用" << endl;
}

void func( int b, double a)
{
	cout << "func(int b, double a)的调用" << endl;
}

//注意事项：函数的返回值不可以作为函数重载的条件


//函数重载的注意事项
//1.引用作为重载的条件
//下面两个不同版本的重载主要区别是：第一个可读可写，第二个加上了const只可读不可写
void fun(int& a)	//int &a = 10; 不合法
{
	cout << "func(int &a)调用" << endl;
}

void fun(const int& a)	//const int &a = 10;  合法
{
	cout << "func(const int &a)调用" << endl;
}

//2.函数重载碰到默认参数
void fun2(int a, int b = 10)
{
	cout << "fun2(int a)的调用" << endl;
}

void fun2(int a)
{
	cout << "fun2(int a)的调用" << endl;
}

//所以在重载的时候就不要加上默认参数


int main()
{
	func(10);
	func();
	func(10, 3.4);
	func(3.4, 10);

	int a = 10;
	fun(a);
	fun(10);

	//fun2(10);	 当函数重载碰到默认参数，出现二义性，报错，应当尽量避免这种情况

	system("pause");
	return 0;
}