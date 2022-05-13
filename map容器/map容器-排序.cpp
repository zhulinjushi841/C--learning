#include<map>
#include<iostream>
using namespace std;
//
// map容器排序
// 学习目标：
// map容器默认排序规则为 按照key进行 从小到大排序 掌握如何改变排序规则
// 主要技术点：
// 利用仿函数，可以改变排序规则
//

//仿函数调用来进行逆序排序
class MyCompare
{
public:
	bool  operator()(int v1,int v2) const
	{
		//降序
		return v1 > v2;
	}

};

void test01()
{
	map<int, int,MyCompare> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(4, 40));
	m.insert(pair<int, int>(5, 50));

	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << " value = " << it->second << endl;
	}


}

int main()
{
	test01();
	system("pause");
	return 0;
}