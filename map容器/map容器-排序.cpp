#include<map>
#include<iostream>
using namespace std;
//
// map��������
// ѧϰĿ�꣺
// map����Ĭ���������Ϊ ����key���� ��С�������� ������θı��������
// ��Ҫ�����㣺
// ���÷º��������Ըı��������
//

//�º���������������������
class MyCompare
{
public:
	bool  operator()(int v1,int v2) const
	{
		//����
		return v1 > v2;
	}

};

void test01()
{
	map<int, int,MyCompare> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(4, 40));
	m.insert(pair<int, int>(5, 50));

	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << " value = " << it->second << endl;
	}


}

int main()
{
	test01();
	system("pause");
	return 0;
}