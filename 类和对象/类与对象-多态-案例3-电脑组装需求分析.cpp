#include<iostream>
#include<string>
using namespace std;
//
// ����������
// ������Ҫ��ɲ���Ϊ��CPU�����ڼ���),�Կ�(������ʾ),�ڴ���(���ڴ洢)
// ��ÿ�������װ�������� �����ṩ��ͬ�ĳ���������ͬ����� ����Intel����Lenovo��
// �����������ṩ�õ��Թ����ĺ��� ���ҵ���ÿ����������Ľӿ�
// ����ʱ��װ��̨��ͬ�ĵ��Խ��й���
//

//�������ͬ����
//����CPU��
class CPU
{
public:
	virtual void calculate() = 0;
};


class VideoCard
{
public:
	virtual void display() = 0;
};


//�����ڴ�����
class Memory
{
public:
	//����Ĵ洢����
	virtual void storage() = 0;
};

//������
class Computer
{
public:
	Computer(CPU *cpu, VideoCard* vc, Memory* mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}

	//�ṩ�����ĺ���
	void work()
	{
		//������������������ýӿ�
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	}

	//�ṩ�������� �ͷ��������Ե����
	~Computer()
	{
		//CPU�ͷ�
		if (m_cpu != nullptr)
		{
			delete m_cpu;
			m_cpu = nullptr;
		}
		//�Կ��ͷ�
		if (m_vc != nullptr)
		{
			delete m_vc;
			m_vc = nullptr;
		}
		//�ڴ����ͷ�
		if (m_mem != nullptr)
		{
			delete m_mem;
			m_mem = nullptr;
		}
	}

private:
	CPU* m_cpu;				//CPU���ָ��
	VideoCard* m_vc;		//�Կ����ָ��
	Memory* m_mem;			//�ڴ����ָ��
};

//���峧��
//Intel����
class IntelCPU :public CPU
{
public:
	void calculate()
	{
		cout << "Intel��CPU��ʼ������!" << endl;
	}
};

class IntelVideoCard :public VideoCard
{
public:
	void display()
	{
		cout << "Intel���Կ���ʼ��ʾ��!" << endl;
	}
};

class IntelMemory :public Memory
{
public:
	void storage()
	{
		cout << "Intel���ڴ�����ʼ�洢��!" << endl;
	}
};


//Lenovo����
class LenovoCPU :public CPU
{
public:
	void calculate()
	{
		cout << "Lenovo��CPU��ʼ������!" << endl;
	}
};

class LenovoVideoCard :public VideoCard
{
public:
	void display()
	{
		cout << "Lenovo���Կ���ʼ��ʾ��!" << endl;
	}
};

class LenovoMemory :public Memory
{
public:
	void storage()
	{
		cout << "Lenovo���ڴ�����ʼ�洢��!" << endl;
	}
};

void test01()
{
	//��һ̨�������
	CPU* intelCpu = new IntelCPU;
	VideoCard* intelCard = new IntelVideoCard;
	Memory* intelmemory = new IntelMemory;

	//������һ̨����
	Computer* computer1 = new Computer(intelCpu, intelCard, intelmemory);
	computer1->work();
	delete computer1;

	cout << "-------------------------------------------" << endl;
	//�ڶ�̨������װ
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
	computer2->work();
	delete computer2;

	cout << "-------------------------------------------" << endl;
	//����̨������װ
	Computer* computer3 = new Computer(new LenovoCPU, new IntelVideoCard, new LenovoMemory);
	computer3->work();
	delete computer3;

}

int main()
{
	test01();
	system("pause");
	return 0;
}
