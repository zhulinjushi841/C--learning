#include<deque>
#include<iostream>
using namespace std;
//deque大小操作
// 功能描述：
// 对deque容器的大小进行操作
// 函数原型：
// deque.empty();				//判断容器是否为空
// deque.size();				//返回容器中元素的个数
// deque.resize();				//重新指定容器的长度为num 若容器变长 则以默认值填充新位置 如果容器变短 则末尾超出容器长度的元素被删除
// deque.resize(num, elem);		//重新指定容器的长度为num 若容器变长 则以elem填充新位置 如果容器变短 则末尾超出容器长度的元素被删除
// 
//

void printDeque(deque<int>& d)
{
	for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	deque<int> d1;
	cout << d1.empty() << endl;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	cout << d1.size() << endl;
	printDeque(d1);

	d1.resize(20);
	printDeque(d1);
	
	d1.resize(30, 16);
	printDeque(d1);

}

int main()
{
	test01();
	system("pause");
	return 0;
}