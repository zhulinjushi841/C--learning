#include<map>
#include<iostream>
using namespace std;
//
// map/multimap����
// map��������
// ��飺
// map������Ԫ�ض���pair
// pair�е�һ��Ԫ��Ϊkey(��ֵ)�����������ã��ڶ���Ԫ��Ϊvalue(ʵֵ)
// ����Ԫ�ض������Ԫ�صļ�ֵ�Զ�����
// ���ʣ�
// map/multimap�����ڹ���ʽ�������ײ�ṹ�õ��Ƕ�����ʵ��
// �ŵ㣺
// ���Ը���keyֵ�����ҵ�valueֵ
// map��multimap����
// map���������������ظ�keyֵԪ��
// multimap�������������ظ�keyֵԪ��
// 
// map����͸�ֵ
// ����������
// ��map�������й���͸�ֵ����
// ����ԭ�ͣ�
// ���죺
// map<T1, T2> mp;		//mapĬ�Ϲ��캯��
// map<const map &mp);	//map�������캯��
// ��ֵ��
// map& operator=(const map &mp);	//���صȺŲ�����
//

void printMap(map<int, int>& mp)
{
	for (map<int, int>::iterator it = mp.begin(); it != mp.end(); it++)
	{
		cout << "key= " << it->first << " value= " << it->second << " ";
		cout << endl;
	}
	cout << endl;
}

void test01()
{
	//����map����
	map<int, int> m;

	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(4, 40));
	m.insert(pair<int, int>(5, 50));

	printMap(m);


	//��������
	map<int, int> m2(m);
	printMap(m2);

	//��ֵ
	map<int, int> m3;
	m3 = m2;
	printMap(m3);



}

int main()
{

	test01();
	system("pause");
	return 0;
}