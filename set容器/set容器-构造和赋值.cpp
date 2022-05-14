#include<set>
#include<iostream>
using namespace std;
//set/multiset����
// set��������
// ��飺
// ���ķ���Ϊ��������
// ����Ԫ�ض����ڲ���ʱ�Զ�������
// ���ʣ�
// set/multiset���ڹ���ʽ�������ײ�ṹ���ö�����ʵ��
// set��multiset����
// set���������������ظ���Ԫ��
// multiset�������������ظ���Ԫ��
// set����͸�ֵ
// ����������
// ����set�����Լ���ֵ
// ���죺
// set<T> st;				//Ĭ�Ϲ��캯��
// set(const set &st);		//�������캯��
// ��ֵ��
// set& operator=(const set &st);		//���صȺŲ�����
//

void printSet(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	set<int> s1;

	//�������� ֻ��insert��ʽ
	s1.insert(10);
	s1.insert(40);
	s1.insert(20);
	s1.insert(30);
	s1.insert(30);

	//��������
	//set�������ص㣺1.������������ʱ���Զ�������
	//2.set��������������ظ�ֵ
	printSet(s1);



	//��������
	set<int> s2(s1);
	printSet(s2);

	//��ֵ
	set<int> s3;
	s3 = s2;
	printSet(s3);
}

int main()
{
	test01();
	return 0;
}