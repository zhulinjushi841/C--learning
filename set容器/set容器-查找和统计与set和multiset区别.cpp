#include<iostream>
#include<set>
using namespace std;
//
// set���Һ�ͳ��
// ����������
// ��set�������в��������Լ�ͳ������
// ����ԭ�ͣ�
// find(key);		//����key�Ƿ���ڣ������ڣ����ظü���Ԫ�صĵ��������������ڣ�����set.end()
// count(key);		//ͳ��key��Ԫ�ظ���
//
//

//void test01()
//{
//	//����
//	set<int> s1;
//
//	//��������
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(30);
//	s1.insert(40);
//	s1.insert(50);
//
//	set<int>::iterator pos = s1.find(30);
//	if (pos != s1.end())
//	{
//		cout << "�ҵ�Ԫ�أ� " << *pos << endl;
//	}
//	else
//	{
//		cout << "δ�ҵ���Ԫ�� " << endl;
//	}
//}
//
//
//
//void test02()
//{
//	//����
//	set<int> s1;
//
//	//��������
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(30);
//	s1.insert(40);
//	s1.insert(50);
//
//	int num = s1.count(30);
//	//����set���ԣ�ͳ�ƵĽ��Ҫô��0 Ҫô��1
//	cout << "num = " << num << endl;
//}
//
//int main()
//{
//	test02();
//	system("pause");
//	return 0;
//}


//
// set��multiset����
// ѧϰĿ�꣺
// ����set��multiset������
// ����
// set�����Բ����ظ����ݣ�multiset����
// set�������ݵ�ͬʱ�᷵�ز����� ��ʾ�����Ƿ�ɹ�
// multiset���������ݣ���˿��Բ����ظ�����
// �ܽ᣺
// �������������ظ����ݿ�������set
// �����Ҫ�����ظ�������Ҫ����multiset
//


void test02()
{
	set<int> s;
	
	pair<set<int>::iterator,bool> ret = s.insert(10);
	if (ret.second)
	{
		cout << "��һ�β���ɹ�" << endl;
	}
	else
	{
		cout << "��һ�β���ʧ��" << endl;
	}

	//set���͵Ĳ��뷵�ص���pair����
	ret = s.insert(10);
	if (ret.second)
	{
		cout << "�ڶ��β���ɹ�" << endl;
	}
	else
	{
		cout << "�ڶ��β���ʧ��" << endl;
	}

	multiset<int> s2;
	//multiset���ͷ��ص���һ�������� iterator
	s2.insert(10);
	s2.insert(10);
	s2.insert(10);

	for (multiset<int>::iterator it = s2.begin(); it != s2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

}


int main()
{
	test02();
	system("pause");
	return 0;
}