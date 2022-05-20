#include<list>
#include<iostream>
using namespace std;
//
// list插入和删除
// 功能描述：
// 对list容器进行数据的插入和删除
// 函数原型：
// push_back(elem);			//在容器的尾部加入一个元素
// pop_back();				//删除容器中最后一个元素
// push_front(elem);		//在容器开头插入一个元素
// pop_front();				//从容器开头移除第一个元素
// insert(pos,elem);		//在pos位置插入elem元素的拷贝 返回新数据的位置
// insert(pos,n,elem);		//在pos位置插入n个elem数据 无返回值
// insert(pos,beg,end);		//在pos位置插入[beg,end)区间的数据 无返回值
// clear();					//移除容器中的所有数据
// erase(beg,end);			//移除[beg,end)区间的数据 返回下一个数据的位置
// erase(pos);				//删除pos位置的数据 返回下一个数据的位置
// remove(elem);			//删除容器中所有与elem值匹配的元素
//

void printList(list<int>& lst)
{
	for (list<int>::iterator it = lst.begin(); it != lst.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	list<int> L1;

	//尾插
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	//头插
	L1.push_front(100);
	L1.push_front(200);
	L1.push_front(300);

	//300 200 100 10 20 30 40
	printList(L1);

	//尾删
	L1.pop_back();
	printList(L1);

	//头删
	L1.pop_front();
	printList(L1);

	//insert插入
	list<int>::iterator it = L1.begin();
	L1.insert(++it, 1000);
	printList(L1);

	//删除
	it = L1.begin();
	L1.erase(++it);
	printList(L1);

	//移除
	L1.push_back(10000);
	L1.push_back(10000);
	L1.push_back(10000);
	L1.push_back(10000);
	printList(L1);

	L1.remove(10000);
	printList(L1);

	//清空
	L1.clear();
	printList(L1);



}

int main()
{
	test01();
	system("pause");
	return 0;
}