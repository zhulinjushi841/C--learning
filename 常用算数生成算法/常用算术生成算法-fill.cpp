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
// fill
// ����������
// �����������ָ����Ԫ��
// ����ԭ�ͣ�
// fill(iterator beg, iterator end, value);
// �����������Ԫ��
// beg ��ʼ������
// end ����������
// value ��ʼֵ
// 
// �ܽ᣺
// ����fill���Խ�������Ԫ�����Ϊ ָ����ֵ
//

void myPrint(int val)
{
	cout << val << " ";
}

void test01()
{
	vector<int> v;
	v.resize(10);

	//���ڿ����������
	fill(v.begin(), v.end(), 100);

	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;

}

