#include<iostream>
#include<string>
#include<fstream>
using namespace std;
//
// 文件操作
// 程序运行时产生的数据都属于临时数据 程序一旦运行结束都会被释放
// 通过文件可以将数据持久化
// C++中对文件操作需要包含头文件<fstream>
// 文件类型分为两种：
// 1.文本文件————文件以文本的ASCII码形式存储在计算机中
// 2.二进制文件——文件以文本的二进制形式存储在计算机中 用户一般不能直接读懂它们
// 操作文件的三大类：
// 1.ofstream:写操作
// 2.ifstream:读操作
// 3.fstream：读写操作
// 
// 文本文件
// 读文件
// 读文件步骤如下：
// 1.包含头文件
// #include<fstream>
// 2.创建流对象
// ifstream ifs;
// 3.打开文件并判断文件是否打开成功
// ifs.open("文件路径"，打开方式);
// 4.读数据
// 四种方式读取
// 5.关闭文件
// ifs.close();
// 
// 文件打开方式：
// 打开方式			解释
// ios::in			为读文件而打开文件
// ios::out			为写文件而打开文件
// ios::ate			初始位置：文件尾
// ios::app			追加方式写文件
// ios::trunc		如果文件存在先删除 再创建
// ios::binary		二进制方式
// 
// 注意：文件打开方式可以配合使用，利用|操作符
// 例如：用二进制方式写文件 ios::binary | ios::out
// 
// 总结：
// 1.文件操作必须包含头文件fstream
// 2.读文件可以利用ofstream，或者fstream类
// 3.打开文件时需要指定操作文件的路径，以及打开方式
// 4.利用<<可以向文件中写数据
// 5.操作完毕，要关闭文件
//

//文本文件 读文件

void test01()
{
	//1.包含头文件 fstream
	//2.创建流对象
	ifstream ifs;
	//3.打开文件 并判断是否打开成功
	ifs.open("G:/研一下/C++learning/C-learning/C++文件操作/test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}
	//4.读数据
	
	//以下四种随意挑选一种记忆即可 建议前三种

	//第一种
	/*char buf[1024] = { 0 };
	while (ifs >> buf)
	{
		cout << buf << endl;
	}*/

	//第二种
	//char buf[1024] = { 0 };		//加上{}是对数组进行初始化，且初始值为0
	//while (ifs.getline(buf, sizeof(buf)))
	//{
	//	cout << buf << endl;
	//}

	//第三种
	/*string buf;
	while (getline(ifs, buf))
	{
		cout << buf << endl;
	}*/

	//第四种
	char c;
	while ((c = ifs.get()) != EOF)		//EOF: end of file 文件尾标志
	{
		cout << c;
	}

	//5.关闭文件
	ifs.close();
}

int main()
{
	test01();
	system("pause");
	return 0;
}