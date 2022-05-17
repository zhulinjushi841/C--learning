#include<iostream>
#include<list>
using namespace std;
//
// list容器
// list基本概念
// 功能：将数据进行链式存储
// 链表(list)是一种物理存储单元上非连续的存储结构，数据元素的逻辑顺序是通过链表中的指针链接
// 实现的
// 链表的组成：
// 链表由一系列结点组成
// 节点的组成：
// 一个是存储数据元素的 数据域，另一个是存储下一个节点地址的 指针域
// STL中的链表是一个双向循环链表
// 链表的优点：
// 可以对任意位置进行快速地插入或者删除元素
// 缺点：
// 容器遍历速度没有数组快
// 占用空间比数组大
// 
// 由于链表的存储方式并不是连续的内存空间，因此链表list中的迭代器只支持前移和后移 属于双向迭代器
// 
// list有一个很重要的性质，插入和删除操作都不会造成原有list迭代器的失效，这在vector中是不成立的
// 总结：
// STL中的list和vector是两个最常用的容器 各有优缺点
// 
// list构造函数
//功能描述：
// 创建list容器
// 函数原型：
// list<T> lst;				//list采用模板类实现 对象的默认构造形式
// list(beg,end);			//构造函数将[beg,end)区间中的元素拷贝给本身
// list(n,elem);			//构造函数将n个elem拷贝给本身
// list(const list &lst);	//拷贝构造函数
//

void printList(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	list<int> L1;		//默认构造

	//添加数据
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);

	printList(L1);

	//区间方式构造
	list<int> L2(L1.begin(), L1.end());
	printList(L2);

	//拷贝构造
	list<int> L3(L2);
	printList(L3);

	//n个elem
	list<int> L4(10, 123);
	printList(L4);
}

int main()
{
	test01();
}
