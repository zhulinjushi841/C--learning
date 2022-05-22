#include<iostream>
#include<vector>
#include<functional>
#include<algorithm>
#include<ctime>
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
// random_shuffle
// 功能描述：
// 洗牌 指定范围内的元素随机调整次序
// 函数原型：
// random_shuffle(iterator beg, iterator end);
// 指定范围内的元素随机调整次序
// beg 开始迭代器
// end 结束迭代器
// 
// 总结：
// random_shuffle洗牌算法比较实用 在使用的时候记得加上随机数种子
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
	srand((unsigned int)time(NULL));

	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	v.push_back(60);

	random_shuffle(v.begin(), v.end());
	for_each(v.begin(), v.end(), Print);


}

int main()
{
	test01();
	system("pause");
	return 0;
}

