#include<iostream>
#include<string>
using namespace std;
//
// 案例描述：
// 电脑主要组成部件为：CPU（用于计算),显卡(用于显示),内存条(用于存储)
// 将每个零件封装出抽象类 并且提供不同的厂商生产不同的零件 例如Intel厂和Lenovo厂
// 创建电脑类提供让电脑工作的函数 并且调用每个零件工作的接口
// 测试时组装三台不同的电脑进行工作
//

//抽象出不同的类
//抽象CPU类
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


//抽象内存条类
class Memory
{
public:
	//抽象的存储函数
	virtual void storage() = 0;
};

//电脑类
class Computer
{
public:
	Computer(CPU *cpu, VideoCard* vc, Memory* mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}

	//提供工作的函数
	void work()
	{
		//让零件工作起来，调用接口
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	}

	//提供析构函数 释放三个电脑的零件
	~Computer()
	{
		//CPU释放
		if (m_cpu != nullptr)
		{
			delete m_cpu;
			m_cpu = nullptr;
		}
		//显卡释放
		if (m_vc != nullptr)
		{
			delete m_vc;
			m_vc = nullptr;
		}
		//内存条释放
		if (m_mem != nullptr)
		{
			delete m_mem;
			m_mem = nullptr;
		}
	}

private:
	CPU* m_cpu;				//CPU零件指针
	VideoCard* m_vc;		//显卡零件指针
	Memory* m_mem;			//内存零件指针
};

//具体厂商
//Intel厂商
class IntelCPU :public CPU
{
public:
	void calculate()
	{
		cout << "Intel的CPU开始计算了!" << endl;
	}
};

class IntelVideoCard :public VideoCard
{
public:
	void display()
	{
		cout << "Intel的显卡开始显示了!" << endl;
	}
};

class IntelMemory :public Memory
{
public:
	void storage()
	{
		cout << "Intel的内存条开始存储了!" << endl;
	}
};


//Lenovo厂商
class LenovoCPU :public CPU
{
public:
	void calculate()
	{
		cout << "Lenovo的CPU开始计算了!" << endl;
	}
};

class LenovoVideoCard :public VideoCard
{
public:
	void display()
	{
		cout << "Lenovo的显卡开始显示了!" << endl;
	}
};

class LenovoMemory :public Memory
{
public:
	void storage()
	{
		cout << "Lenovo的内存条开始存储了!" << endl;
	}
};

void test01()
{
	//第一台电脑零件
	CPU* intelCpu = new IntelCPU;
	VideoCard* intelCard = new IntelVideoCard;
	Memory* intelmemory = new IntelMemory;

	//创建第一台电脑
	Computer* computer1 = new Computer(intelCpu, intelCard, intelmemory);
	computer1->work();
	delete computer1;

	cout << "-------------------------------------------" << endl;
	//第二台电脑组装
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
	computer2->work();
	delete computer2;

	cout << "-------------------------------------------" << endl;
	//第三台电脑组装
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
