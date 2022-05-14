#include<set>
#include<iostream>
using namespace std;
//
// set��������
// ѧϰĿ�꣺
// set����Ĭ���������Ϊ��С����������θı��������
// ��Ҫ�����㣺
// ���÷º��������Ըı��������
// �º���(functor):����ʹһ�����ʹ�ÿ���ȥ��һ������
// ��ʵ�־�������ʵ��һ��operator()
// ���������������ں�������Ϊ������һ���º�������
//

//�º��� ��������һ������
class MyCompare
{
public:
	//����С���ź��岻ͬ ��һ��С���Ŵ���Ҫ����()���ڶ���С�����а������Ǻ����Ĳ����б�
	bool operator() (int v1, int v2) const
	{
		return v1 > v2;
	}
};

void test01()
{
	set<int> s1;
	s1.insert(10);
	s1.insert(40);
	s1.insert(20);
	s1.insert(30);

	for (set<int>::iterator it = s1.begin(); it != s1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;


	//ָ���������Ϊ�Ӵ�С
	set<int,MyCompare>s2;

	s2.insert(10);
	s2.insert(40);
	s2.insert(20);
	s2.insert(30);

	for (set<int>::iterator it = s2.begin(); it != s2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;


}

int main()
{
	test01();
	system("pause");
	return 0;
}