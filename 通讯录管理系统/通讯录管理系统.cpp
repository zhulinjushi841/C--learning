#include<iostream>
#include<string>
using namespace std;

#define MAX 1000  //最大人数

//
// 菜单功能
// 功能描述：用户选择功能的界面
// 步骤：
// 封装函数显示该界面 如void showMenu()
// 在main函数中调用封装好的函数
//



//菜单界面
void showMenu()
{
	cout << "*************************" << endl;
	cout << "***** 1、添加联系人 *****" << endl;
	cout << "***** 2、显示联系人 *****" << endl;
	cout << "***** 3、删除联系人 *****" << endl;
	cout << "***** 4、查找联系人 *****" << endl;
	cout << "***** 5、修改联系人 *****" << endl;
	cout << "***** 6、清空联系人 *****" << endl;
	cout << "***** 0、退出通讯录 *****" << endl;
	cout << "************************* " << endl;
 
}

//
//添加联系人
// 功能描述:
// 设计联系人结构体
// 设计通讯录结构体
// main函数中创建通讯录
// 封装添加联系人函数
// 测试添加联系人功能
// 
// 设计联系人结构体
// 联系人信息包括：姓名、性别、年龄、联系电话、家庭住址
//

struct Person
{
	string m_Name;	//姓名
	int m_Gender;		//性别：1.男 2.女
	int m_Age;		//年龄
	string m_Phone;	//电话
	string m_Addr;	//住址
};


//通讯录结构体
struct Addressbooks
{
	struct Person personArray[MAX];	//通讯录中保存的联系人数组
	int m_Size;		//通讯录中人员个数
};



//1.添加联系人
void addPerson(Addressbooks* abs)
{
	//判断通讯录是否已满，如果满了就不再添加
	if (abs->m_Size == MAX)
	{
		cout << "通讯录已满，无法添加！" << endl;
		return;
	}
	else
	{
		//添加具体联系人

		//姓名
		string name;
		cout << "请输入姓名： " << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;

		//性别
		cout << "请输入性别： " << endl;
		cout << "1----男" << endl;
		cout << "2----女" << endl;
		int gender = 0;
		while (true)
		{
			cin >> gender;
			if (gender == 1 || gender == 2)
			{
				abs->personArray[abs->m_Size].m_Gender = gender;
				break;
			}
			cout << "输入有误，请重新输入" << endl;
			
		}
		
		//年龄
		cout << "请输入年龄： " << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;
				 
		//电话
		cout << "请输入联系电话： " << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		//住址
		cout << "请输入地址： " << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;
		
		//更新通讯录人数
		abs->m_Size++;

		cout << "更新成功！" << endl;

		system("pause");	//请按任意键继续
		system("cls");		//清屏

	}
}


//
// 显示联系人
// 功能描述：显示通讯录中已有的联系人信息
// 显示联系人实现步骤：
// 封装显示联系人函数
// 测试显示联系人功能
// 
//


//2.显示所有联系人
void showPerson(Addressbooks* abs)
{
	//判断通讯录中人数是否为0，如果为0，提示记录为空
	// 如果不为0，显示记录的联系人信息
	//
	if (abs->m_Size == 0)
	{
		cout << "当前记录为空" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "姓名： " << abs->personArray[i].m_Name << "\t";
			cout << "性别： " << (abs->personArray[i].m_Gender == 1 ? "男" : "女") << "\t";
			cout << "年龄： " << abs->personArray[i].m_Age << "\t";
			cout << "电话： " << abs->personArray[i].m_Phone << "\t";
			cout << "住址： " << abs->personArray[i].m_Addr << endl;
		}
	}

	system("pause");
	system("cls");
}


//删除联系人
//功能描述：按照姓名进行删除指定联系人
// 删除联系人实现步骤：
// 封装检测联系人是否存在
// 封装删除联系人函数
// 测试删除联系人功能
// 
// 封装检测联系人是否存在
// 设计思路：
// 删除联系人之前，我们需要先判断用户输入的联系人是否存在
// 如果存在删除，不存在提示用户没有要删除的联系人
// 因此我们可以把检测联系人是否存在封装在一个函数中，如果存在
// 就返回联系人在通讯录中的位置，不存在则返回-1
//

//检测联系人是否存在，如果存在，返回联系人所在数组中的具体位置，不存在返回-1
//参数1 通讯录  参数2 对比姓名
int isExist(Addressbooks* abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->personArray[i].m_Name == name)
		{
			return i;
		}
	}
	return -1;
}


//删除指定联系人
void deletePerson(Addressbooks* abs)
{
	cout << "请输入您要删除的联系人" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);
	if (ret != -1)
	{
		for (int i = ret; i < abs->m_Size; i++)
		{
			abs->personArray[i] = abs->personArray[i + 1];
		}

		abs->m_Size--;
	}
	else
	{
		cout << "查无此人" << endl;
	}

	system("pause");
	system("cls");
}


//查找联系人
//功能描述：按照姓名查看指定联系人信息
// 查找联系人实现步骤
// 封装查找联系人函数
// 测试查找指定联系人
// 
// 封装查找联系人函数
// 实现思路：判断用户指定的联系人是否存在，如果存在就显示信息，不存在则提示查无此人
// 
void findPerson(Addressbooks* abs)
{
	cout << "请输入您要查找的联系人" << endl;
	string name;
	cin >> name;

	//判断指定的联系人是否在通讯录中
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		cout << "姓名：" << abs->personArray[ret].m_Name << "\t";
		cout << "性别：" << abs->personArray[ret].m_Gender << "\t";
		cout << "年龄：" << abs->personArray[ret].m_Age << "\t";
		cout << "电话：" << abs->personArray[ret].m_Phone << "\t";
		cout << "住址：" << abs->personArray[ret].m_Addr << endl;
	}
	else
	{
		cout << "查无此人！" << endl;
	}

	system("pause");
	system("cls");
}


//修改联系人
//功能描述：按照姓名重新修改指定联系人
// 修改联系人实现步骤：
// 封装修改联系人函数
// 测试修改联系人功能
// 
// 封装修改联系人函数
// 实现思路：查找用户输入的联系人，如果查找成功进行修改操作，查找失败则提示查无此人
//
void modifyPerson(Addressbooks* abs)
{
	cout << "请输入您要修改的联系人" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);
	if (ret != -1)
	{
		//姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;
		//性别
		cout << "请输入性别：" << endl;
		cout << "1 --- 男" << endl;
		cout << "2 --- 女" << endl;

		int gender = 0;
		cin >> gender;
		while (true)
		{
			if (gender == 1 || gender == 2)
			{
				abs->personArray[ret].m_Gender = gender;
				break;
			}
			else
			{
				cout << "性别输入错误，请重新输入！" << endl;
			}
		}
		//年龄
		cout << "请输入年龄：" << endl;
		int age;
		cin >> age;
		abs->personArray[ret].m_Age = age;
		//电话
		cout << "请输入电话：" << endl;
		int phone;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;
		//地址
		cout << "请输入地址：" << endl;
		string address;
		cin >> address;
		abs->personArray[ret].m_Addr = address;

		cout << "修改成功!" << endl;

	}
	else
	{
		cout << "查无此人！" << endl;
	}

	system("pause");
	system("cls");
}



//清空联系人
//功能描述：清空通讯录中所有信息
//清空联系人实现步骤
//封装清空联系人函数
// 测试清空联系人
// 
// 
// 封装清空联系人函数
// 实现思路：将通讯录中所有联系人信息清除掉，只要将通讯录记录的联系人数量置为0，然后再做逻辑清空即可
//


//清空所有联系人
void clearPerson(Addressbooks* abs)
{
	cout << "是否确定清空全部数据？" << endl;
	cout << "y 是   n 否" << endl;
	string confirm;
	cin >> confirm;
	if (confirm == "y")
	{
		abs->m_Size = 0;
		cout << "通讯录已经清空" << endl;
	}
	else
	{
		cout << "未清空通讯录" << endl;
	}

	;
	system("pause");
	system("cls");
}



int main()
{
	//创建通讯录结构体变量
	Addressbooks abs;
	//初始化通讯录中当前人员个数
	abs.m_Size = 0;

	int select = 0;//创建用户选择输入的变量

	while (true)
	{
		//菜单调用
		showMenu();

		cin >> select;

		switch (select)
		{
		case 1:		//1、添加联系人
			addPerson(&abs);	//利用地址传递，可以修饰形参
			break;
		case 2:		//2、显示联系人
			showPerson(&abs);
			break;
		case 3:		//3、删除联系人
			deletePerson(&abs);
			break;
		case 4:		//4、查找联系人
			findPerson(&abs); 
			break;
		case 5:		//5、修改联系人
			modifyPerson(&abs);
			break;
		case 6:		//6、清空联系人
			clearPerson(&abs);
			break;
		case 0:		//0、退出通讯录
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}

	}

	system("pause");
	return 0;
}