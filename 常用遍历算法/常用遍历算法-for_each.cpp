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
// for_each
// 功能描述：
// 实现遍历容器
// 函数原型：
// for_each(iterator beg, iterator end, _func);
// 遍历算法 遍历容器元素
// beg开始迭代器
// end结束迭代器
// _func函数或者函数对象(仿函数)
// 
// 总结：
// for_each在实际开发中是最常用的遍历算法，必须熟练掌握
//

bool myCompare(int a, int b)
{
	return a > b;
}

void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//普通函数
void print01(int a)
{
	cout << a << " ";
}

//仿函数
class print02
{
public:
	void operator() (int val)
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

	//普通函数
	for_each(v1.begin(), v1.end(), print01);

	//在这里普通函数是把函数名放进来，仿函数需要将函数对象放进来
	for_each(v1.begin(), v1.end(), print02());		//需要传进来一个函数对象print02()才可以，不是仅仅一个print02即可



}

int main()
{
	test01();
	system("pause");
	return 0;
}