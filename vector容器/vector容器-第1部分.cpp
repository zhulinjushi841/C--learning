#include <iostream>
#include<vector>
using namespace std;

//vector容器
// vector基本概念
// 功能：
// vector数据结构和数组非常类似，也称为单端数组
//vector与普通数组区别：
// 不同之处在于数组是静态空间，而vector可以动态扩展
// 动态扩展：
// 并不是在原有空间之后虚接新空间，而是找更大的内存空间，然后将原数据拷贝新空间，并释放原空间
// vector容器的迭代器是支持随机访问的迭代器
// 常用的迭代器有： v.end()    v.begin()
// 支持的操作有尾插和尾删，分别是 push_back() 和 pop_back()
// 
// vector构造函数
// 功能描述：
// 创建vector容器
// 函数原型：
// vector<T> v;					//采用模板实现类实现，默认构造函数
// vector(v.begin(),v.end());	//将v[begin(),end()]区间中的元素拷贝给本身
// vector(n,elem);				//构造函数将n个elem拷贝给本身
// vector(const vector &vec);	//拷贝构造函数
//

void printVector( vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	
}


//vector容器构造
void test01()
{
	vector<int> v1;			//默认构造 无参构造

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	//通过区间方式进行构造
	vector<int> v2(v1.begin(), v1.end());
	printVector(v2);

	//n个elem方式构造
	vector<int> v3(10, 100);
	printVector(v3);

	//拷贝构造函数
	vector<int> v4(v3);
	printVector(v4);

}


int main()
{
	test01();
}




//vector赋值操作
//功能描述：
//给vector容器进行赋值
//函数原型：
//vector& operator=(const vector &vec);		//重载等号操作符
// assign(beg, end);						//将[beg, end)区间中的数据拷贝赋值给本身
// assign(n,elem);							//将n个elem拷贝赋值给本身
// 
// 总结：
// vector赋值方式比较简单，使用 operator=，或者assign都可以
//

void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//vector赋值
void test01()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	//赋值   operator=
	vector<int> v2;
	v2 = v1;
	printVector(v2);

	//赋值 assign
	vector<int> v3;
	v3.assign(v1.begin(), v1.end());
	printVector(v3);

	//n个elem方式赋值
	vector<int> v4;
	v4.assign(10, 5);
	printVector(v4);


}

int main()
{
	test01();
	system("pause");
}


//vector容器和大小
// 功能描述：
// 对vector容器的容器和大小操作
// 容器原型：
// empty();					//判断容器是否为空
// capacity();				//容器的容量
// size();					//返回容器中元素的个数
// resize(int num);			//重新指定容器的长度为num，若容器变长，则以默认值填充新位置，若容器变短，则末尾超出容器长度的元素将被删除
// resize(int num, elem);	//重新指定容器的长度为num，若容器变长，则以elem填充新位置，若容器变短，则末尾超出容器长度的元素将被删除
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
	printVector(v1);

	if (v1.empty())	//真 代表容器为空
	{
		cout << "v1为空" << endl;
	}
	else
	{
		cout << "v1为非空" << endl;
		cout << "v1的容量为： " << v1.capacity() << endl;
		cout << "v1的大小为： " << v1.size() << endl;
	}

	//重新制定大小
	v1.resize(15, 100);		//默认用0填充 但利用重载的版本可以指定默认填充值 如果这里用100则会使用100进行填充
	cout << "v1的容量为： " << v1.capacity() << endl;
	printVector(v1);		//如果重新指定的比原来长，就默认用0填充新的位置

	v1.resize(5);
	printVector(v1);		//如果重新指定的比原来短，则超出的部分会被删掉
}

int main()
{
	test01();

	system("pause");

}