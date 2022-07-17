#include<iostream>
#include<vector>
using namespace std;
//
//8.6 结构体做函数参数
// 作用：结构体作为参数向函数中传递
// 传递方式有两种：
// 值传递
// 地址传递
// 
// 总结：如果不想修改主函数中的数据，用值传递，反之用地址传递
//

struct Student
{
	//成员列表
	string name;	//姓名
	int age;		//年龄
	int score;		//分数
};


//打印学生信息函数
//1.值传递
void printStudent1(struct Student s)
{
	cout << "子函数1中 姓名：" << s.name << " 年龄：" << s.age << " 分数：" << s.score << endl;
}

//2.地址传递
void printStudent2(struct Student *p)
{
	cout << "子函数2中 姓名：" << p->name << " 年龄：" << p->age << " 分数：" << p->score << endl;
}

int main()
{
	//结构体做函数参数
	//将学生传入到一个参数中，打印学生身上的所有信息


	//创建结构体变量
	struct Student s;
	s.name = "Zhangsan";
	s.age = 20;
	s.score = 85;

	printStudent1(s);
	printStudent2(&s);
	/*cout << "main函数中打印 姓名：" << s.name << " 年龄：" << s.age << " 分数：" << s.score << endl;*/

	system("pause");
	return 0;
}