#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;
//
// �������������㷨
// ѧϰĿ�꣺
// ���ճ��õ����������㷨
// ע�⣺
// ���������㷨����С���㷨����Ҫ����ͷ�ļ�#include<numeric>
// �㷨��飺
// accumulate		//��������Ԫ���ۼ��ܺ�
// fill				//�����������Ԫ��
// 
// accumulate
// ����������
// ���������� ����Ԫ���ۼ��ܺ�
// ����ԭ�ͣ�
// accumulate(iterator beg, iterator end,value);
// ��������Ԫ���ۼ��ܺ�
// beg ��ʼ������
// end ����������
// value ��ʼֵ
//

void test01()
{
	vector<int> v;

	for (int i = 0; i <= 100; i++)
	{
		v.push_back(i);
	}

	//����3 ��ʼ�ۼ�ֵ
	int total = accumulate(v.begin(), v.end(), 0);

	cout << total << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;

}

