#include<iostream>
#include<vector>
#include<string>
using namespace std;
//
// 8.3�ṹ������
// ���ã����Զ���Ľṹ����뵽�����з���ά��
// �﷨��struct �ṹ���� ������[Ԫ�ظ���] = {	{}��{}��...,{} }
//

//�ṹ������
//1.����ṹ��
struct Student
{
	//��Ա�б�
	string name;	//����
	int age;		//����
	int score;		//����
};

//
// 8.4�ṹ��ָ��
// ���ã�ͨ��ָ����ʽṹ���еĳ�Ա
// ���ò�����->����ͨ���ṹ��ָ����ʽṹ������
//


int main()
{
	//2.�����ṹ������
	struct Student stuArray[3] =
	{
		{"Zhangsan",18,100},
		{"Lisi",19,99},
		{"Wangwu",38,89}
	};

	//3.���ṹ�������е�Ԫ�ظ�ֵ
	stuArray[2].name = "Zhaoliu";
	stuArray[2].age = 23;
	stuArray[2].score = 87;

	//4.�����ṹ������
	for (int i = 0; i < 3; i++)
	{
		cout << "������" << stuArray[i].name 
			 << " ���䣺" << stuArray[i].age 
			 << " ������" << stuArray[i].score << endl;
	}


	system("pause");
	return 0;
}



int main()
{
	//1.����ѧ���ṹ�����
	struct Student s = { "Zhangsan",18,100 };

	//2.ͨ��ָ��ָ��ṹ�����
	struct Student * p = &s;

	//3.ͨ��ָ����ʽṹ������е�����
	//ͨ���ṹ��ָ�� ���ʽṹ���е����ԣ���Ҫʹ��"->"
	cout << "������" << p->name 
		<< " ���䣺" << p->age 
		<< " ������" << p->score << endl;

	system("pause");
	return 0;
}