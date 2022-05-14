#include<iostream>
#include<set>
using namespace std;
//
// set查找和统计
// 功能描述：
// 对set容器进行查找数据以及统计数据
// 函数原型：
// find(key);		//查找key是否存在，若存在，返回该键的元素的迭代器；若不存在，返回set.end()
// count(key);		//统计key的元素个数
//
//

//void test01()
//{
//	//查找
//	set<int> s1;
//
//	//插入数据
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(30);
//	s1.insert(40);
//	s1.insert(50);
//
//	set<int>::iterator pos = s1.find(30);
//	if (pos != s1.end())
//	{
//		cout << "找到元素： " << *pos << endl;
//	}
//	else
//	{
//		cout << "未找到该元素 " << endl;
//	}
//}
//
//
//
//void test02()
//{
//	//查找
//	set<int> s1;
//
//	//插入数据
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(30);
//	s1.insert(40);
//	s1.insert(50);
//
//	int num = s1.count(30);
//	//对于set而言，统计的结果要么是0 要么是1
//	cout << "num = " << num << endl;
//}
//
//int main()
//{
//	test02();
//	system("pause");
//	return 0;
//}


//
// set和multiset区别
// 学习目标：
// 掌握set和multiset的区别
// 区别：
// set不可以插入重复数据，multiset可以
// set插入数据的同时会返回插入结果 表示插入是否成功
// multiset不会检测数据，因此可以插入重复数据
// 总结：
// 如果不允许插入重复数据可以利用set
// 如果需要插入重复数据需要利用multiset
//


void test02()
{
	set<int> s;
	
	pair<set<int>::iterator,bool> ret = s.insert(10);
	if (ret.second)
	{
		cout << "第一次插入成功" << endl;
	}
	else
	{
		cout << "第一次插入失败" << endl;
	}

	//set类型的插入返回的是pair类型
	ret = s.insert(10);
	if (ret.second)
	{
		cout << "第二次插入成功" << endl;
	}
	else
	{
		cout << "第二次插入失败" << endl;
	}

	multiset<int> s2;
	//multiset类型返回的是一个迭代器 iterator
	s2.insert(10);
	s2.insert(10);
	s2.insert(10);

	for (multiset<int>::iterator it = s2.begin(); it != s2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

}


int main()
{
	test02();
	system("pause");
	return 0;
}