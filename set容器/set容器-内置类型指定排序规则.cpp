#include<set>
#include<iostream>
using namespace std;
//
// set容器排序
// 学习目标：
// set容器默认排序规则为从小到大，掌握如何改变排序规则
// 主要技术点：
// 利用仿函数，可以改变排序规则
// 仿函数(functor):就是使一个类的使用看上去像一个函数
// 其实现就是类中实现一个operator()
// 这个类就有了类似于函数的行为，就是一个仿函数类了
//

//仿函数 本质上是一个类型
class MyCompare
{
public:
	//两个小括号含义不同 第一个小括号代表要重载()，第二个小括号中包含的是函数的参数列表
	bool operator() (int v1, int v2) const
	{
		return v1 > v2;
	}
};

void test01()
{
	set<int> s1;
	s1.insert(10);
	s1.insert(40);
	s1.insert(20);
	s1.insert(30);

	for (set<int>::iterator it = s1.begin(); it != s1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;


	//指定排序规则为从大到小
	set<int,MyCompare>s2;

	s2.insert(10);
	s2.insert(40);
	s2.insert(20);
	s2.insert(30);

	for (set<int>::iterator it = s2.begin(); it != s2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;


}

int main()
{
	test01();
	system("pause");
	return 0;
}