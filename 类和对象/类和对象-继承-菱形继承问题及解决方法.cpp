#include <iostream>
using namespace std;

//���μ̳еĸ���
//��������̳�ͬһ������ ����ĳ����ͬʱ�̳����������� ���ּ̳б���Ϊ���μ̳� ������ʯ�̳�
// ���μ̳д��ڵ�����
// �򼯳��˶�������� ��ͬ���̳��˶�������� ������ʹ�����Ե�ʱ��ͻ����������
// ���ռ̳��Զ�������ݼ̳������� ��ʵ����ֻ��Ҫ�̳�һ�ݼ���

class Animal
{
public:
	int Age;
};

//���� ��̳� ���Խ�����μ̳е�����
//Ҳ���ڼ̳�֮ǰ ���Ϲؼ��� virtual �ͱ�Ϊ ��̳�
//Animal���Ϊ �����
class Sheep:virtual public Animal {};

class Tuo:virtual public Animal {};

class SheepTuo:public Sheep,public Tuo {};

void test01()
{
	SheepTuo st;
	//���������μ̳е�ʱ�� ��������ӵ����ͬ������ ��Ҫ����������
	st.Sheep::Age = 18;
	st.Tuo::Age = 30;
	cout << "st.Sheep::Age = " << st.Sheep::Age << endl;
	cout << "st.Tuo::Age = " << st.Tuo::Age << endl;
	cout << st.Age << endl;
	//�������ֻ��һ�ݼ��� ���μ̳е������������� ������Դ�˷�	
}

int main()
{
	test01();
	system("pause");
	return 0;
}