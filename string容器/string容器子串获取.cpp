#include<iostream>
#include<string>
using namespace std;
//string�Ӵ�
// ����������
// ���ַ����л�ȡ��Ҫ���Ӵ�
// ����ԭ�ͣ�
// string substr(int pos = 0,int n = npos) const;	//���ش�pos��ʼ��n���ַ���ɵ��ַ���
// 
//

void test01()
{
	string str = "abcdef";
	string subStr = str.substr(1, 3);
	cout << "subStr = " << subStr << endl;
}


//ʹ�ò���
void test02()
{
	string email = "hello@sina.com";
	
	//���ʼ���ַ�л�ȡ �û�����Ϣ
	int pos = email.find('@');
	string username = email.substr(0, pos);
	cout << "username = " << username << endl;

}

int main()
{
	test02();
}