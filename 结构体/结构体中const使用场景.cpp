#include<iostream>
#include<vector>
#include<string>
using namespace std;
//
// 8.7结构体中const使用场景
// 作用：用const来防止误操作
//

//学生结构体定义
struct Student
{
	string name;
	int age;
	int score;
};

//const使用场景
//将函数中的形参改为指针，可以减少内存空间，而且不会复制新的副本出来
void printStudent(const Student* stu)	//加const防止函数体中的误操作
{
	//stu->age = 100; //操作失败，因为加了const修饰
	cout << "姓名：" << stu->name << " 年龄：" << stu->age << " 分数：" << stu->score << endl;

}



int main() 
{
	//创建结构体变量
	struct Student s = { "Zhangsan",15,70 };

	//通过函数打印结构体变量信息
	printStudent(&s);

	system("pause");
	return 0;
}
