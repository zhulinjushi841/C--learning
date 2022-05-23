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
// swap
// 功能描述：
// 互换两个容器的元素
// 函数原型：
// swap(container c1, container c2);
// 互换两个容器的元素
// C1 容器1
// C2 容器2
// 
//
class MyPrint
{
public:
	void operator() (int val)
	{
		cout << val << " ";
	}
};

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
		v2.push_back(100 + i);
	}

	cout << "交换前 ：" << endl;
	for_each(v1.begin(), v1.end(), Print);
	cout << endl;
	for_each(v2.begin(), v2.end(), Print);
	cout << endl;

	swap(v1, v2);
	cout << "交换后  ：" << endl;
	for_each(v1.begin(), v1.end(), Print);
	cout << endl;
	for_each(v2.begin(), v2.end(), Print);
	cout << endl;
	

}

int main()
{
	test01();
	system("pause");
	return 0;
}

