#include <iostream>
using namespace std;

//继承中的对象模型
class Base
{
public:
	int A;
protected:
	int B;
private:
	int C;
};

class Son :public Base
{
public:
	int D;
};

//利用开发人员命令提示工具查看对象模型 在开始界面中寻找Developer Command Prompt for vs2019
//跳转盘符 G:
// 跳转文件路径 cd 具体路径
// dir 查看当前目录
// 查看命名 cl /dl reportSingleClassLayout类名 文件名
//跳转

void test01()
{
	//父类中全部非静态成员属性均会被子类继承下去
	// 大小为 16
	//父类中私有成员属性 被编译器隐藏 访问不到 但是却是被继承
	cout << "size of Son " << sizeof(Son) << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}


//继承中的构造和析构顺序如下：
//先构造父类 再构造子类 析构的顺序与构造相反 也即先析构子类 再析构父类

//继承中同名的成员处理方式
// 访问子类同名成员 直接访问即可
// 访问父类同名成员 需要加作用域