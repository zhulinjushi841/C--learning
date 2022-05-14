#include<set>
#include<iostream>
using namespace std;
//
// ��ֵ���������
// C++���������ٸ�һ�������4������
// 1.Ĭ�Ϲ��캯��(�޲Σ�������Ϊ��)
// 2.Ĭ����������(�޲Σ�������Ϊ��)
// 3.Ĭ�Ͽ������캯���������Խ���ֵ����
// 4.��ֵ�����operator=�������Խ���ֵ����
// 
// �������������ָ�����������ֵ����ʱҲ�������ǳ����������
//

class Person
{
public:
	Person(int age)
	{
		Age = new int(age);
	}
	int* Age;

	~Person()
	{
		if (Age != nullptr)
		{
			delete Age;
			Age = nullptr;
		}
	}


	//���� ��ֵ�����
	Person& operator= (Person& p)
	{
		//���������ṩǳ����
		//Age = p.Age;

		//Ӧ�����ж��Ƿ��������ڶ���������� ���ͷŸɾ� �����
		if (Age != nullptr)
		{
			delete Age;
			Age = nullptr;
		}

		//���
		Age = new int(*p.Age);

		//���ض�������
		return *this;
	}
};

void test01()
{
	Person p1(18);
	Person p2(20);

	p2 = p1;  //��ֵ����

	cout << "p1������Ϊ �� " << *(p1.Age) << endl;
	cout << "p2������Ϊ �� " << *(p2.Age) << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}