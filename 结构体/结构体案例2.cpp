#include<iostream>
#include<vector>
#include<string>
#include<ctime>
using namespace std;
//
// 8.8�ṹ�尸��
// 8.8.1����2
// ����������
// ���һ��Ӣ�۵Ľṹ�壬������Ա���������䣬�Ա𣻴����ṹ�����飬�����д��5��Ӣ��
// ͨ��ð������ķ������������е�Ӣ�۰���������������������մ�ӡ�����Ľ��
// 

struct Hero
{
	string name;	//����
	int age;		//����
	string gender;	//�Ա�
};

//ð������ ʵ��������������
void bubbleSort(struct Hero heroArray[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (heroArray[j].age > heroArray[j + 1].age)
			{
				struct Hero temp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = temp;
			}
		}
	}
}

//��ӡ���������Ϣ
void printInfo(struct Hero heroArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "������" << heroArray[i].name << " ���䣺" << heroArray[i].age
			<< " �Ա�" << heroArray[i].gender << endl;
	}
}

int main()
{
	//1.���Ӣ�۽ṹ��
	

	//2.����������5��Ӣ��
	struct Hero heroArray[5] =
	{
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"},
	};

	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	for (int i = 0; i < len; i++)
	{
		cout << "������" << heroArray[i].name << " ���䣺" << heroArray[i].age
			<< " �Ա�" << heroArray[i].gender << endl;
	}
	cout << endl;

	//3.������������򣬰������������������
	bubbleSort(heroArray, len);

	//4.�������Ľ����ӡ���
	printInfo(heroArray, len);

	system("pause");
	return 0;

}
