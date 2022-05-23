#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;
//
// 常用算术生成算法
// 学习目标：
// 掌握常用的算术生成算法
// 注意：
// 算术生成算法属于小型算法，需要包含头文件#include<numeric>
// 算法简介：
// accumulate		//计算容器元素累计总和
// fill				//向容器中添加元素
// 
// fill
// 功能描述：
// 向容器中填充指定的元素
// 函数原型：
// fill(iterator beg, iterator end, value);
// 向容器中填充元素
// beg 开始迭代器
// end 结束迭代器
// value 起始值
// 
// 总结：
// 利用fill可以将容器内元素填充为 指定的值
//

void myPrint(int val)
{
	cout << val << " ";
}

void test01()
{
	vector<int> v;
	v.resize(10);

	//后期可以重新填充
	fill(v.begin(), v.end(), 100);

	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;

}

