#include <iostream>
#include <string>
using namespace std;
//案例描述：
// 分别利用普通写法和多态技术，设计两个操作数进行运算的计算器类
// 
// 多态的优点
// 1、代码组织结构清晰
// 2、可读性强
// 3、利于前期和后期的扩展和维护
//

//普通实现
class Calculator
{
public:

	int getResult(string oper)
	{
		if (oper == "+")
		{
			return num1 + num2;
		}
		else if (oper == "-")
		{
			return num1 - num2;
		}
		else if (oper == "*")
		{
			return num1 * num2;
		}
		//如果想扩展新的功能 需要修改源码
		//在真实的开发中 提倡开闭原则
		//开闭原则：对扩展进行开放，对修改进行关闭
		
	}
	
	int num1;
	int num2;
};

void test01()
{
	Calculator c;
	c.num1 = 10;
	c.num2 = 5;
	cout << "+  " << c.getResult("+") << endl;
	cout << "*  " << c.getResult("*") << endl;
}




//利用多态实现
//多态好处：
// 1、组织结构清晰
// 2、可读性强
// 3、对于前期和后期的扩展和维护
//实现计算器的抽象类
class AbstractCalculator
{
public:
	virtual int getResult()
	{
		return 0;
	}
	
	int num1;
	int num2;

};

//加法计算器类
class AddCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return num1 + num2;
	}
};

//减法计算器类
class SubtractCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return num1 - num2;
	}
};


//乘法计算器类
class MulCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return num1 * num2;
	}
};

//除法计算器类
class DivideCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return num1 / num2;
	}
};

void test02()
{
	//多态的使用条件是 父类的指针或者引用指向子类的对象

	AbstractCalculator* abc = new AddCalculator;   //new AddCalculator创建了一个加法的计算器对象 这里是使用父类指针指向子类对象
	abc->num1 = 20;
	abc->num2 = 30;
	cout << abc->num1 << " + " << abc->num2 << " = " << abc->getResult() << endl;

	delete abc;			//new在堆区创建了对象 需要使用 delete 删除该对象

	//减法运算
	abc = new SubtractCalculator;
	abc->num1 = 20;
	abc->num2 = 30;
	cout << abc->num1 << " - " << abc->num2 << " = " << abc->getResult() << endl;
	delete abc;

	//multiply运算
	abc = new MulCalculator;
	abc->num1 = 20;
	abc->num2 = 30;
	cout << abc->num1 << " * " << abc->num2 << " = " << abc->getResult() << endl;
	delete abc;
}

int main()
{
	test02();
	system("pause");
	return 0;
}