#include<iostream>
#include<string>
using namespace std;
//
// 4.2.5�����ǳ����
// ��ǳ���������Ծ������⣬Ҳ�ǳ�����һ����
// 
// ǳ�������򵥵ĸ�ֵ��������
// 
// ������ڶ�����������ռ䣬���п�������
//

class Person
{
public:
	Person()
	{
		cout << "Person��Ĭ�Ϲ��캯������" << endl;
	}

	Person(int age,int height)
	{
		m_Age = age;
		m_Height = new int(height);
		cout << "Person���вι��캯������" << endl;
	}


	//�Լ�ʵ�ֿ������캯�� ���ǳ��������������
	Person(const Person& p)
	{
		cout << "�������캯���ĵ���" << endl;
		m_Age = p.m_Age;
		//m_Height = p.m_Height;   ������Ĭ��ʵ�ֵ������д���

		//�������
		m_Height = new int(*p.m_Height);
	}

	~Person()
	{
		//�����������룬���������ٵ��������ͷŲ���
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;	//��ֹҰָ�����
		}
		
		cout << "Person��������������" << endl;
	}

	//ǳ����������������Ƕ������ڴ��ظ��ͷ�
	//ǳ������������Ҫ�õ��������� Ҳ�����ڿ���������
	//���½������µ�ָ�룬��Ȼָ��ָ����迣��һ���ģ�����������(Ҳ����ַ)
	//�ǲ�ͬ��

	int m_Age;
	int* m_Height;
};

void test01()
{
	Person p1(18,160);

	cout << "p1������Ϊ��" << p1.m_Age << " ���Ϊ��" << *p1.m_Height << endl;

	Person p2(p1);
	cout << "p2������Ϊ��" << p1.m_Age << " ���Ϊ��" << *p2.m_Height << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}