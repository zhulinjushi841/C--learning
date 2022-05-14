#include<set>
#include<iostream>
using namespace std;
//set/multiset容器
// set基本概念
// 简介：
// 中文翻译为集合容器
// 所有元素都会在插入时自动被排序
// 本质：
// set/multiset属于关联式容器，底层结构是用二叉树实现
// set和multiset区别：
// set不允许容器中有重复的元素
// multiset允许容器中有重复的元素
// set构造和赋值
// 功能描述：
// 创建set容器以及赋值
// 构造：
// set<T> st;				//默认构造函数
// set(const set &st);		//拷贝构造函数
// 赋值：
// set& operator=(const set &st);		//重载等号操作符
//

void printSet(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	set<int> s1;

	//插入数据 只有insert方式
	s1.insert(10);
	s1.insert(40);
	s1.insert(20);
	s1.insert(30);
	s1.insert(30);

	//遍历容器
	//set容器的特点：1.所有容器插入时会自动被排序
	//2.set容器比允许插入重复值
	printSet(s1);



	//拷贝构造
	set<int> s2(s1);
	printSet(s2);

	//赋值
	set<int> s3;
	s3 = s2;
	printSet(s3);
}

int main()
{
	test01();
	return 0;
}