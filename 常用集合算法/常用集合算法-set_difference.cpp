#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
//
// 常用集合算法
// 学习目标：
// 掌握常用的集合算法
// 算法简介：
// set_intersection		//求两个容器的交集
// set_union			//求两个容器的并集
// set_difference		//求两个容器的差集
// 
// set_difference
// 功能描述：
// 求两个容器的差集
// 函数原型：
// set_difference(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
// 求两个集合的差集 需要分具体对象 即内部非交集部分
// 注意：两个集合必须是有序序列
// beg1容器1开始迭代器
// end1容器1结束迭代器
// beg2容器2开始迭代器
// end2容器2结束迭代器
// dest目标容器开始迭代器
// 
// 总结：
// 求差集的两个集合必须的有序序列
// 目标容器开辟空间需要从两个容器取较大值
// set_difference返回值既是差集中最后一个元素的位置
//

void myPrint(int val)
{
	cout << val << " ";
}

void test01()
{
	vector<int> v1;
	vector<int> v2;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v1.push_back(i + 5);
	}

	vector<int> vTarget;
	//目标容器需要提前开辟空间
	//最特殊的情况 两个容器没有交集 取两个容器中size较大的作为目标容器开辟空间
	vTarget.resize(max(v1.size(), v2.size()));

	
	cout << "v1和v2的差集为：" << endl;
	vector<int>::iterator itEnd = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());

	for_each(vTarget.begin(), itEnd, myPrint);
	cout << endl;

	cout << "v2和v1的差集为：" << endl;
	itEnd = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vTarget.begin());

	for_each(vTarget.begin(), itEnd, myPrint);
	cout << endl;

}

int main()
{
	test01();
	system("pause");
	return 0;
}