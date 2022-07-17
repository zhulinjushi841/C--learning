#include<iostream>
#include<vector>
using namespace std;
//
// 7.6指针和数组
// 作用：利用指针访问数组中的元素
//利用指针访问数组中的元素
//

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	cout << "第一个元素为：" << arr[0] << endl;

	int* p = arr;//arr也就是数组的首地址
	cout << "利用指针来访问数组第一个元素" << *p << endl;

	p++;
	cout << "利用指针访问第二个元素" << *p << endl;

	cout << "利用指针遍历数组" << endl;

	int* p2 = arr;
	for (int i = 0; i < 10; i++)
	{
		cout << *p2 << " ";
		p2++;
	}

	system("pause");
}


//
// 7.7指针和函数
// 作用：利用指针作函数参数，可以修改实参的值
//

//实现两个数字的交换
void swap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

void swap02(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	//指针和函数
	//1.值传递
	int a = 10;
	int b = 20;
	swap01(a, b);
	cout << "a = " << a << " b = " << b << endl;


	//2.地址传递
	int c = 30;
	int d = 40;
	swap02(&c, &d);
	cout << "c = " << c << " d = " << d << endl;
}

//
// 7.8指针、数组、函数
// 案例描述：封装一个函数，利用冒泡排序，实现对整型数组的升序排序
// 
//

//冒泡排序函数		参数1 数组的首地址  参数2 数组长度
void BubbleSort(int* arr, int len)		//int *arr 也可以写为int arr[]
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}


void printArray(int* arr, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}


int main()
{
	//1.先创建数组
	int arr[] = { 12,34,4,676,44,897};

	//2.数组长度
	int len = sizeof(arr) / sizeof(int);
	BubbleSort(arr, len);

	//3.打印数组
	printArray(arr, len);
	system("pause");
	return 0;
}