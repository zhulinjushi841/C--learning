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
// sort
// ����������
// ��������Ԫ�ؽ��з�ת
// ����ԭ�ͣ�
// reverse(iterator beg, iterator end);
// ��תָ����Χ��Ԫ��
// beg ��ʼ������
// end ����������
// 
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
	vector<int> v;

	v.push_back(10);
	v.push_back(50);
	v.push_back(40);
	v.push_back(20);
	v.push_back(30);
	v.push_back(70);

	reverse(v.begin(), v.end());
	for_each(v.begin(), v.end(), Print);


}

int main()
{
	test01();
	system("pause");
	return 0;
}

