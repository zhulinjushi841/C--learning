#include<iostream>
#include<vector>
using namespace std;
//
// 结构体
// 8.1结构体基本概念
// 结构体属于用于自定义的数据类型，允许用户存储不同的数据类型
// 
// 8.2结构体定义和使用
// 语法： struct 结构体名 {结构体成员列表};
// 通过在结构体中创建变量的方式有三种：
// struct 结构体名 变量名
// struct 结构体名 变量名={成员1值，成员2值...}
// 定义结构体时顺便创建变量
//

//1.创建学生数据类型：学生包括(姓名，年龄，分数)
//自定义数据类型，一些类型组合组成的一个类型
//语法 struct 类型名称 {成员列表}
struct Student
{
	//成员列表
	//姓名
	string name;
	//年龄
	int age;
	//分数
	int grade;
}s3;

//2.通过学生类型创建具体学生
//2.1 struct Student s1
//2.2 struct Student s2 = {...}
//2.3 在定义结构体时顺便创建结构体变量
// 
// 总结：
// 1.定义结构体时的关键字是struct,不可省略
// 2.创建结构体变量的时候，关键字struct可以省略
// 3.结构体变量利用操作符"."访问成员
//

int main()
{
	//2.1 struct Student s1
	//struct关键字可以省略
	struct Student s1;
	//给s1属性复制，通过.访问结构体变量中的属性
	s1.name = "Zhangsan";
	s1.age = 18;
	s1.grade = 100;

	cout << "姓名：" << s1.name << " 年龄：" << s1.age << " 分数：" << s1.grade << endl;

	//2.2 struct Student s2 = {...}
	struct Student s2 = { "Lisi",19,90 };
	cout << "姓名：" << s2.name << " 年龄：" << s2.age << " 分数：" << s2.grade << endl;

	//2.3 在定义结构体时顺便创建结构体变量
	s3.age = 20;
	s3.name = "Wangzhi";
	s3.grade = 80;
	cout << "姓名：" << s3.name << " 年龄：" << s3.age << " 分数：" << s3.grade << endl;

	system("pause");
	return 0;
}