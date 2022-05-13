#include<iostream>
using namespace std;
//
// 运算符重载
// 运算符重载的概念：
// 对已有的运算符重新进行定义，并赋予其另一种功能，以适应不同的数据类型
//
// 加号运算符重载
// 作用：实现两个自定义数据类型相加的运算
// 对于内置的数据类型，编译器知道如何进行运算
// 
// 总结：
//1. 对于内置的数据类型的表达式的运算符是不可能改变的
//2.不要滥用运算符重载
//

class Person
{
public:
	int A;
	int B;
	Person PersonAddPerson(Person& p);
	/*通过类成员函数来实现运算符重载*/
	Person operator+ (Person& p)
	{
		Person temp;
		temp.A = this->A + p.A;
		temp.B = this->B + p.B;
		return temp;
	}

	
};

//自行编写成员函数实现两个Person实例相加的操作
Person Person::PersonAddPerson(Person& p)
{
	Person temp;
	temp.A = this->A + p.A;
	temp.B = this->B + p.B;
	return temp;
}


//通过全局函数重载+
Person operator+ (Person& p1, Person& p2)
{
	Person temp;
	temp.A = p1.A + p2.A;
	temp.B = p2.B + p1.B;
	return temp;
}

//函数重载的运算符重载函数
Person operator+ (Person p1, int a)
{
	Person temp;
	temp.A = p1.A + a;
	temp.B = p1.B + a;
	return temp;

}

void test01()
{
	Person p1,p2;
	p1.A = 10;
	p1.B = 20;
	p2.A = 30;
	p2.B = 40;

	//成员函数重载本质调用
	//Person p3 = p1.operator+(p2);

	//全局函数重载本质调用
	//Person p3 = operator+(p1,p2);
	Person p3 = p1 + p2;

	//运算符重载 也可发生函数重载
	Person p4 = p1 + 100;	//Person + int


	cout << "p3.A = " << p3.A << " p3.B = " << p3.B << endl;
	cout << "p4.A = " << p4.A << " p3.B = " << p4.B << endl;
}



int main()
{
	test01();
	system("pause");
}