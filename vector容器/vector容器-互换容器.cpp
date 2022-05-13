#include<vector>
#include<iostream>
using namespace std;
//
// vector互换容器
// 功能描述：
// 实现两个容器内元素进行互换
// 函数原型：
// swap(vec);	//将vec与本身的元素互换
// 总结：
// 主要用途是可以通过创建匿名对象，swap可以使两个容器互换，可以达到使用的收缩内存的效果
//

void printArray(vector<int>& vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec.at(i) << " ";
	}
	cout << endl;
}

void printVector(vector<int>& vec)
{
	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	cout << "交换前：" << endl;
	printVector(v1);
	vector<int> v2;
	for (int i = 10; i > 0; i--)
	{
		v2.push_back(i);
	}
	v1.swap(v2);
	cout << "交换后：" << endl;
	printVector(v1);
}


/// 2.实际用途
/// 巧用swap可以收缩内存空间

void test02()
{
	vector<int> v;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
	}
	cout << "v的容量为 ： " << v.capacity() << endl;
	cout << "v的大小为：" << v.size() << endl;

	v.resize(10);	//重新指定大小
	cout << "v的容量为 ： " << v.capacity() << endl;
	cout << "v的大小为：" << v.size() << endl;

	//巧用swap收缩内存
	vector<int>(v).swap(v);
	cout << "v的容量为 ： " << v.capacity() << endl;
	cout << "v的大小为：" << v.size() << endl;

	//vector<int>(v)是匿名对象   .swap(v)进行的是容器交换
}


int main()
{
	test02();
	system("pause");
}