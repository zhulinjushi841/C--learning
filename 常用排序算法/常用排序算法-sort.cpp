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
// ��������Ԫ�ؽ�������
// ����ԭ�ͣ�
// sort(iterator beg, iterator end, _Pred);
// ��ֵ����Ԫ�أ��ҵ�����ָ��λ�õ��������Ҳ������ؽ���������λ��
// beg ��ʼ������
// end ����������
// _Pred ν��
// 
// �ܽ᣺
// sort�ǿ�������õ��㷨֮һ��������������
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

	//����sort��������
	sort(v.begin(), v.end());

	for_each(v.begin(), v.end(), Print);

	/*myPrint(v);*/

	cout << endl;

	//�ı�Ϊ ����
	sort(v.begin(), v.end(), greater<int>());
	for_each(v.begin(), v.end(), Print);


}

int main()
{
	test01();
	system("pause");
	return 0;
}

