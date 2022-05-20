#include<list>
#include<iostream>
using namespace std;
//
// list�����ɾ��
// ����������
// ��list�����������ݵĲ����ɾ��
// ����ԭ�ͣ�
// push_back(elem);			//��������β������һ��Ԫ��
// pop_back();				//ɾ�����������һ��Ԫ��
// push_front(elem);		//��������ͷ����һ��Ԫ��
// pop_front();				//��������ͷ�Ƴ���һ��Ԫ��
// insert(pos,elem);		//��posλ�ò���elemԪ�صĿ��� ���������ݵ�λ��
// insert(pos,n,elem);		//��posλ�ò���n��elem���� �޷���ֵ
// insert(pos,beg,end);		//��posλ�ò���[beg,end)��������� �޷���ֵ
// clear();					//�Ƴ������е���������
// erase(beg,end);			//�Ƴ�[beg,end)��������� ������һ�����ݵ�λ��
// erase(pos);				//ɾ��posλ�õ����� ������һ�����ݵ�λ��
// remove(elem);			//ɾ��������������elemֵƥ���Ԫ��
//

void printList(list<int>& lst)
{
	for (list<int>::iterator it = lst.begin(); it != lst.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	list<int> L1;

	//β��
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	//ͷ��
	L1.push_front(100);
	L1.push_front(200);
	L1.push_front(300);

	//300 200 100 10 20 30 40
	printList(L1);

	//βɾ
	L1.pop_back();
	printList(L1);

	//ͷɾ
	L1.pop_front();
	printList(L1);

	//insert����
	list<int>::iterator it = L1.begin();
	L1.insert(++it, 1000);
	printList(L1);

	//ɾ��
	it = L1.begin();
	L1.erase(++it);
	printList(L1);

	//�Ƴ�
	L1.push_back(10000);
	L1.push_back(10000);
	L1.push_back(10000);
	L1.push_back(10000);
	printList(L1);

	L1.remove(10000);
	printList(L1);

	//���
	L1.clear();
	printList(L1);



}

int main()
{
	test01();
	system("pause");
	return 0;
}