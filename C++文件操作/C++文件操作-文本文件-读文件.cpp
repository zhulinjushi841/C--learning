#include<iostream>
#include<string>
#include<fstream>
using namespace std;
//
// �ļ�����
// ��������ʱ���������ݶ�������ʱ���� ����һ�����н������ᱻ�ͷ�
// ͨ���ļ����Խ����ݳ־û�
// C++�ж��ļ�������Ҫ����ͷ�ļ�<fstream>
// �ļ����ͷ�Ϊ���֣�
// 1.�ı��ļ����������ļ����ı���ASCII����ʽ�洢�ڼ������
// 2.�������ļ������ļ����ı��Ķ�������ʽ�洢�ڼ������ �û�һ�㲻��ֱ�Ӷ�������
// �����ļ��������ࣺ
// 1.ofstream:д����
// 2.ifstream:������
// 3.fstream����д����
// 
// �ı��ļ�
// ���ļ�
// ���ļ��������£�
// 1.����ͷ�ļ�
// #include<fstream>
// 2.����������
// ifstream ifs;
// 3.���ļ����ж��ļ��Ƿ�򿪳ɹ�
// ifs.open("�ļ�·��"���򿪷�ʽ);
// 4.������
// ���ַ�ʽ��ȡ
// 5.�ر��ļ�
// ifs.close();
// 
// �ļ��򿪷�ʽ��
// �򿪷�ʽ			����
// ios::in			Ϊ���ļ������ļ�
// ios::out			Ϊд�ļ������ļ�
// ios::ate			��ʼλ�ã��ļ�β
// ios::app			׷�ӷ�ʽд�ļ�
// ios::trunc		����ļ�������ɾ�� �ٴ���
// ios::binary		�����Ʒ�ʽ
// 
// ע�⣺�ļ��򿪷�ʽ�������ʹ�ã�����|������
// ���磺�ö����Ʒ�ʽд�ļ� ios::binary | ios::out
// 
// �ܽ᣺
// 1.�ļ������������ͷ�ļ�fstream
// 2.���ļ���������ofstream������fstream��
// 3.���ļ�ʱ��Ҫָ�������ļ���·�����Լ��򿪷�ʽ
// 4.����<<�������ļ���д����
// 5.������ϣ�Ҫ�ر��ļ�
//

//�ı��ļ� ���ļ�

void test01()
{
	//1.����ͷ�ļ� fstream
	//2.����������
	ifstream ifs;
	//3.���ļ� ���ж��Ƿ�򿪳ɹ�
	ifs.open("G:/��һ��/C++learning/C-learning/C++�ļ�����/test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}
	//4.������
	
	//��������������ѡһ�ּ��伴�� ����ǰ����

	//��һ��
	/*char buf[1024] = { 0 };
	while (ifs >> buf)
	{
		cout << buf << endl;
	}*/

	//�ڶ���
	//char buf[1024] = { 0 };		//����{}�Ƕ�������г�ʼ�����ҳ�ʼֵΪ0
	//while (ifs.getline(buf, sizeof(buf)))
	//{
	//	cout << buf << endl;
	//}

	//������
	/*string buf;
	while (getline(ifs, buf))
	{
		cout << buf << endl;
	}*/

	//������
	char c;
	while ((c = ifs.get()) != EOF)		//EOF: end of file �ļ�β��־
	{
		cout << c;
	}

	//5.�ر��ļ�
	ifs.close();
}

int main()
{
	test01();
	system("pause");
	return 0;
}