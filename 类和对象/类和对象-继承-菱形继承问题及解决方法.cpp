#include <iostream>
using namespace std;

//菱形继承的概念
//两个子类继承同一个父类 又有某个类同时继承这两个子类 这种继承被称为菱形继承 或者钻石继承
// 菱形继承存在的问题
// 羊集成了动物的属性 驼同样继承了动物的属性 当羊驼使用属性的时候就会产生二义性
// 羊驼继承自动物的数据继承了两份 而实际上只需要继承一份即可

class Animal
{
public:
	int Age;
};

//利用 虚继承 可以解决菱形继承的问题
//也即在继承之前 加上关键字 virtual 就变为 虚继承
//Animal类称为 虚基类
class Sheep:virtual public Animal {};

class Tuo:virtual public Animal {};

class SheepTuo:public Sheep,public Tuo {};

void test01()
{
	SheepTuo st;
	//当出现菱形继承的时候 两个父类拥有相同的数据 需要作用域区分
	st.Sheep::Age = 18;
	st.Tuo::Age = 30;
	cout << "st.Sheep::Age = " << st.Sheep::Age << endl;
	cout << "st.Tuo::Age = " << st.Tuo::Age << endl;
	cout << st.Age << endl;
	//这份数据只需一份即可 菱形继承导致数据有两份 出现资源浪费	
}

int main()
{
	test01();
	system("pause");
	return 0;
}