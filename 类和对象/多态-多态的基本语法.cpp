#include <iostream>
using namespace std;
//多态是C++面向对象的三大特性之一
// 多态分为两类：静态多态 动态多态
// 静态多态： 函数重载 和 运算符重载 属于静态多态 复用函数名
// 动态多态： 派生类/子类 和 虚函数 实现运行时多态
// 静态多态和动态多态的区别：
// 静态多态的函数地址早绑定 ————在编译阶段确定函数地址
// 动态多态的函数地址万绑定 ————再运行阶段确定函数地址
// 
// 动态多态满足的条件
// 1、有继承关系  
// 2、子类要重写父类的虚函数   与重载形参列表不同不一样 重写的概念： 函数的返回值类型 函数名 参数列表 需要完全相同 才是重写
// 
// 动态多态使用
// 需要父类的指针或者引用 执行子类对象
//

//动物类
class Animal
{
public:
	//虚函数 必须在父类的函数前加上关键字 virtual
	virtual void speak()
	{
		cout << "动物在说话" << endl;
	}
};

//猫类
class Cat :public Animal
{
public:
	void speak()
	{
		cout << "小猫在说话" << endl;
	}
};

//狗类
class Dog :public Animal
{
public:
	void speak()
	{
		cout << "小狗在说话" << endl;
	}
};

//地址早绑定 在编译阶段就确定了函数地址
//如果想执行让猫说话 就不能提前绑定函数地址 需要在运行阶段进行绑定 也即地址晚绑定
void doSpeak(Animal &animal)	//Animal & animal = cat;   //父类的引用或指针可以直接指向子类的对象
{
	animal.speak();
}

int main()
{
	Cat cat;
	Dog dog;
	doSpeak(cat);
	doSpeak(dog);
	system("pause");
	return 0;
}