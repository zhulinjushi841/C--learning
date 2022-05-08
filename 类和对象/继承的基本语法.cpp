#include <iostream>
using namespace std;

//继承的好处 就是减少重复的代码
// 语法： class 子类：继承方式 父类
// 子类 也称为 派生类 
// 父类 也称为 基类
// 派生类中的成员包含有两大部分 一部分是从基类继承过来的，另一部分是自己增加的成员，从积累继承来的
// 表现其共性，而新增的成员则体现了其个性

//公共界面
class BasePage
{
public:
	void header()
	{
		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
	}
	void footer()
	{
		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
	}
	void left()
	{
		cout << "Java、Python、C++、...（公共分类列表）" << endl;
	}
};

//Java界面
class Java:public BasePage
{
public:
	void content()
	{
		cout << "Java学科视频" << endl;
	}
};

//Python界面
class Python :public BasePage
{
public:
	void content()
	{
		cout << "Python学科视频" << endl;
	}
};
//C++界面
class CPP :public BasePage
{
public:
	void content()
	{
		cout << "CPP学科视频" << endl;
	}
};
void test01()
{
	Java ja;
	ja.header();
	ja.footer();
	ja.content();
	ja.left();
	cout << "-------------------------------------" << endl;
	Python py;
	py.header();
	py.footer();
	py.content();
	py.left();
	cout << "---------------------------------------" << endl;
	CPP cpp;
	cpp.header();
	cpp.footer();
	cpp.content();
	cpp.left();

}

int main()
{
	test01();
	system("pause");
	return 0;
}