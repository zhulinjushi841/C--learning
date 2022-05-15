#include<deque>
#include<iostream>
using namespace std;
//deque��С����
// ����������
// ��deque�����Ĵ�С���в���
// ����ԭ�ͣ�
// deque.empty();				//�ж������Ƿ�Ϊ��
// deque.size();				//����������Ԫ�صĸ���
// deque.resize();				//����ָ�������ĳ���Ϊnum �������䳤 ����Ĭ��ֵ�����λ�� ���������� ��ĩβ�����������ȵ�Ԫ�ر�ɾ��
// deque.resize(num, elem);		//����ָ�������ĳ���Ϊnum �������䳤 ����elem�����λ�� ���������� ��ĩβ�����������ȵ�Ԫ�ر�ɾ��
// 
//

void printDeque(deque<int>& d)
{
	for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	deque<int> d1;
	cout << d1.empty() << endl;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	cout << d1.size() << endl;
	printDeque(d1);

	d1.resize(20);
	printDeque(d1);
	
	d1.resize(30, 16);
	printDeque(d1);

}

int main()
{
	test01();
	system("pause");
	return 0;
}