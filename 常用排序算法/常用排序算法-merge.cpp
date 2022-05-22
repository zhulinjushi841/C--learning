#include<iostream>
#include<vector>
#include<functional>
#include<algorithm>
using namespace std;
//
// ���������㷨
// ѧϰĿ�꣺
// ���ճ��õ������㷨
// �㷨��飺
// sort					//��������Ԫ�ؽ�������
// random_shuffle		//ϴ�� ָ����Χ�ڵ�Ԫ�������������
// merge				//����Ԫ�غϲ� ���洢����һ������
// reverse				//��תָ����Χ�ڵ�Ԫ��
// 
// merge
// ����������
// ����Ԫ�غϲ������洢����һ������
// ע�⣺�������������������
// ����ԭ�ͣ�
// beg1 ����1��ʼ������
// end1 ����1����������
// beg2 ����2��ʼ������
// end2 ����2����������
// dest Ŀ��������ʼ������
// 
// �ܽ᣺
//

void myPrint(const vector<int>& v)
{
	for (int i = 0; i < v.size(); i++)
	{
		cout << v.at(i) << endl;
	}
}

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
		v2.push_back(i + 1);
	}

	//Ŀ������
	vector<int> vTarget;
	vTarget.resize(v1.size() + v2.size());

	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());

	for_each(vTarget.begin(), vTarget.end(), Print);


}

int main()
{
	test01();
	system("pause");
	return 0;
}

