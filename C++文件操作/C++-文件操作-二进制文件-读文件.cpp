#include<iostream>
#include<fstream>
#include<string>
using namespace std;
//
// �������ļ�
// �Զ����Ʒ�ʽ���ļ����ж�д����
// �򿪷�ʽҪָ��Ϊ ios::binary
// 
// ���ļ�
// �����Ʒ�ʽд�ļ���Ҫ������������ó�Ա����read
// ����ԭ�ͣ� istream& read(char* buffer, int len);
// �������ͣ� �ַ�ָ��bufferָ���ڴ���һ�δ洢�ռ䡣len�Ƕ�д���ֽ���
//

class Person
{
public:
	//�ڶ��ļ����в�����ʱ����û�����C���Ե��ַ�������Ϊ�ײ�����Cд��
	char Name[64];	//����
	int Age;		//����
};

void test01()
{
	//1.����ͷ�ļ� fstream

	//2.����������
	ifstream ifs;

	//����ֱ���ڴ���ʱ�͸�����·��
	//ofstream ofs("G:/��һ��/C++learning/C-learning/C++�ļ�����/Person.txt", ios::out | ios::binary);

	//3.���ļ� �ж��ļ����Ƿ�ɹ�
	ifs.open("G:/��һ��/C++learning/C-learning/C++�ļ�����/Person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}

	//4.���ļ�
	Person p;
	ifs.read((char*)&p, sizeof(Person));

	cout << "����: " << p.Name << " ���䣺" << p.Age << endl;
	

	//5.�ر��ļ�
	ifs.close();
}

int main()
{
	test01();
	return 0;
}
