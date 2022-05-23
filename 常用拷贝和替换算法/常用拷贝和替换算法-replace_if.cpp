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
// replace_if
// 功能描述：
// 将区间内满足条件的元素，替换成指定元素
// 函数原型：
// replace_if(iterator beg, iterator end, _pred, newvalue);
// 按条件替换元素，满足条件的替换成指定元素
// beg 开始迭代器
// end 结束迭代器
// _pred 谓词
// newvalue 替换的新元素
// 
// 总结：
// replace_if按照条件查找，可以利用仿函数灵活筛选满足的条件
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

class Greater30
{
public:
	bool operator() (int val)
	{
		return val >= 30;
	}
		
};

void Print(int val)
{
	cout << val << " ";
}

void test01()
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(40);
	v1.push_back(30);
	v1.push_back(20);
	v1.push_back(20);
	v1.push_back(50);
	v1.push_back(30);

	cout << "替换前：" << endl;
	for_each(v1.begin(), v1.end(), MyPrint());
	cout << endl;

	//将大于等于30的 替换为 3000
	replace_if(v1.begin(), v1.end(), Greater30(), 3000);

	cout << "替换后：" << endl;
	for_each(v1.begin(), v1.end(), MyPrint());
	cout << endl;


}

int main()
{
	test01();
	system("pause");
	return 0;
}

