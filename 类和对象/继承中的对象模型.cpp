#include <iostream>
using namespace std;

//�̳��еĶ���ģ��
class Base
{
public:
	int A;
protected:
	int B;
private:
	int C;
};

class Son :public Base
{
public:
	int D;
};

//���ÿ�����Ա������ʾ���߲鿴����ģ�� �ڿ�ʼ������Ѱ��Developer Command Prompt for vs2019
//��ת�̷� G:
// ��ת�ļ�·�� cd ����·��
// dir �鿴��ǰĿ¼
// �鿴���� cl /dl reportSingleClassLayout���� �ļ���
//��ת

void test01()
{
	//������ȫ���Ǿ�̬��Ա���Ծ��ᱻ����̳���ȥ
	// ��СΪ 16
	//������˽�г�Ա���� ������������ ���ʲ��� ����ȴ�Ǳ��̳�
	cout << "size of Son " << sizeof(Son) << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}


//�̳��еĹ��������˳�����£�
//�ȹ��츸�� �ٹ������� ������˳���빹���෴ Ҳ������������ ����������

//�̳���ͬ���ĳ�Ա����ʽ
// ��������ͬ����Ա ֱ�ӷ��ʼ���
// ���ʸ���ͬ����Ա ��Ҫ��������