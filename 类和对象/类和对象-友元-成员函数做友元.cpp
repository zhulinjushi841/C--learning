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

	void visit();	//��visit�������Է���Building��˽�г�Ա
	void visit2();	//��visit2���������Է���Building��˽�г�Ա

	Building* building;
};


class Building
{
	friend void GoodGay::visit();
public:
	Building();
public:
	string m_SittingRoom;	//����

private:
	string m_BedRoom;	//����

};

//����ʵ�ֳ�Ա����
Building::Building()
{
	m_SittingRoom = "����";
	m_BedRoom = "����";
}

GoodGay::GoodGay()
{
	building = new Building;
}

void GoodGay::visit()
{
	cout << "visit �������ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "visit �������ڷ��ʣ�" << building->m_BedRoom << endl;
}

void GoodGay::visit2()
{
	cout << "visit �������ڷ��ʣ�" << building->m_SittingRoom << endl;
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
	return 0;
}