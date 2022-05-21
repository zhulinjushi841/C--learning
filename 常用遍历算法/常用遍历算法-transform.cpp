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
// transform
// ����������������������һ��������
// ����ԭ�ͣ�
// transform(iterator beg1, iterator end1, iterator beg2, _func);
// beg1 Դ������ʼ������
// end1 Դ��������������
// beg2 Ŀ��������ʼ������
// end2 Ŀ��������ʼ������
// _func �������ߺ�������
//

class Transform
{
public:
	int operator() (int a)
	{
		return a;
	}
};

class myPrint
{
public:
	void operator() (int a )
	{
		cout << a << " ";
	}
};

void test01()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	
	vector<int> vTarget;	//Ŀ������

	vTarget.resize(v1.size());		//Ŀ������ ��Ҫ��ǰ���ٿռ�
	transform(v1.begin(), v1.end(), vTarget.begin(), vTarget.end(), Transform());

	for_each(vTarget.begin(), vTarget.end(), myPrint());
	cout << endl;


}

int main()
{
	test01();
	system("pause");
	return 0;
}