#include<list>
#include<iostream>
using namespace std;
//
// list��ֵ�ͽ���
// ����������
// ��list�������и�ֵ���Լ�����list����
// ����ԭ�ͣ�
// assign(beg,end);		//��[beg,end)�����е����ݿ�����ֵ������
// assign(n,elem);		//��n��elem������ֵ������
// list& operator=(const list &lst);	//���صȺŲ�����
// swap(lst);			//��lst�뱾���Ԫ�ػ���
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

	list<int> L2(L1);	//�������캯����ֵ
	printList(L2);

	list<int> L3 = L1;	//����operator=��ֵ
	printList(L3);

	list<int> L4;
	L4.assign(L1.begin(), L1.end());	//assign��ֵ
	printList(L4);

	list<int> L5;
	L5.assign(10, 100);
	printList(L5);
}

//����
void test02()
{
	list<int> L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	
	list<int> L2;
	L2.assign(10, 100);
	cout << "����ǰ�� " << endl;
	printList(L1);
	printList(L2);
	cout << "������" << endl;
	L2.swap(L1);
	printList(L1);
	printList(L2);
}

int main()
{
	test02();
	system("pause");
	return 0;
}