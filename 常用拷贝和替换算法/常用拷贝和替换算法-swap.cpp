#include<iostream>
#include<vector>
#include<functional>
#include<algorithm>
using namespace std;
//
// ���ÿ������滻�㷨
// ѧϰĿ�꣺
// ���ճ��õĿ������滻�㷨
// �㷨��飺
// copy					//������ָ����Χ�ڵ�Ԫ�ؿ�������һ������
// replace				//��������ָ����Χ�ľ�Ԫ���޸�Ϊ��Ԫ��
// replace_if			//������ָ����Χ����������Ԫ���滻Ϊ��Ԫ��
// swap					//��������������Ԫ��
// 
// swap
// ����������
// ��������������Ԫ��
// ����ԭ�ͣ�
// swap(container c1, container c2);
// ��������������Ԫ��
// C1 ����1
// C2 ����2
// 
//
class MyPrint
{
public:
	void operator() (int val)
	{
		cout << val << " ";
	}
};

void Print(int val)
{
	cout << val << " ";
}

void test01()
{
	vector<int> v1;
	vector<int> v2;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(100 + i);
	}

	cout << "����ǰ ��" << endl;
	for_each(v1.begin(), v1.end(), Print);
	cout << endl;
	for_each(v2.begin(), v2.end(), Print);
	cout << endl;

	swap(v1, v2);
	cout << "������  ��" << endl;
	for_each(v1.begin(), v1.end(), Print);
	cout << endl;
	for_each(v2.begin(), v2.end(), Print);
	cout << endl;
	

}

int main()
{
	test01();
	system("pause");
	return 0;
}

