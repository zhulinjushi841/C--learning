#include<vector>
#include<iostream>
using namespace std;
//
// vectorԤ���ռ�
// ����������
// ����vector�ڶ�̬��չʱ����չ����
// ����ԭ�ͣ�
// reverse(int len);	//����Ԥ��len��Ԫ�س��ȣ�Ԥ��λ�ò���ʼ����Ԫ�ز��ɷ���
// �ܽ᣺
// 
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



/// 2.ʵ����;
/// 

void test02()
{
	vector<int> v;

	//����reserveԤ���ռ�
	v.reserve(100000);
	int num = 0;	//	ͳ�ƿռ俪�ٴ���
	int* p = NULL;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}

	}

	cout << "num = " << num << endl;
}


int main()
{
	test02();
	system("pause");
}