#include<iostream>
#include<vector>
#include<string>
using namespace std;
//
// 8.5�ṹ��Ƕ�׽ṹ��
// ���ã��ṹ���еĳ�Ա��������һ���ṹ��
// ���磺һ����ʦ����һ��ѧԱ��һ����ʦ�Ľṹ���У���¼һ��ѧ���Ľṹ��
//

//ѧ���ṹ�嶨��
struct Student
{
	//��Ա�б�
	string name;	//����
	int age;		//����
	int score;		//����
};
//��ʦ�ṹ�嶨��
struct Teacher
{
	//��Ա�б�
	int id;		//ְ�����
	string name;//��ʦ����
	int age;	//��ʦ����
	struct Student stu;	//�ӽṹ�壬ѧ��
};



int main()
{
	//�ṹ��Ƕ�׽ṹ��
	//������ʦ
	Teacher t;
	t.id = 10000;
	t.name = "Laowang";
	t.age = 50;
	t.stu.name = "Xiaowang";
	t.stu.age = 20;
	t.stu.score = 60;

	cout << "��ʦ������" << t.name << " ��ʦ��ţ�" << t.id << " ��ʦ���䣺" << t.age
		<< " ��ʦ������ѧ��������" << t.stu.name << " ѧ�����䣺" << t.stu.age
		<< " ѧ�����Է�����" << t.stu.score << endl;

	system("pause");
	return 0;
}