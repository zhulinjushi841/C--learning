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
// count
// 功能描述：
// 统计元素个数
// 函数原型：
// count(iterator beg, iterator end, value);
// 统计元素出现次数
// 
// beg开始迭代器
// end结束迭代器
// value查找的元素
//


//常用查找算法 
void test01()
{
	vector<int> v1;
	
	v1.push_back(10);
	v1.push_back(40);
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(10);

	int num = count(v1.begin(), v1.end(), 10);

	cout << "10的元素个数为：" << num << endl;
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
	bool operator==(const Person& p)
	{
		if (this->Age == p.Age)
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

	Person p("e", 14);

	//放入到容器中
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	

	int num = count(v.begin(), v.end(), p);
	
	cout << "与e同岁数的人员个数为：" << num << endl;

}



int main()
{
	test02();
	system("pause");
	return 0;
}