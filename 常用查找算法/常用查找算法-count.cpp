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
// count
// ����������
// ͳ��Ԫ�ظ���
// ����ԭ�ͣ�
// count(iterator beg, iterator end, value);
// ͳ��Ԫ�س��ִ���
// 
// beg��ʼ������
// end����������
// value���ҵ�Ԫ��
//


//���ò����㷨 
void test01()
{
	vector<int> v1;
	
	v1.push_back(10);
	v1.push_back(40);
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(10);

	int num = count(v1.begin(), v1.end(), 10);

	cout << "10��Ԫ�ظ���Ϊ��" << num << endl;
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
		if (this->Age == p.Age)
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

	Person p("e", 14);

	//���뵽������
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	

	int num = count(v.begin(), v.end(), p);
	
	cout << "��eͬ��������Ա����Ϊ��" << num << endl;

}



int main()
{
	test02();
	system("pause");
	return 0;
}