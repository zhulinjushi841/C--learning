#include<iostream>
#include<vector>
#include<string>
using namespace std;
//
// 8.7�ṹ����constʹ�ó���
// ���ã���const����ֹ�����
//

//ѧ���ṹ�嶨��
struct Student
{
	string name;
	int age;
	int score;
};

//constʹ�ó���
//�������е��βθ�Ϊָ�룬���Լ����ڴ�ռ䣬���Ҳ��Ḵ���µĸ�������
void printStudent(const Student* stu)	//��const��ֹ�������е������
{
	//stu->age = 100; //����ʧ�ܣ���Ϊ����const����
	cout << "������" << stu->name << " ���䣺" << stu->age << " ������" << stu->score << endl;

}



int main() 
{
	//�����ṹ�����
	struct Student s = { "Zhangsan",15,70 };

	//ͨ��������ӡ�ṹ�������Ϣ
	printStudent(&s);

	system("pause");
	return 0;
}
