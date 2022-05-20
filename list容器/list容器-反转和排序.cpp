#include<list>
#include<iostream>
using namespace std;
//
// list反转和排序
// 功能描述：
// 将容器中的元素反转，以及将容器中的数据进行排序
// 函数原型：
// reverse();		//反转链表
// sort();			//链表排序
//

void printList(list<int>& lst)
{
	for (list<int>::iterator it = lst.begin(); it != lst.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}


bool MyCompare(int v1,int v2)
{
	//降序 就让第一个数 > 第二个数
	return v1 > v2;
}

void test01()
{
	list<int> L1;
	L1.push_back(20);
	L1.push_back(10);
	L1.push_back(40);
	L1.push_back(30);
	printList(L1);

	L1.reverse();
	printList(L1);

	//默认排序规则 从小到大 升序
	L1.sort();
	printList(L1);

	//从大到小 降序
	L1.sort(MyCompare);
	printList(L1);

}

//排序
void test02()
{
	list<int> L1;
	L1.push_back(20);
	L1.push_back(10);
	L1.push_back(40);
	L1.push_back(30);
	printList(L1);

	//排序
	cout << "排序前：" << endl;
	printList(L1);

	//所有不支持随机访问迭代器的容器 不可以使用标准算法
	//不支持随机访问迭代器的容器 内部会提供对应一些算法


}

int main()
{
	test01();
	system("pause");
	return 0;
}