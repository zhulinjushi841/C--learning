#include<iostream>
#include<string>
using namespace std;
//
// 在多态中 通常父类中虚函数的实现是毫无意义的 主要都是调用子类重写的内容
// 因此可以将虚函数改为 纯虚函数
// 纯虚函数语法：
// virtual 返回值类型 函数名 (参数列表) = 0；
// 
// 当类中有了纯虚函数 这个类也称为抽象类
// 
// 抽象类的特点：
// 无法实例化对象
// 子类必须重写抽象类中的纯虚函数 否则也属于抽象类
// 
// 总结：
// 多态的目的就是使父类中的接口更加通用化
//
class Base
{
public:
	//纯虚函数
	//只要有一个纯虚函数 这个类就成为抽象类
	//抽象类特点：
	//1.无法实例化对象
	//2.抽象类的子类必须要重写父类中的纯虚函数 否则也属于抽象类
	virtual void func() = 0;

};

class Son :public Base
{
public:
	void func()
	{
		cout << "Son子类重写纯虚函数" << endl;
	}
};

class Son1 :public Base
{
public:
	void func()
	{
		cout << "Son1子类重写纯虚函数" << endl;
	}
};

void test01()
{
	Son s1;	//抽象类无法实例化对象 子类需要重写纯虚函数之后才能进行类实例化的操作
	Base* it = new Son;
	it->func();
	delete it;

	it = new Son1;
	it->func();
	delete it;
}

int main()
{
	test01();
	system("pause");
	return 0;
}