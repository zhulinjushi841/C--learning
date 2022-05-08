#include <iostream>
using namespace std;

//继承方式

//公共继承
class Base1
{
public:
	int A;
protected:
	int B;
private:
	int C;
};

class Son1 :public Base1
{
public:
	void func()
	{
		A = 10;		//父类中的公共权限成员 到子类中依然是公共权限
		B = 20;		//父类中的保护权限成员 到子类中依然是保护权限
		//C = 10;	//父类中的私有权限成员 子类访问不到
	}
};

void test01()
{
	Son1 s1;
	s1.A = 100;
	//s1.B = 20;	//到Son1中 B是保护权限 类外访问不到
}

//保护继承
class  Base2
{
public:
	int A;
protected:
	int B;
private:
	int C;
};

class Son2 :protected Base2
{
public:
	void func()
	{
		A = 100;	//父类中的公共成员 到子类变为保护权限
		B = 200;	//同上
		//C = 20;	//子类访问不到
	}
};

void test02()
{
	Son2 s2;
	//s2.A = 100;		//在Son2中，均为保护权限，因此类外访问不到
	//s1.B = 20;	//到Son2中 B是保护权限 类外访问不到
}

//私有继承
class Base3
{
public:
	int A;
protected:
	int B;
private:
	int C;
};
class Son3 :private Base3
{
public:
	void func()
	{
		A = 20;			//父类中的公共成员 到子类中变为私有成员
		B = 30;			//同上
		//C = 30;		//私有成员无论何种继承方式子类均访问不到
	}
};



int main()
{
	
	system("pause");
	return 0;
}