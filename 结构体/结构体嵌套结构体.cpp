#include<iostream>
#include<vector>
#include<string>
using namespace std;
//
// 8.5结构体嵌套结构体
// 作用：结构体中的成员可以是另一个结构体
// 例如：一个老师辅导一个学员，一个老师的结构体中，记录一个学生的结构体
//

//学生结构体定义
struct Student
{
	//成员列表
	string name;	//姓名
	int age;		//年龄
	int score;		//分数
};
//教师结构体定义
struct Teacher
{
	//成员列表
	int id;		//职工编号
	string name;//教师姓名
	int age;	//教师年龄
	struct Student stu;	//子结构体，学生
};



int main()
{
	//结构体嵌套结构体
	//创建老师
	Teacher t;
	t.id = 10000;
	t.name = "Laowang";
	t.age = 50;
	t.stu.name = "Xiaowang";
	t.stu.age = 20;
	t.stu.score = 60;

	cout << "老师姓名：" << t.name << " 老师编号：" << t.id << " 老师年龄：" << t.age
		<< " 老师辅导的学生姓名：" << t.stu.name << " 学生年龄：" << t.stu.age
		<< " 学生考试分数：" << t.stu.score << endl;

	system("pause");
	return 0;
}