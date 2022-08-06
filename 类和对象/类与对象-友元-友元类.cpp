#include<iostream>
#include<string>
using namespace std;
//
// 4.4友元
// 生活中你的家有客厅(Public)、有你的卧室(Private)
// 客厅所有来的客人都可以进去，但是你的卧室是私有的，也就是说只有你能进去
// 但是可以允许好友进去
// 
// 在程序里，有些私有属性 也想让类外特殊的一些函数或者类进行访问，就需要用到友元的技术
// 友元的目的就是让一个函数或者类 访问另一个类中私有成员
// 
// 友元的关键字为 friend
// 
// 友元的三种实现
// 
// 全局函数做友元
// 类做友元
// 成员函数做友元
//

//
// 类做友元
//

class Building;
class GoodGay
{
public:
	GoodGay();

	void visit();	//参观函数 访问Building中的属性
	Building* building;
	
};

class Building
{
	friend class GoodGay;
public:
	Building();
public:
	string m_SittingRoom;	//客厅

private:
	string m_BedRoom;	//卧室
};

//类外写成员函数
Building::Building()
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}

GoodGay::GoodGay()
{
	//创建建筑物对象
	building = new Building;
}

void GoodGay::visit()
{
	cout << "好基友类正在访问：" << building->m_SittingRoom << endl;

	cout << "好基友类正在访问：" << building->m_BedRoom << endl;
}


void test01()
{
	GoodGay gg;
	gg.visit();
}



int main()
{
	test01();
	system("pause");
}