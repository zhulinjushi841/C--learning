#include<list>
#include<iostream>
using namespace std;
//
// list���ݴ�ȡ
// ����������
// ��list���������ݽ��д�ȡ
// ����ԭ�ͣ�
// front();		//���ص�һ��Ԫ��
// back();		//�������һ��Ԫ��
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
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	L1.push_back(50);

	//L1[0]��������[]����list�����е�Ԫ��
	//��������at��ʽ����list�����е�Ԫ��
	//ԭ����list�������������������������Կռ�洢���ݣ����Ե�������֧���������

	cout << "��һ��Ԫ�أ�" << L1.front() << endl;
	cout << "���һ��Ԫ�أ�" << L1.back() << endl;

	//��֤�������ǲ�֧��������ʵ�

	list<int>::iterator it = L1.begin();
	it++;
	it--;
	//֧��˫�� ��֧��������ʵĲ���
	//�жϵ������ļ��� 
	//���֧��it = it +1;	������˵�����֧���������
	//���֧��++/--��������˵�����֧��˫�� �����֧��һ�� ������ε�������֧�ֵ���



}

int main()
{
	test01();
	system("pause");
	return 0;
}