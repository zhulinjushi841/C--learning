#include<iostream>
#include<algorithm>
#include<numeric>
#include<vector>
using namespace std;
//
// ���ò����㷨
// ѧϰĿ�꣺
// ���ճ��õĲ����㷨
// �㷨��飺
// find				//����Ԫ��
// find_if			//����������Ԫ��
// adjacent_if		//���������ظ�Ԫ��
// binary_search	//���ֲ��ҷ�
// count			//ͳ��Ԫ�ظ���
// count_if			//������ͳ��Ԫ�ظ���
// 
// binary_search
// ����������
// ����ָ��Ԫ���Ƿ����
// ����ԭ�ͣ�
// bool_binary_search(iterator beg, iterator end, value);
// ����ָ����Ԫ�أ��鵽 ����true ����false
// 
// ע�⣺�����������в�����
// 
// beg��ʼ������
// end����������
// value���ҵ�Ԫ��
//


//���ò����㷨 binary_search
void test01()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	//���� ������ �Ƿ��� 9 ���Ԫ��
	//ע�⣺������������������� ������������� ����δ֪
	bool ret = binary_search(v1.begin(), v1.end(), 9);
	if (ret)
	{
		cout << "�ҵ���Ԫ��" << endl;
	}
	else
	{
		cout << "δ�ҵ�" << endl;
	}
}


class Person
{
public:
	Person(string name, int age)
	{
		this->Name = name;
		this->Age = age;
	}
	//����== �ײ�find֪����ζԱ�Person��������
	bool operator==(const Person& p)
	{
		if (this->Name == p.Name && this->Age == p.Age)
			return true;
		else
			return false;
	}

	string Name;
	int Age;
};

//���� �Զ�����������
void test02()
{
	vector<Person> v;
	//��������
	Person p1("a", 10);
	Person p2("b", 14);
	Person p3("c", 19);
	Person p4("d", 23);

	//���뵽������
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	vector<Person>::iterator it = find(v.begin(), v.end(), p2);
	if (it == v.end())
	{
		cout << "δ�ҵ�" << endl;
	}
	else
	{
		cout << "�ҵ�Ԫ�� ������" << it->Name << " ���䣺" << it->Age << endl;
	}

}



int main()
{
	test02();
	system("pause");
	return 0;
}