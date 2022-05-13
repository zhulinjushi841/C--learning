#include <iostream>
#include<map>
using namespace std;
//
//map查找和统计
// 功能描述：
// 对map容器进行查找数据以及统计数据
// 函数原型：
// find(key);	//查找key是否存在，返回该键的元素的迭代器；如果不存在，则返回set.end()；
// 这里的迭代器需要用 map<int,int>::iterator类型来接收其返回的结果
// count(key);	//统计key的元素个数
//

void test01()
{
	map<int, int> mp;
	//查找
	mp.insert(pair<int, int>(1, 10));
	mp.insert(pair<int, int>(2, 20));
	mp.insert(pair<int, int>(3, 30));
	map<int, int>::iterator pos = mp.find(2);
	if (pos != mp.end())
	{
		cout << "查找到了元素 key = " << pos->second << endl;
	}
	else
	{
		cout << "未找到该元素" << endl;
	}


	//统计
	//map不允许插入重复的key元素 对于count统计而言 结果要么为0 要么为1
	int num = mp.count(3);
	cout << num << endl;
}

int main()
{
	test01();
	system("pause");
}