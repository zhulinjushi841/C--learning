#include<iostream>
#include<vector>
#include<functional>
#include<algorithm>
using namespace std;
//
// 常用排序算法
// 学习目标：
// 掌握常用的排序算法
// 算法简介：
// sort					//对容器内元素进行排序
// random_shuffle		//洗牌 指定范围内的元素随机调整次序
// merge				//容器元素合并 并存储到另一容器中
// reverse				//反转指定范围内的元素
// 
// merge
// 功能描述：
// 容器元素合并，并存储到另一容器中
// 注意：两个容器必须是有序的
// 函数原型：
// beg1 容器1开始迭代器
// end1 容器1结束迭代器
// beg2 容器2开始迭代器
// end2 容器2结束迭代器
// dest 目标容器开始迭代器
// 
// 总结：
//

void myPrint(const vector<int>& v)
{
	for (int i = 0; i < v.size(); i++)
	{
		cout << v.at(i) << endl;
	}
}

void Print(int val)
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
		v2.push_back(i + 1);
	}

	//目标容器
	vector<int> vTarget;
	vTarget.resize(v1.size() + v2.size());

	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());

	for_each(vTarget.begin(), vTarget.end(), Print);


}

int main()
{
	test01();
	system("pause");
	return 0;
}

