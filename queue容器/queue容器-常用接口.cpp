#include<iostream>
#include<queue>
#include<string>
using namespace std;
//
// queue容器常用借口
// 功能描述：
// 栈容器常用的对外接口
// 构造函数：
// queue<T> que;				//queue采用模板类实现 queue对象的默认构造形式
// queue(const queue &que);		//拷贝构造函数
// 赋值操作：
// queue& operator= (const queue &que);		//重载等号操作符
// 数据存取：
// push(elem);		//往队尾添加元素
// pop();			//往队头移除第一个元素
// back();			//返回最后一个元素
// front();			//返回第一个元素
// 大小操作：
// empty();			//判断堆栈是否为空
// size();			//返回栈的大小
// 
//

class Person
{
public:
	
	Person(string Name, int Age)
	{
		this->Age = Age;
		this->Name = Name;
	}
	string Name;
	int Age;
};

//队列queue
void test01()
{
	
	//创建队列
	queue<Person> q;

	//准备数据
	Person p1("唐僧", 30);
	Person p2("悟空", 29);
	Person p3("八戒", 28);
	Person p4("沙僧", 20);

	//入队
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	//判断只要队列不为空 查看队头 和 队尾 然后出队
	cout << "队列大小为：" << q.size() << endl;
	while (!q.empty())
	{
		//查看队头
		cout << "队头数据姓名为: "<< q.front().Name << " 队头数据年龄为：" << q.front().Age << endl;
		//查看队尾
		cout << "队尾数据姓名为: " <<q.back().Name << " 队尾数据年龄为：" << q.back().Age << endl;

		//出队
		q.pop();

		cout << "队列大小为：" << q.size() << endl;
	}



}

int main()
{
	test01();
	system("pause");
	return 0;
}