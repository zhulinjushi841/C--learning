#include<iostream>
#include<vector>
#include<string>
using namespace std;
//
// 8.3结构体数组
// 作用：将自定义的结构体放入到数组中方便维护
// 语法：struct 结构体名 数组名[元素个数] = {	{}，{}，...,{} }
//

//结构体数组
//1.定义结构体
struct Student
{
	//成员列表
	string name;	//姓名
	int age;		//年龄
	int score;		//分数
};

//
// 8.4结构体指针
// 作用：通过指针访问结构体中的成员
// 利用操作符->可以通过结构体指针访问结构体属性
//


int main()
{
	//2.创建结构体数组
	struct Student stuArray[3] =
	{
		{"Zhangsan",18,100},
		{"Lisi",19,99},
		{"Wangwu",38,89}
	};

	//3.给结构体数组中的元素赋值
	stuArray[2].name = "Zhaoliu";
	stuArray[2].age = 23;
	stuArray[2].score = 87;

	//4.遍历结构体数组
	for (int i = 0; i < 3; i++)
	{
		cout << "姓名：" << stuArray[i].name 
			 << " 年龄：" << stuArray[i].age 
			 << " 分数：" << stuArray[i].score << endl;
	}


	system("pause");
	return 0;
}



int main()
{
	//1.创建学生结构体变量
	struct Student s = { "Zhangsan",18,100 };

	//2.通过指针指向结构体变量
	struct Student * p = &s;

	//3.通过指针访问结构体变量中的数据
	//通过结构体指针 访问结构体中的属性，需要使用"->"
	cout << "姓名：" << p->name 
		<< " 年龄：" << p->age 
		<< " 分数：" << p->score << endl;

	system("pause");
	return 0;
}