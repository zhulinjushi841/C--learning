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
// count_if
// 功能描述：
// 按条件统计元素个数
// 函数原型：
// count_if(iterator beg, iterator end, _Pred);
// 按条件统计元素出现次数
// beg开始迭代器
// end结束迭代器
// _Pred谓词
// 
//


//常用查找算法 
class Greater20
{
public:
	bool operator()(int a)
	{
		return a > 20;
	}
};

void test01()
{
	vector<int> v1;

	v1.push_back(10);
	v1.push_back(40);
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(10);

	int num = count_if(v1.begin(), v1.end(), Greater20());

	cout << "大于20的元素个数为：" << num << endl;
}


class Person
{
public:
	Person(string name, int age)
	{
		this->Name = name;
		this->Age = age;
	}
	string Name;
	int Age;
};

//查找 自定义数据类型
class AgeGreater20
{
public:
	bool operator()(const Person& p)
	{
		return p.Age > 20;
	}
};
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

	//统计大于20岁的人数个数
	int num = count_if(v.begin(), v.end(), AgeGreater20());

	cout << "大于20岁的人员个数为：" << num << endl;

}



int main()
{
	test02();
	system("pause");
	return 0;
}