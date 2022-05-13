#include <iostream>
#include<map>
using namespace std;

//map��С�ͽ���
// ����������
// ͳ��map������С�Լ�����map����
// ����ԭ�ͣ�
// size();		//����������Ԫ�ص���Ŀ
// empty();		//�ж������Ƿ�Ϊ��
// swap(st);	//����������������
//

//map�����ɾ��
// ����������
// map�������в������ݺ�ɾ������
// ����ԭ�ͣ�
// insert(elem);	//�������в���Ԫ��
// clear();			//�������Ԫ��
// erase(pos);		//ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�����
// erase(beg, end);	//ɾ������[beg,end)������Ԫ�� ������һ��Ԫ�صĵ�����
// erase(key);		//ɾ��������ֵΪkey��Ԫ��
//

void printMap(map<int, int>& mp)
{
	for (map<int, int>::iterator it = mp.begin(); it != mp.end(); it++)
	{
		cout << "key = " << it->first << " value = " << it->second << endl;
	}
	cout << endl;
}

void test01()
{
	map<int, int> m;

	//����
	//��һ��
	m.insert(pair<int, int>(1, 10));

	//�ڶ���
	m.insert(make_pair(2, 20));

	//������
	m.insert(map<int, int>::value_type(3, 30));

	//������
	m[4] = 40;

	//[]��������룬��;����������key���ʵ�value
	cout << m[3] << endl;

	printMap(m);


	//map����ɾ��
	m.erase(m.begin());
	printMap(m);

	m.erase(3);	//����keyɾ��
	printMap(m);

	//���
	m.erase(m.begin(), m.end());
}

int main()
{
	test01();

	system("pause");

}