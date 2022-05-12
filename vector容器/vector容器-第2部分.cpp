#include<vector>
#include<iostream>
using namespace std;

//
// vector插入和删除
// 功能描述：
// 对vector容器进行插入、删除操作
// 函数原型：
// push_back(ele);						//尾部插入元素ele		尾插
// pop_back();							//删除最后一个元素	尾删
// insert(const_iterator pos, ele);		//迭代器指向位置pos插入元素ele
// insert(const_iterator pos, int count, ele);	//迭代器指向位置pos插入count个元素ele
// erase(const_iterator pos);			//删除迭代器指向的元素
// erase(const_iterator start, const_iterator end);	//删除迭代器从start到end之间的元素
// clear();								//删除容器中全部元素
// 
//
void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	vector<int> v1;

	//尾插
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);

	printVector(v1);

	//尾删
	v1.pop_back();
	printVector(v1);

	//插入
	v1.insert(v1.begin(), 100);
	v1.insert(v1.begin(), 4, 200);
	printVector(v1);

	//删除
	v1.erase(v1.begin());
	printVector(v1);

	//区间删除
	v1.erase(v1.begin(), v1.end());
	printVector(v1);

	//上面代码效果等同于v1.clear()
	/*v1.clear();
	printVector(v1);*/

}


int main()
{
	test01();
	system("pause");
	return 0;
}



//vector数据存取
// 功能描述：
// 对vector中的数据的存取操作
// 函数原型：
// at(int idx);		//返回索引idx所指的数据
// operator[];		//返回索引idx所指的数据
// front();			//返回容器中第一个数据元素
// back();			//返回容器中最后一个数据元素
//


void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
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
	//利用[]方式访问数组中的元素
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;

	//利用at方式访问元素
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " ";
	}
	cout << endl;

	//获取第一个元素
	cout << "第一个元素为： " << v1.front() << endl;

	//获取最后一个元素
	cout << "最后一个元素为: " << v1.back() << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}