#include<iostream>
#include<vector>
using namespace std;
//
//8.6 �ṹ������������
// ���ã��ṹ����Ϊ���������д���
// ���ݷ�ʽ�����֣�
// ֵ����
// ��ַ����
// 
// �ܽ᣺��������޸��������е����ݣ���ֵ���ݣ���֮�õ�ַ����
//

struct Student
{
	//��Ա�б�
	string name;	//����
	int age;		//����
	int score;		//����
};


//��ӡѧ����Ϣ����
//1.ֵ����
void printStudent1(struct Student s)
{
	cout << "�Ӻ���1�� ������" << s.name << " ���䣺" << s.age << " ������" << s.score << endl;
}

//2.��ַ����
void printStudent2(struct Student *p)
{
	cout << "�Ӻ���2�� ������" << p->name << " ���䣺" << p->age << " ������" << p->score << endl;
}

int main()
{
	//�ṹ������������
	//��ѧ�����뵽һ�������У���ӡѧ�����ϵ�������Ϣ


	//�����ṹ�����
	struct Student s;
	s.name = "Zhangsan";
	s.age = 20;
	s.score = 85;

	printStudent1(s);
	printStudent2(&s);
	/*cout << "main�����д�ӡ ������" << s.name << " ���䣺" << s.age << " ������" << s.score << endl;*/

	system("pause");
	return 0;
}