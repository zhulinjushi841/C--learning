#include<iostream>
#include<algorithm>
#include<numeric>
#include<vector>
using namespace std;
//
// ���ò����㷨
// ѧϰĿ�꣺
// ���ճ��õĲ����㷨
// �㷨��飺
// find				//����Ԫ��
// find_if			//����������Ԫ��
// adjacent_if		//���������ظ�Ԫ��
// binary_search	//���ֲ��ҷ�
// count			//ͳ��Ԫ�ظ���
// count_if			//������ͳ��Ԫ�ظ���
// 
// adjacent_find(iterator beg, iterator end);
// ����������
// ���������ظ�Ԫ��
// ����ԭ�ͣ�
// find(iterator beg, iterator end, value);
// ���������ظ�Ԫ�أ���������Ԫ�صĵ�һ��λ�õĵ�����
// beg��ʼ������
// end����������
//


//���� ������������
void test01()
{
	vector<int> v1;
	v1.push_back(0);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(4);
	v1.push_back(1);
	v1.push_back(0);
	v1.push_back(6);
	v1.push_back(0);
	v1.push_back(3);


	//���� ������ �Ƿ��� 5 ���Ԫ��
	vector<int>::iterator it = adjacent_find(v1.begin(), v1.end());
	if (it == v1.end())
	{
		cout << "û���ҵ�" << endl;
	}
	else
	{
		cout << "�ҵ���" << *it << endl;
	}
}


int main()
{
	test01();
	system("pause");
	return 0;
}