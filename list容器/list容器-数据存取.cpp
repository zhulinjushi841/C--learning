#include<list>
#include<iostream>
using namespace std;
//
// list数据存取
// 功能描述：
// 对list容器中数据进行存取
// 函数原型：
// front();		//返回第一个元素
// back();		//返回最后一个元素
//

void printList(list<int>& lst)
{
	for (list<int>::iterator it = lst.begin(); it != lst.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	list<int> L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	L1.push_back(50);

	//L1[0]不可以用[]访问list容器中的元素
	//不可以用at方式访问list容器中的元素
	//原因是list本质上是链表，不是用连续线性空间存储数据，所以迭代器不支持随机访问

	cout << "第一个元素：" << L1.front() << endl;
	cout << "最后一个元素：" << L1.back() << endl;

	//验证迭代器是不支持随机访问的

	list<int>::iterator it = L1.begin();
	it++;
	it--;
	//支持双向 不支持随机访问的操作
	//判断迭代器的技巧 
	//如果支持it = it +1;	则表明此迭代器支持随机访问
	//如果支持++/--，则表明此迭代器支持双向 如果仅支持一种 则表明次迭代器仅支持单向



}

int main()
{
	test01();
	system("pause");
	return 0;
}