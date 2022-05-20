#include<list>
#include<iostream>
using namespace std;
//
// list��С����
// ����������
// ��list�����Ĵ�С���в���
// ����ԭ�ͣ�
// size();		//����������Ԫ�صĸ���
// empty()��		//�ж������Ƿ�Ϊ��
// resize(num);	//����ָ�������ĳ���Ϊnum,�������䳤������Ĭ��ֵ�����λ�ã���������̣���β�������������ȵ�Ԫ�ر�ɾ��
// resize(num, elem);	//����ָ�������ĳ���Ϊnum,�������䳤������elemֵ�����λ�ã���������̣���β�������������ȵ�Ԫ�ر�ɾ��
//

void printList(const list<int>& lst)
{
	for (list<int>::const_iterator it = lst.begin(); it != lst.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	list<int> L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	
	printList(L1);

	//�ж������Ƿ�Ϊ��
	if (L1.empty())
	{
		cout << "L1Ϊ��" << endl;
	}
	else
	{
		cout << "L1��Ϊ��" << endl;
		cout << "L1��Ԫ�ظ���Ϊ��" << L1.size() << endl;
	}

	//����ָ����С
	L1.resize(10);
	printList(L1);

	L1.resize(4);
	L1.resize(10, 45);
	printList(L1);
}

int main()
{
	test01();
	system("pause");
	return 0;
}
