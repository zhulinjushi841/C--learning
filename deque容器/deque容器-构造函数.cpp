#include<deque>
#include<iostream>
using namespace std;
//
// deque容器
// deque容器的基本概念
// 功能：
// 双端数组，可以对头端进行插入和删除操作
// deque与vector区别：
// vector对于头部的插入删除效率较低，数据量越大，效率越低
// deque相对而言，对头部的插入删除速度会比vector要快
// vector访问元素时的速度会比deque块，这和两者内部实现有关
// 
// deque内部工作原理：
// deque内部有个中控器 维护每段缓冲区中的内容 缓冲区中存放着真实数据
// 中控器中记录的就是地址 所以可以一直往中插入和删除数据
// 中控器维护的是每个缓冲区的地址 使得使用deque时像一片连续的内存空间
// deque容器是支持随机访问的
// 
// deque构造函数
// 功能描述：
// deque容器构造
// 函数原型：
// deque<T> deqT;				//默认构造形式
// deque(beg, end);				//构造函数将[beg,end)区间中的元素拷贝给本身
// deque(n,elem);				//构造函数将n个elem拷贝给本身
// deque(const deque &deq);		//拷贝构造函数
// 
//

void printDeque(deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		//使用迭代器类型为 const_iterator时，容器中的数据就不可修改，变为只读
		//*it = 100;
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}

	printDeque(d1);

	//区间赋值
	deque<int> d2(d1.begin(), d1.end());

	printDeque(d2);

	deque<int> d3(10, 23);
	printDeque(d3);

	deque<int> d4(d3);
	printDeque(d4);
}

int main()
{
	test01();
	system("pause");
	return 0;
}