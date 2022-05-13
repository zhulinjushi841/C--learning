#include<vector>
#include<iostream>
using namespace std;
//
// vector��������
// ����������
// ʵ������������Ԫ�ؽ��л���
// ����ԭ�ͣ�
// swap(vec);	//��vec�뱾���Ԫ�ػ���
// �ܽ᣺
// ��Ҫ��;�ǿ���ͨ��������������swap����ʹ�����������������Դﵽʹ�õ������ڴ��Ч��
//

void printArray(vector<int>& vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec.at(i) << " ";
	}
	cout << endl;
}

void printVector(vector<int>& vec)
{
	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	cout << "����ǰ��" << endl;
	printVector(v1);
	vector<int> v2;
	for (int i = 10; i > 0; i--)
	{
		v2.push_back(i);
	}
	v1.swap(v2);
	cout << "������" << endl;
	printVector(v1);
}


/// 2.ʵ����;
/// ����swap���������ڴ�ռ�

void test02()
{
	vector<int> v;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
	}
	cout << "v������Ϊ �� " << v.capacity() << endl;
	cout << "v�Ĵ�СΪ��" << v.size() << endl;

	v.resize(10);	//����ָ����С
	cout << "v������Ϊ �� " << v.capacity() << endl;
	cout << "v�Ĵ�СΪ��" << v.size() << endl;

	//����swap�����ڴ�
	vector<int>(v).swap(v);
	cout << "v������Ϊ �� " << v.capacity() << endl;
	cout << "v�Ĵ�СΪ��" << v.size() << endl;

	//vector<int>(v)����������   .swap(v)���е�����������
}


int main()
{
	test02();
	system("pause");
}