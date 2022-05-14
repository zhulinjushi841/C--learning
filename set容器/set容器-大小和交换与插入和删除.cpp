#include<set>
#include<iostream>
using namespace std;
//set����-��С�ͽ���
// ����������
// ͳ��set������С�Լ�����set����
// ����ԭ�ͣ�
// size();		//����������Ԫ�ص���Ŀ
// empty();		//�ж������Ƿ�Ϊ��
// swap(st);	//����������������
// 
// 
// 
// 
// set����-�����ɾ��
// ����������
// set�������в������ݺ�ɾ������
// ����ԭ�ͣ�
// insert(elem);		//�������в���Ԫ��
// clear();				//�������Ԫ��
// erase(pos);			//ɾ��pos��������ָ��Ԫ�� ������һ��Ԫ�صĵ�����
// erase(beg, end);		//ɾ������[beg,end)��ȫ��Ԫ�� ������һ��Ԫ�صĵ�����
// erase(elem);			//ɾ��������ֵΪelem��Ԫ��
// 
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

	//set������insert����
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);

	printSet(s1);
	//set���������
	s1.clear();
	printSet(s1);

	//ɾ��Ԫ��
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	s1.erase(s1.begin());
	printSet(s1);

	//ɾ������Ԫ��
	s1.erase(s1.begin(), s1.end());
	printSet(s1);

	//ɾ���ض�Ԫ��
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	s1.erase(30);
	printSet(s1);



}

int main()
{
	test01();
	return 0;
}