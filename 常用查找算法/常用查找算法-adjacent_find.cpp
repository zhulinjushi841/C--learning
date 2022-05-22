#include<iostream>
#include<algorithm>
#include<numeric>
#include<vector>
using namespace std;
//
// 常用查找算法
// 学习目标：
// 掌握常用的查找算法
// 算法简介：
// find				//查找元素
// find_if			//按条件查找元素
// adjacent_if		//查找相邻重复元素
// binary_search	//二分查找法
// count			//统计元素个数
// count_if			//按条件统计元素个数
// 
// adjacent_find(iterator beg, iterator end);
// 功能描述：
// 查找相邻重复元素
// 函数原型：
// find(iterator beg, iterator end, value);
// 查找相邻重复元素，返回相邻元素的第一个位置的迭代器
// beg开始迭代器
// end结束迭代器
//


//查找 内置数据类型
void test01()
{
	vector<int> v1;
	v1.push_back(0);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(4);
	v1.push_back(1);
	v1.push_back(0);
	v1.push_back(6);
	v1.push_back(0);
	v1.push_back(3);


	//查找 容器中 是否有 5 这个元素
	vector<int>::iterator it = adjacent_find(v1.begin(), v1.end());
	if (it == v1.end())
	{
		cout << "没有找到" << endl;
	}
	else
	{
		cout << "找到：" << *it << endl;
	}
}


int main()
{
	test01();
	system("pause");
	return 0;
}