#include <iostream>
using namespace std;

//�̳еĺô� ���Ǽ����ظ��Ĵ���
// �﷨�� class ���ࣺ�̳з�ʽ ����
// ���� Ҳ��Ϊ ������ 
// ���� Ҳ��Ϊ ����
// �������еĳ�Ա���������󲿷� һ�����Ǵӻ���̳й����ģ���һ�������Լ����ӵĳ�Ա���ӻ��ۼ̳�����
// �����乲�ԣ��������ĳ�Ա�������������

//��������
class BasePage
{
public:
	void header()
	{
		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
	}
	void footer()
	{
		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
	}
	void left()
	{
		cout << "Java��Python��C++��...�����������б�" << endl;
	}
};

//Java����
class Java:public BasePage
{
public:
	void content()
	{
		cout << "Javaѧ����Ƶ" << endl;
	}
};

//Python����
class Python :public BasePage
{
public:
	void content()
	{
		cout << "Pythonѧ����Ƶ" << endl;
	}
};
//C++����
class CPP :public BasePage
{
public:
	void content()
	{
		cout << "CPPѧ����Ƶ" << endl;
	}
};
void test01()
{
	Java ja;
	ja.header();
	ja.footer();
	ja.content();
	ja.left();
	cout << "-------------------------------------" << endl;
	Python py;
	py.header();
	py.footer();
	py.content();
	py.left();
	cout << "---------------------------------------" << endl;
	CPP cpp;
	cpp.header();
	cpp.footer();
	cpp.content();
	cpp.left();

}

int main()
{
	test01();
	system("pause");
	return 0;
}