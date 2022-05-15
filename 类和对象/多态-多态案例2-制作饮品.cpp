#include <iostream>
using namespace std;
//
// 多态案例二-制作饮品
// 案例描述：
// 制作饮品的大致流程为：煮水-冲泡-倒入杯中-加入辅料
// 利用多态技术实现本案例，提供抽象制作饮品基类，提供子类制作咖啡和茶叶
// 总结：
// 多态可以这样理解 也即 一个父类中的接口 在继承的多个子类中有着多种形态
//

class AbstractDrinking
{
public:
	//煮水
	virtual void Boil() = 0;

	//冲泡
	virtual void Brew() = 0;

	//倒入杯中
	virtual void PourInCup() = 0;

	//加入辅料
	virtual void AddIngredient() = 0;
	
	//制作饮品
	void makeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		AddIngredient();
	}
};


//制作咖啡
class Coffee :public AbstractDrinking
{
public:
	//煮水
	virtual void Boil()
	{
		cout << "煮农夫山泉" << endl;
	}

	//冲泡
	virtual void Brew()
	{
		cout << "冲泡咖啡" << endl;
	}

	//倒入杯中
	virtual void PourInCup()
	{
		cout << "倒入杯中" << endl;
	}

	//加入辅料
	virtual void AddIngredient()
	{
		cout << "加入糖和牛奶" << endl;
	}

};

class Tea :public AbstractDrinking
{
public:
	//煮水
	virtual void Boil()
	{
		cout << "煮矿泉水" << endl;
	}

	//冲泡
	virtual void Brew()
	{
		cout << "冲泡茶叶" << endl;
	}

	//倒入杯中
	virtual void PourInCup()
	{
		cout << "倒入杯中" << endl;
	}

	//加入辅料
	virtual void AddIngredient()
	{
		cout << "加入枸杞" << endl;
	}

};

void doWork(AbstractDrinking* abs)	//AbstractDrinking* abs = new Coffee
{
	abs->makeDrink();
	delete abs;	//释放堆区内存
}

void test01()
{
	//制作咖啡
	doWork(new Coffee);

	cout << "------------------------------------------" << endl;

	//制作茶叶
	doWork(new Tea);

}

int main()
{
	test01();
	system("pause");
}