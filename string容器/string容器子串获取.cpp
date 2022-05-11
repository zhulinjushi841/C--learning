#include<iostream>
#include<string>
using namespace std;
//string子串
// 功能描述：
// 从字符串中获取想要的子串
// 函数原型：
// string substr(int pos = 0,int n = npos) const;	//返回从pos开始的n个字符组成的字符串
// 
//

void test01()
{
	string str = "abcdef";
	string subStr = str.substr(1, 3);
	cout << "subStr = " << subStr << endl;
}


//使用操作
void test02()
{
	string email = "hello@sina.com";
	
	//从邮件地址中获取 用户名信息
	int pos = email.find('@');
	string username = email.substr(0, pos);
	cout << "username = " << username << endl;

}

int main()
{
	test02();
}