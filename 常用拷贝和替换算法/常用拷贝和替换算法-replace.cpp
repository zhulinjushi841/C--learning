#include<iostream>
#include<vector>
#include<functional>
#include<algorithm>
using namespace std;
//
// 常用拷贝和替换算法
// 学习目标：
// 掌握常用的拷贝和替换算法
// 算法简介：
// copy					//容器内指定范围内的元素拷贝到另一容器中
// replace				//将容器内指定范围的旧元素修改为新元素
// replace_if			//容器内指定范围满足条件的元素替换为新元素
// swap					//互换两个容器的元素
// 
// replace
// 功能描述：
// 将容器内指定范围的旧元素修改为新元素
// 函数原型：
// replace(iterator beg, iterator end, oldvalue, newvalue);
// 将区间内旧元素 替换成 新元素
// beg 开始迭代器
// end 结束迭代器
// oldvalue 旧元素
// newvalue 新元素
// 
//


void Print(int val)
{
	cout << val << " ";
}

void test01()
{
	vector<int> v1;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	vector<int> v2;
	v2.resize(v1.size());

	copy(v1.begin(), v1.end(), v2.begin());
	for_each(v2.begin(), v2.end(), Print);
	cout << endl;


}

int main()
{
	test01();
	system("pause");
	return 0;
}

