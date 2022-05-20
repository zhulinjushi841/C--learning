#include<list>
#include<iostream>
using namespace std;
//
// list��ת������
// ����������
// �������е�Ԫ�ط�ת���Լ��������е����ݽ�������
// ����ԭ�ͣ�
// reverse();		//��ת����
// sort();			//��������
//

void printList(list<int>& lst)
{
	for (list<int>::iterator it = lst.begin(); it != lst.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}


bool MyCompare(int v1,int v2)
{
	//���� ���õ�һ���� > �ڶ�����
	return v1 > v2;
}

void test01()
{
	list<int> L1;
	L1.push_back(20);
	L1.push_back(10);
	L1.push_back(40);
	L1.push_back(30);
	printList(L1);

	L1.reverse();
	printList(L1);

	//Ĭ��������� ��С���� ����
	L1.sort();
	printList(L1);

	//�Ӵ�С ����
	L1.sort(MyCompare);
	printList(L1);

}

//����
void test02()
{
	list<int> L1;
	L1.push_back(20);
	L1.push_back(10);
	L1.push_back(40);
	L1.push_back(30);
	printList(L1);

	//����
	cout << "����ǰ��" << endl;
	printList(L1);

	//���в�֧��������ʵ����������� ������ʹ�ñ�׼�㷨
	//��֧��������ʵ����������� �ڲ����ṩ��ӦһЩ�㷨


}

int main()
{
	test01();
	system("pause");
	return 0;
}