#include<iostream>
#include<list>
using namespace std;
//
// list����
// list��������
// ���ܣ������ݽ�����ʽ�洢
// ����(list)��һ������洢��Ԫ�Ϸ������Ĵ洢�ṹ������Ԫ�ص��߼�˳����ͨ�������е�ָ������
// ʵ�ֵ�
// �������ɣ�
// ������һϵ�н�����
// �ڵ����ɣ�
// һ���Ǵ洢����Ԫ�ص� ��������һ���Ǵ洢��һ���ڵ��ַ�� ָ����
// STL�е�������һ��˫��ѭ������
// ������ŵ㣺
// ���Զ�����λ�ý��п��ٵز������ɾ��Ԫ��
// ȱ�㣺
// ���������ٶ�û�������
// ռ�ÿռ�������
// 
// ��������Ĵ洢��ʽ�������������ڴ�ռ䣬�������list�еĵ�����ֻ֧��ǰ�ƺͺ��� ����˫�������
// 
// list��һ������Ҫ�����ʣ������ɾ���������������ԭ��list��������ʧЧ������vector���ǲ�������
// �ܽ᣺
// STL�е�list��vector��������õ����� ������ȱ��
// 
// list���캯��
//����������
// ����list����
// ����ԭ�ͣ�
// list<T> lst;				//list����ģ����ʵ�� �����Ĭ�Ϲ�����ʽ
// list(beg,end);			//���캯����[beg,end)�����е�Ԫ�ؿ���������
// list(n,elem);			//���캯����n��elem����������
// list(const list &lst);	//�������캯��
//

void printList(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	list<int> L1;		//Ĭ�Ϲ���

	//�������
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);

	printList(L1);

	//���䷽ʽ����
	list<int> L2(L1.begin(), L1.end());
	printList(L2);

	//��������
	list<int> L3(L2);
	printList(L3);

	//n��elem
	list<int> L4(10, 123);
	printList(L4);
}

int main()
{
	test01();
}
