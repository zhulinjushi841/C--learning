#include<algorithm>
#include<functional>
#include<numeric>
#include<vector>
#include<iostream>
using namespace std;
//
// STL-�����㷨
// ������
// �㷨��Ҫ����ͷ�ļ�<algorithm> <functional> <numeric>���
// <algorithm>������STL�ļ�������һ������Χ�漰���Ƚϡ����ҡ��������������������ơ��޸ĵȵ�
// <numeric>�����С��ֻ�����ڼ�������������м���ѧ�����ģ�庯��
// <functional>������һЩģ���࣬����������������
// 
// ���ñ����㷨
// ѧϰĿ�꣺
// ���ճ��õı����㷨
// �㷨��飺
// for_each		//��������
// transform	//������������һ��������
// 
// for_each
// ����������
// ʵ�ֱ�������
// ����ԭ�ͣ�
// for_each(iterator beg, iterator end, _func);
// �����㷨 ��������Ԫ��
// beg��ʼ������
// end����������
// _func�������ߺ�������(�º���)
// 
// �ܽ᣺
// for_each��ʵ�ʿ���������õı����㷨��������������
//

bool myCompare(int a, int b)
{
	return a > b;
}

void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//��ͨ����
void print01(int a)
{
	cout << a << " ";
}

//�º���
class print02
{
public:
	void operator() (int val)
	{
		cout << val << " ";
	}
};

void test01()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	//��ͨ����
	for_each(v1.begin(), v1.end(), print01);

	//��������ͨ�����ǰѺ������Ž������º�����Ҫ����������Ž���
	for_each(v1.begin(), v1.end(), print02());		//��Ҫ������һ����������print02()�ſ��ԣ����ǽ���һ��print02����



}

int main()
{
	test01();
	system("pause");
	return 0;
}