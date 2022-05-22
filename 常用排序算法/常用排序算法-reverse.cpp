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
// sort
// 功能描述：
// 将容器内元素进行反转
// 函数原型：
// reverse(iterator beg, iterator end);
// 反转指定范围的元素
// beg 开始迭代器
// end 结束迭代器
// 
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
	vector<int> v;

	v.push_back(10);
	v.push_back(50);
	v.push_back(40);
	v.push_back(20);
	v.push_back(30);
	v.push_back(70);

	reverse(v.begin(), v.end());
	for_each(v.begin(), v.end(), Print);


}

int main()
{
	test01();
	system("pause");
	return 0;
}

