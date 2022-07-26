#include<iostream>
#include<string>
using namespace std;
//
// 4.2.5深拷贝和浅拷贝
// 深浅拷贝是面试经典问题，也是常见的一个坑
// 
// 浅拷贝：简单的赋值拷贝操作
// 
// 深拷贝：在堆区重新申请空间，进行拷贝操作
//

class Person
{
public:
	Person()
	{
		cout << "Person的默认构造函数调用" << endl;
	}

	Person(int age,int height)
	{
		m_Age = age;
		m_Height = new int(height);
		cout << "Person的有参构造函数调用" << endl;
	}


	//自己实现拷贝构造函数 解决浅拷贝带来的问题
	Person(const Person& p)
	{
		cout << "拷贝构造函数的调用" << endl;
		m_Age = p.m_Age;
		//m_Height = p.m_Height;   编译器默认实现的是这行代码

		//深拷贝操作
		m_Height = new int(*p.m_Height);
	}

	~Person()
	{
		//析构函数代码，将堆区开辟的数据做释放操作
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;	//防止野指针出现
		}
		
		cout << "Person的析构函数调用" << endl;
	}

	//浅拷贝带来的问题就是堆区的内存重复释放
	//浅拷贝的问题需要用到深拷贝来解决 也就是在拷贝函数中
	//重新建立起新的指针，虽然指针指向的疏浚是一样的，但是其内容(也即地址)
	//是不同的

	int m_Age;
	int* m_Height;
};

void test01()
{
	Person p1(18,160);

	cout << "p1的年龄为：" << p1.m_Age << " 身高为：" << *p1.m_Height << endl;

	Person p2(p1);
	cout << "p2的年龄为：" << p1.m_Age << " 身高为：" << *p2.m_Height << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}