#include<set>
#include<iostream>
using namespace std;
//set容器-大小和交换
// 功能描述：
// 统计set容器大小以及交换set容器
// 函数原型：
// size();		//返回容器中元素的数目
// empty();		//判断容器是否为空
// swap(st);	//交换两个集合容器
// 
// 
// 
// 
// set容器-插入和删除
// 功能描述：
// set容器进行插入数据和删除数据
// 函数原型：
// insert(elem);		//在容器中插入元素
// clear();				//清除所有元素
// erase(pos);			//删除pos迭代器所指的元素 返回下一个元素的迭代器
// erase(beg, end);		//删除区间[beg,end)的全部元素 返回下一个元素的迭代器
// erase(elem);			//删除容器中值为elem的元素
// 
//

void printSet(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	set<int> s1;

	//set容器的insert插入
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);

	printSet(s1);
	//set容器的清空
	s1.clear();
	printSet(s1);

	//删除元素
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	s1.erase(s1.begin());
	printSet(s1);

	//删除区间元素
	s1.erase(s1.begin(), s1.end());
	printSet(s1);

	//删除特定元素
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	s1.erase(30);
	printSet(s1);



}

int main()
{
	test01();
	return 0;
}