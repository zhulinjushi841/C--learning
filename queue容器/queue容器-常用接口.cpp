#include<iostream>
#include<queue>
#include<string>
using namespace std;
//
// queue�������ý��
// ����������
// ջ�������õĶ���ӿ�
// ���캯����
// queue<T> que;				//queue����ģ����ʵ�� queue�����Ĭ�Ϲ�����ʽ
// queue(const queue &que);		//�������캯��
// ��ֵ������
// queue& operator= (const queue &que);		//���صȺŲ�����
// ���ݴ�ȡ��
// push(elem);		//����β���Ԫ��
// pop();			//����ͷ�Ƴ���һ��Ԫ��
// back();			//�������һ��Ԫ��
// front();			//���ص�һ��Ԫ��
// ��С������
// empty();			//�ж϶�ջ�Ƿ�Ϊ��
// size();			//����ջ�Ĵ�С
// 
//

class Person
{
public:
	
	Person(string Name, int Age)
	{
		this->Age = Age;
		this->Name = Name;
	}
	string Name;
	int Age;
};

//����queue
void test01()
{
	
	//��������
	queue<Person> q;

	//׼������
	Person p1("��ɮ", 30);
	Person p2("���", 29);
	Person p3("�˽�", 28);
	Person p4("ɳɮ", 20);

	//���
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	//�ж�ֻҪ���в�Ϊ�� �鿴��ͷ �� ��β Ȼ�����
	cout << "���д�СΪ��" << q.size() << endl;
	while (!q.empty())
	{
		//�鿴��ͷ
		cout << "��ͷ��������Ϊ: "<< q.front().Name << " ��ͷ��������Ϊ��" << q.front().Age << endl;
		//�鿴��β
		cout << "��β��������Ϊ: " <<q.back().Name << " ��β��������Ϊ��" << q.back().Age << endl;

		//����
		q.pop();

		cout << "���д�СΪ��" << q.size() << endl;
	}



}

int main()
{
	test01();
	system("pause");
	return 0;
}