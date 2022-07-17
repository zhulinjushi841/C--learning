#include<iostream>
#include<vector>
#include<string>
#include<ctime>
using namespace std;
//
// 8.8结构体案例
// 8.8.1案例1
// 案例描述：
// 学校正在做毕设项目，每名学生带领5个学生，总共有3名老师，需求如下
// 设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员
// 学生的成员有姓名、考试分数，创建数组存放3名老师，通过函数给每个老师及所带的学生赋值
// 最终打印老师数据以及老师所带的学生数据
//

//学生的结构体定义
struct Student
{
	string name;
	int score;
};

//老师的结构体定义
struct Teacher
{
	string name;
	struct Student stuArray[5];
};

//给老师和学生赋值的函数
void allocateSpace(struct Teacher tArray[], int len)
{
	string nameSeed = "ABCDE";
	//给老师开始赋值
	for (int i = 0; i < len; i++)
	{
		tArray[i].name = "Teacher_";
		tArray[i].name += nameSeed[i];

		//通过循环给每名老师所带的学生赋值
		for (int j = 0; j < 5; j++)
		{
			tArray[i].stuArray[j].name = "Student_";
			tArray[i].stuArray[j].name += nameSeed[j];

			int random = rand() % 61 + 40; //40~100
			tArray[i].stuArray[j].score = random;
		}
	}

}


//打印所有信息
void printInfo(struct Teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "老师姓名：" << tArray[i].name << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\t学生姓名：" << tArray[i].stuArray[j].name <<
				" 考试分数：" << tArray[i].stuArray[j].score << endl;
		}
	}
}

int main()
{
	//随机数种子
	srand((unsigned int)time(NULL));

	//创建3名老师的数组
	struct Teacher tArray[3];

	//通过函数给3名老师的信息赋值，并给老师带的学生信息赋值
	int len = sizeof(tArray) / sizeof(Teacher);
	allocateSpace(tArray, len);

	//打印所有老师及所带的学生信息
	printInfo(tArray, len);

	system("pause");
	return 0;
}