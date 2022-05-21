#include<algorithm>
#include<functional>
#include<numeric>
#include<vector>
#include<iostream>
using namespace std;
//
// STL-常用算法
// 概述：
// 算法主要是由头文件<algorithm> <functional> <numeric>组成
// <algorithm>是所有STL文件中最大的一个，范围涉及到比较、查找、交换、遍历操作、复制、修改等等
// <numeric>体积很小，只包括在几个序列上面进行简单数学运算的模板函数
// <functional>定义了一些模板类，用以声明函数对象
// 
// 常用遍历算法
// 学习目标：
// 掌握常用的遍历算法
// 算法简介：
// for_each		//遍历容器
// transform	//搬运容器到另一个容器中
// 
// transform
// 功能描述：搬运容器到另一个容器中
// 函数原型：
// transform(iterator beg1, iterator end1, iterator beg2, _func);
// beg1 源容器开始迭代器
// end1 源容器结束迭代器
// beg2 目标容器开始迭代器
// end2 目标容器开始迭代器
// _func 函数或者函数对象
//

class Transform
{
public:
	int operator()(int v)
	{
		return v;
	}
};

class myPrint
{
public:
	void operator()(int val )
	{
		cout << val << " ";
	}
};

void test01()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	
	vector<int> vTarget;	//目标容器

	vTarget.resize(v1.size());		//目标容器 需要提前开辟空间

	transform(v1.begin(), v1.end(), vTarget.begin(), vTarget.end(), Transform());

	for_each(vTarget.begin(), vTarget.end(), myPrint());
	cout << endl;


}

int main()
{
	test01();
	system("pause");
	return 0;
}