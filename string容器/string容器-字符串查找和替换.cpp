#include<string>
#include<iostream>
using namespace std;
//
// string���Һ��滻
// ����������
// ���ң�����ָ���ַ����Ƿ����
// �滻����ָ����λ���滻�ַ���
// 
// ����ԭ�ͣ�
// int find(const string& str, int pos = 0) const;			//����str��һ�γ���λ�ã���pos��ʼ����
// int find(const char* s, int pos = 0) const;				//����s��һ�γ���λ�ã���pos��ʼ����
// int find(const char* s,int pos, int n) const;			//��posλ�ò���s��ǰn���ַ���һ��λ��
// int find(const char c, int pos = 0) const;			    //�����ַ�c��һ�γ���λ��
// int rfind(const string& str, int pos = npos) const;		//����str���һ��λ�� ��pos��ʼ����
// int rfind(const char* s, int pos = npos) const;			//����s���һ�γ���λ�ã���pos��ʼ����
// int rfind(const char* s, int pos, int n) const;			//��pos����s��ǰn���ַ����һ��λ��
// int rfind(const char c, int pos = 0) const;				//�����ַ�c���һ��λ��
// string& replace(int pos, int n, const string& str);		//�滻��pos��ʼn���ַ�Ϊ�ַ���str
// string& replace(int pos, int n,const char* s);			//�滻��pos��ʼ��n���ַ�Ϊ�ַ���s
// 
// �ܽ᣺find�����Ǵ������� rfind�Ǵ������� �����ص��±궼���������
// find�����ַ����󷵻ز��ҵĵ�һ���ַ�λ�ã��Ҳ����򷵻�-1
// replace���滻��ʱ����Ҫָ�����ĸ�λ�ÿ�ʼ ���ٸ��ַ� �滻��ʲô�����ַ���
//

//1.����
void test01()
{
	string str1 = "abcdefgde";
	int pos = str1.find("de");

	//������� �򷵻��±� ��������� �򷵻�-1
	if (pos == -1)
	{
		cout << "δ�ҵ����ַ���" << endl;
	}
	else
	{
		cout << "�ҵ��ַ�����pos = " << pos << endl;
	}

	//rfind �� find����
	//rfind�����������	find�������Ҳ���  �����ص��±���Ȼ�Ǵ���������0Ϊʼ rfind������� �������
	int pos2 = str1.rfind("de");
	cout << "�ҵ��ַ�����pos = " << pos2 << endl;
			

}


//2.�滻
void test02()
{
	string str1 = "abcdefg";
	//��1��λ�ÿ�ʼ 3���ַ� �滻Ϊ str
	str1.replace(1, 3, "1111");
	cout << "str1 = " << str1 << endl;

}

int main()
{
	test02();
}