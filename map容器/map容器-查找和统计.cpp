#include <iostream>
#include<map>
using namespace std;
//
//map���Һ�ͳ��
// ����������
// ��map�������в��������Լ�ͳ������
// ����ԭ�ͣ�
// find(key);	//����key�Ƿ���ڣ����ظü���Ԫ�صĵ���������������ڣ��򷵻�set.end()��
// ����ĵ�������Ҫ�� map<int,int>::iterator�����������䷵�صĽ��
// count(key);	//ͳ��key��Ԫ�ظ���
//

void test01()
{
	map<int, int> mp;
	//����
	mp.insert(pair<int, int>(1, 10));
	mp.insert(pair<int, int>(2, 20));
	mp.insert(pair<int, int>(3, 30));
	map<int, int>::iterator pos = mp.find(2);
	if (pos != mp.end())
	{
		cout << "���ҵ���Ԫ�� key = " << pos->second << endl;
	}
	else
	{
		cout << "δ�ҵ���Ԫ��" << endl;
	}


	//ͳ��
	//map����������ظ���keyԪ�� ����countͳ�ƶ��� ���ҪôΪ0 ҪôΪ1
	int num = mp.count(3);
	cout << num << endl;
}

int main()
{
	test01();
	system("pause");
}