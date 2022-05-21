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
// find
// 功能描述：
// 查找指定元素，找到返回指定元素的迭代器，找不到返回结束迭代器end()
// 函数原型：
// find(iterator beg, iterator end, value);
// 按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器end()
// beg开始迭代器
// end结束迭代器
// value查找的元素
//


//查找 内置数据类型
void test01()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	//查找 容器中 是否有 5 这个元素
	vector<int>::iterator it = find(v1.begin(), v1.end(), 5);
	if (it == v1.end())
	{
		cout << "没有找到" << endl;
	}
	else
	{
		cout << "找到：" << *it << endl;
	}
}


class Person
{
public:
	Person(string name, int age)
	{
		this->Name = name;
		this->Age = age;
	}
	//重载== 底层find知道如何对比Person数据类型
	bool operator==(const Person &p)
	{
		if (this->Name == p.Name && this->Age == p.Age)
			return true;
		else
			return false;
	}

	string Name;
	int Age;
};

//查找 自定义数据类型
void test02()
{
	vector<Person> v;
	//创建数据
	Person p1("a", 10);
	Person p2("b", 14);
	Person p3("c", 19);
	Person p4("d", 23);

	//放入到容器中
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	vector<Person>::iterator it = find(v.begin(), v.end(), p2);
	if (it == v.end())
	{
		cout << "未找到" << endl;
	}
	else
	{
		cout << "找到元素 姓名：" << it->Name << " 年龄："<<it->Age << endl;
	}

}



int main()
{
	test02();
	system("pause");
	return 0;
}