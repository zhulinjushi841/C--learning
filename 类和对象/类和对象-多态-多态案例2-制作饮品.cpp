#include <iostream>
using namespace std;
//
// ��̬������-������Ʒ
// ����������
// ������Ʒ�Ĵ�������Ϊ����ˮ-����-���뱭��-���븨��
// ���ö�̬����ʵ�ֱ��������ṩ����������Ʒ���࣬�ṩ�����������ȺͲ�Ҷ
// �ܽ᣺
// ��̬����������� Ҳ�� һ�������еĽӿ� �ڼ̳еĶ�����������Ŷ�����̬
//

class AbstractDrinking
{
public:
	//��ˮ
	virtual void Boil() = 0;

	//����
	virtual void Brew() = 0;

	//���뱭��
	virtual void PourInCup() = 0;

	//���븨��
	virtual void AddIngredient() = 0;
	
	//������Ʒ
	void makeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		AddIngredient();
	}
};


//��������
class Coffee :public AbstractDrinking
{
public:
	//��ˮ
	virtual void Boil()
	{
		cout << "��ũ��ɽȪ" << endl;
	}

	//����
	virtual void Brew()
	{
		cout << "���ݿ���" << endl;
	}

	//���뱭��
	virtual void PourInCup()
	{
		cout << "���뱭��" << endl;
	}

	//���븨��
	virtual void AddIngredient()
	{
		cout << "�����Ǻ�ţ��" << endl;
	}

};

class Tea :public AbstractDrinking
{
public:
	//��ˮ
	virtual void Boil()
	{
		cout << "���Ȫˮ" << endl;
	}

	//����
	virtual void Brew()
	{
		cout << "���ݲ�Ҷ" << endl;
	}

	//���뱭��
	virtual void PourInCup()
	{
		cout << "���뱭��" << endl;
	}

	//���븨��
	virtual void AddIngredient()
	{
		cout << "�������" << endl;
	}

};

void doWork(AbstractDrinking* abs)	//AbstractDrinking* abs = new Coffee
{
	abs->makeDrink();
	delete abs;	//�ͷŶ����ڴ�
}

void test01()
{
	//��������
	doWork(new Coffee);

	cout << "------------------------------------------" << endl;

	//������Ҷ
	doWork(new Tea);

}

int main()
{
	test01();
	system("pause");
}