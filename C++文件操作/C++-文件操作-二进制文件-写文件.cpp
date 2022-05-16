#include<iostream>
#include<fstream>
#include<string>
using namespace std;
//
// �������ļ�
// �Զ����Ʒ�ʽ���ļ����ж�д����
// �򿪷�ʽҪָ��Ϊ ios::binary
// 
// д�ļ�
// �����Ʒ�ʽд�ļ���Ҫ������������ó�Ա����write
// ����ԭ�ͣ� ostream& write(const char* buffer, int len);
// �������ͣ� �ַ�ָ��bufferָ���ڴ���һ�δ洢�ռ䡣len�Ƕ�д���ֽ���
//

class Person
{
public:
	//�ڶ��ļ����в�����ʱ����û�����C���Ե��ַ�������Ϊ�ײ�����Cд��
	char Name[64];	
	int Age;
};

void test01()
{
	//1.����ͷ�ļ� fstream

	//2.����������
	ofstream ofs;

	//����ֱ���ڴ���ʱ�͸�����·��
	//ofstream ofs("G:/��һ��/C++learning/C-learning/C++�ļ�����/Person.txt", ios::out | ios::binary);

	//3.���ļ�
	ofs.open("G:/��һ��/C++learning/C-learning/C++�ļ�����/Person.txt", ios::out | ios::binary);

	//4.д�ļ�
	Person p = { "����",18 };
	ofs.write((const char*)&p, sizeof(Person));

	//5.�ر��ļ�
	ofs.close();
}

int main()
{
	test01();
	return 0;
}
