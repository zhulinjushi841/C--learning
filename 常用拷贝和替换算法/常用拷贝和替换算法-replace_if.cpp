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
// replace_if
// ����������
// ������������������Ԫ�أ��滻��ָ��Ԫ��
// ����ԭ�ͣ�
// replace_if(iterator beg, iterator end, _pred, newvalue);
// �������滻Ԫ�أ������������滻��ָ��Ԫ��
// beg ��ʼ������
// end ����������
// _pred ν��
// newvalue �滻����Ԫ��
// 
// �ܽ᣺
// replace_if�����������ң��������÷º������ɸѡ���������
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

class Greater30
{
public:
	bool operator() (int val)
	{
		return val >= 30;
	}
		
};

void Print(int val)
{
	cout << val << " ";
}

void test01()
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(40);
	v1.push_back(30);
	v1.push_back(20);
	v1.push_back(20);
	v1.push_back(50);
	v1.push_back(30);

	cout << "�滻ǰ��" << endl;
	for_each(v1.begin(), v1.end(), MyPrint());
	cout << endl;

	//�����ڵ���30�� �滻Ϊ 3000
	replace_if(v1.begin(), v1.end(), Greater30(), 3000);

	cout << "�滻��" << endl;
	for_each(v1.begin(), v1.end(), MyPrint());
	cout << endl;


}

int main()
{
	test01();
	system("pause");
	return 0;
}

