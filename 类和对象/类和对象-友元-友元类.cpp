#include<iostream>
#include<string>
using namespace std;
//
// 4.4��Ԫ
// ��������ļ��п���(Public)�����������(Private)
// �����������Ŀ��˶����Խ�ȥ���������������˽�еģ�Ҳ����˵ֻ�����ܽ�ȥ
// ���ǿ���������ѽ�ȥ
// 
// �ڳ������Щ˽������ Ҳ�������������һЩ������������з��ʣ�����Ҫ�õ���Ԫ�ļ���
// ��Ԫ��Ŀ�ľ�����һ������������ ������һ������˽�г�Ա
// 
// ��Ԫ�Ĺؼ���Ϊ friend
// 
// ��Ԫ������ʵ��
// 
// ȫ�ֺ�������Ԫ
// ������Ԫ
// ��Ա��������Ԫ
//

//
// ������Ԫ
//

class Building;
class GoodGay
{
public:
	GoodGay();

	void visit();	//�ιۺ��� ����Building�е�����
	Building* building;
	
};

class Building
{
	friend class GoodGay;
public:
	Building();
public:
	string m_SittingRoom;	//����

private:
	string m_BedRoom;	//����
};

//����д��Ա����
Building::Building()
{
	m_SittingRoom = "����";
	m_BedRoom = "����";
}

GoodGay::GoodGay()
{
	//�������������
	building = new Building;
}

void GoodGay::visit()
{
	cout << "�û��������ڷ��ʣ�" << building->m_SittingRoom << endl;

	cout << "�û��������ڷ��ʣ�" << building->m_BedRoom << endl;
}


void test01()
{
	GoodGay gg;
	gg.visit();
}



int main()
{
	test01();
	system("pause");
}