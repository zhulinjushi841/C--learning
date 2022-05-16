#include<iostream>
using namespace std;
//
// 左移运算符重载
// 作用：
// 可以输出自定义数据类型
//
class Person
{
	friend ostream& operator<< (ostream& cout, Person& p);
public:
	Person(int a, int b)
	{
		this->A = a;
		this->B = b;
	}
private:
	//利用成员函数重载 左移运算符
	//通常不会利用成员函数重载<<运算符，因为无法实现cout在左侧
	/*void operator<< (Person &p)
	{

	}*/

	int A;
	int B;
};


//只能利用全局函数重载左移运算符
//此处使用了链式编程的思想 返回为cout后就可以使用cout进行无限叠加  ostream的原始版本cout也是链式编程的思想
ostream& operator<< (ostream& cout, Person& p)		//本质 operator<< (cout, p) 简化形式为 cout<<p
{
	cout << "A= " << p.A << " B= " << p.B << endl;
	return cout;
}


void test01()
{
	Person p(10, 20);


	cout << p << endl << "Hello World" << endl;

}

int main()
{
	test01();
	return 0;
}