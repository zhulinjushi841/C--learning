#include<iostream>
#include<vector>
using namespace std;
//
// �ṹ��
// 8.1�ṹ���������
// �ṹ�����������Զ�����������ͣ������û��洢��ͬ����������
// 
// 8.2�ṹ�嶨���ʹ��
// �﷨�� struct �ṹ���� {�ṹ���Ա�б�};
// ͨ���ڽṹ���д��������ķ�ʽ�����֣�
// struct �ṹ���� ������
// struct �ṹ���� ������={��Ա1ֵ����Ա2ֵ...}
// ����ṹ��ʱ˳�㴴������
//

//1.����ѧ���������ͣ�ѧ������(���������䣬����)
//�Զ����������ͣ�һЩ���������ɵ�һ������
//�﷨ struct �������� {��Ա�б�}
struct Student
{
	//��Ա�б�
	//����
	string name;
	//����
	int age;
	//����
	int grade;
}s3;

//2.ͨ��ѧ�����ʹ�������ѧ��
//2.1 struct Student s1
//2.2 struct Student s2 = {...}
//2.3 �ڶ���ṹ��ʱ˳�㴴���ṹ�����
// 
// �ܽ᣺
// 1.����ṹ��ʱ�Ĺؼ�����struct,����ʡ��
// 2.�����ṹ�������ʱ�򣬹ؼ���struct����ʡ��
// 3.�ṹ��������ò�����"."���ʳ�Ա
//

int main()
{
	//2.1 struct Student s1
	//struct�ؼ��ֿ���ʡ��
	struct Student s1;
	//��s1���Ը��ƣ�ͨ��.���ʽṹ������е�����
	s1.name = "Zhangsan";
	s1.age = 18;
	s1.grade = 100;

	cout << "������" << s1.name << " ���䣺" << s1.age << " ������" << s1.grade << endl;

	//2.2 struct Student s2 = {...}
	struct Student s2 = { "Lisi",19,90 };
	cout << "������" << s2.name << " ���䣺" << s2.age << " ������" << s2.grade << endl;

	//2.3 �ڶ���ṹ��ʱ˳�㴴���ṹ�����
	s3.age = 20;
	s3.name = "Wangzhi";
	s3.grade = 80;
	cout << "������" << s3.name << " ���䣺" << s3.age << " ������" << s3.grade << endl;

	system("pause");
	return 0;
}