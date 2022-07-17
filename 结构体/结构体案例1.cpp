#include<iostream>
#include<vector>
#include<string>
#include<ctime>
using namespace std;
//
// 8.8�ṹ�尸��
// 8.8.1����1
// ����������
// ѧУ������������Ŀ��ÿ��ѧ������5��ѧ�����ܹ���3����ʦ����������
// ���ѧ������ʦ�Ľṹ�壬��������ʦ�Ľṹ���У�����ʦ������һ�����5��ѧ����������Ϊ��Ա
// ѧ���ĳ�Ա�����������Է���������������3����ʦ��ͨ��������ÿ����ʦ��������ѧ����ֵ
// ���մ�ӡ��ʦ�����Լ���ʦ������ѧ������
//

//ѧ���Ľṹ�嶨��
struct Student
{
	string name;
	int score;
};

//��ʦ�Ľṹ�嶨��
struct Teacher
{
	string name;
	struct Student stuArray[5];
};

//����ʦ��ѧ����ֵ�ĺ���
void allocateSpace(struct Teacher tArray[], int len)
{
	string nameSeed = "ABCDE";
	//����ʦ��ʼ��ֵ
	for (int i = 0; i < len; i++)
	{
		tArray[i].name = "Teacher_";
		tArray[i].name += nameSeed[i];

		//ͨ��ѭ����ÿ����ʦ������ѧ����ֵ
		for (int j = 0; j < 5; j++)
		{
			tArray[i].stuArray[j].name = "Student_";
			tArray[i].stuArray[j].name += nameSeed[j];

			int random = rand() % 61 + 40; //40~100
			tArray[i].stuArray[j].score = random;
		}
	}

}


//��ӡ������Ϣ
void printInfo(struct Teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "��ʦ������" << tArray[i].name << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\tѧ��������" << tArray[i].stuArray[j].name <<
				" ���Է�����" << tArray[i].stuArray[j].score << endl;
		}
	}
}

int main()
{
	//���������
	srand((unsigned int)time(NULL));

	//����3����ʦ������
	struct Teacher tArray[3];

	//ͨ��������3����ʦ����Ϣ��ֵ��������ʦ����ѧ����Ϣ��ֵ
	int len = sizeof(tArray) / sizeof(Teacher);
	allocateSpace(tArray, len);

	//��ӡ������ʦ��������ѧ����Ϣ
	printInfo(tArray, len);

	system("pause");
	return 0;
}