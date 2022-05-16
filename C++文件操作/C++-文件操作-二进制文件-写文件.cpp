#include<iostream>
#include<fstream>
#include<string>
using namespace std;
//
// 二进制文件
// 以二进制方式对文件进行读写操作
// 打开方式要指定为 ios::binary
// 
// 写文件
// 二进制方式写文件主要利用流对象调用成员函数write
// 函数原型： ostream& write(const char* buffer, int len);
// 参数解释： 字符指针buffer指向内存中一段存储空间。len是读写的字节数
//

class Person
{
public:
	//在对文件进行操作的时候，最好还是用C语言的字符串，因为底层是用C写的
	char Name[64];	
	int Age;
};

void test01()
{
	//1.包含头文件 fstream

	//2.创建流对象
	ofstream ofs;

	//或者直接在创建时就给定打开路径
	//ofstream ofs("G:/研一下/C++learning/C-learning/C++文件操作/Person.txt", ios::out | ios::binary);

	//3.打开文件
	ofs.open("G:/研一下/C++learning/C-learning/C++文件操作/Person.txt", ios::out | ios::binary);

	//4.写文件
	Person p = { "张三",18 };
	ofs.write((const char*)&p, sizeof(Person));

	//5.关闭文件
	ofs.close();
}

int main()
{
	test01();
	return 0;
}
