#include<functional>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//
// �߼��º���
// ����������
// ʵ���߼�����
// ����ԭ�ͣ�
// template<class T> bool logical_and<T>	//�߼���
// template<class T> bool logical_or<T>		//�߼���
// template<class T> bool logical_not<T>	//�߼���
//

void test01()
{
	vector<bool> v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);

	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//�����߼��� ������v ���˵� ����v2 �� ��ִ��ȡ������
	vector<bool> v2;

	//ʹ�ð����㷨 transform ������ǰ����ռ�
	v2.resize(v.size());

	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());

	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

}

int main()
{
	test01();
	system("pause");
	return 0;
}