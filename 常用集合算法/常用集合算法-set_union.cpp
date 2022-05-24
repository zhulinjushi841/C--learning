#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
//
// ���ü����㷨
// ѧϰĿ�꣺
// ���ճ��õļ����㷨
// �㷨��飺
// set_intersection		//�����������Ľ���
// set_union			//�����������Ĳ���
// set_difference		//�����������Ĳ
// 
// set_union
// ����������
// �����������Ĳ���
// ����ԭ�ͣ�
// set_union(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
// ���������ϵĲ���
// ע�⣺�������ϱ�������������
// beg1����1��ʼ������
// end1����1����������
// beg2����2��ʼ������
// end2����2����������
// destĿ��������ʼ������
// 
// �ܽ᣺
// �󲢼����������ϱ�������������
// Ŀ���������ٿռ���Ҫ�����������
// set_union����ֵ���ǲ��������һ��Ԫ�ص�λ��
//

void myPrint(int val)
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
		v1.push_back(i + 5);
	}

	vector<int> vTarget;
	//Ŀ��������Ҫ��ǰ���ٿռ�
	//���������� ��������û�н���������������������size�����
	vTarget.resize(v1.size() + v2.size());

	//��ȡ����
	vector<int>::iterator itEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());

	for_each(vTarget.begin(), itEnd, myPrint);
	cout << endl;

}

int main()
{
	test01();
	system("pause");
	return 0;
}