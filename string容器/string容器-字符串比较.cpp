#include<iostream>
#include <string>
using namespace std;

//
// string字符串比较
// 功能描述：
// 字符串之间的比较
// 比较方式：
// 字符串比较是按照ASCII码进行对比 靠后的更大 例如	x大于h
// =返回0
// >返回1
// <返回-1
// 函数原型：
// int compare(const string &s) const;		//与字符串s比较
// int compare(const char *s) const;		//与字符串s比较
//

void test01()
{
	string str1 = "xello";
	string str2 = "hello";

	if (str1.compare(str2) == 0)
	{
		cout << "str1 等于 str2" << endl;
	}
	else if (str1.compare(str2) > 0)
	{
		cout << "str1 大于 str2" << endl;
	}
	else if (str1.compare(str2) < 0)
	{
		cout << "str1 小于 str2" << endl;
	}
}

int main()
{
	test01();
}