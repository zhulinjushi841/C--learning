#include<iostream>
#include<vector>
#include<functional>
#include<algorithm>
#include<ctime>
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
// random_shuffle
// ����������
// ϴ�� ָ����Χ�ڵ�Ԫ�������������
// ����ԭ�ͣ�
// random_shuffle(iterator beg, iterator end);
// ָ����Χ�ڵ�Ԫ�������������
// beg ��ʼ������
// end ����������
// 
// �ܽ᣺
// random_shuffleϴ���㷨�Ƚ�ʵ�� ��ʹ�õ�ʱ��ǵü������������
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
	srand((unsigned int)time(NULL));

	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	v.push_back(60);

	random_shuffle(v.begin(), v.end());
	for_each(v.begin(), v.end(), Print);


}

int main()
{
	test01();
	system("pause");
	return 0;
}

