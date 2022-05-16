#include<iostream>
#include<fstream>
#include<string>
using namespace std;
//
// 二进制文件
// 以二进制方式对文件进行读写操作
// 打开方式要指定为 ios::binary
// 
// 读文件
// 二进制方式写文件主要利用流对象调用成员函数read
// 函数原型： istream& read(char* buffer, int len);
// 参数解释： 字符指针buffer指向内存中一段存储空间。len是读写的字节数
//

class Person
{
public:
	//在对文件进行操作的时候，最好还是用C语言的字符串，因为底层是用C写的
	char Name[64];	//姓名
	int Age;		//年龄
};

void test01()
{
	//1.包含头文件 fstream

	//2.创建流对象
	ifstream ifs;

	//或者直接在创建时就给定打开路径
	//ofstream ofs("G:/研一下/C++learning/C-learning/C++文件操作/Person.txt", ios::out | ios::binary);

	//3.打开文件 判断文件打开是否成功
	ifs.open("G:/研一下/C++learning/C-learning/C++文件操作/Person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}

	//4.读文件
	Person p;
	ifs.read((char*)&p, sizeof(Person));

	cout << "姓名: " << p.Name << " 年龄：" << p.Age << endl;
	

	//5.关闭文件
	ifs.close();
}

int main()
{
	test01();
	return 0;
}
