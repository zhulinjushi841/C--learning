#include <iostream>
#include <string>
using namespace std;
//����������
// �ֱ�������ͨд���Ͷ�̬���������������������������ļ�������
// 
// ��̬���ŵ�
// 1��������֯�ṹ����
// 2���ɶ���ǿ
// 3������ǰ�ںͺ��ڵ���չ��ά��
//

//��ͨʵ��
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
		//�������չ�µĹ��� ��Ҫ�޸�Դ��
		//����ʵ�Ŀ����� �ᳫ����ԭ��
		//����ԭ�򣺶���չ���п��ţ����޸Ľ��йر�
		
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




//���ö�̬ʵ��
//��̬�ô���
// 1����֯�ṹ����
// 2���ɶ���ǿ
// 3������ǰ�ںͺ��ڵ���չ��ά��
//ʵ�ּ������ĳ�����
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

//�ӷ���������
class AddCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return num1 + num2;
	}
};

//������������
class SubtractCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return num1 - num2;
	}
};


//�˷���������
class MulCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return num1 * num2;
	}
};

//������������
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
	//��̬��ʹ�������� �����ָ���������ָ������Ķ���

	AbstractCalculator* abc = new AddCalculator;   //new AddCalculator������һ���ӷ��ļ��������� ������ʹ�ø���ָ��ָ���������
	abc->num1 = 20;
	abc->num2 = 30;
	cout << abc->num1 << " + " << abc->num2 << " = " << abc->getResult() << endl;

	delete abc;			//new�ڶ��������˶��� ��Ҫʹ�� delete ɾ���ö���

	//��������
	abc = new SubtractCalculator;
	abc->num1 = 20;
	abc->num2 = 30;
	cout << abc->num1 << " - " << abc->num2 << " = " << abc->getResult() << endl;
	delete abc;

	//multiply����
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