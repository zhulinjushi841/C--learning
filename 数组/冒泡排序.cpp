#include<iostream>
#include<string>
using namespace std;
//
// 5.2.3冒泡排序算法
// 作用：最常见的排序算法，对数组内元素进行排序
// 1.比较相邻的元素，如果第一个比第二个大，就交换它们两个
// 2.对每一对相邻元素做同样的工作，执行完毕后，找到第一个最大值。
// 3.重复以上的步骤，每次比较次数-1，知道不需要比较
//第一轮找到最大的数排在最后，第二轮找到第二大的数排在倒数第二的位置，以此类推。
//


int main()
{
	//利用冒泡排序法实现升序序列
	int arr[] = { 4,2,8,0,5,7,1,3,9 };

	cout << "排序前：" << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	//降序总轮数 = 元素个数 - 1                  也即外层循环次数
	//每轮对比次数 = 元素个数 - 降序轮数 - 1	   也即内层循环次数
	int len = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < len - 1; i++)
	{
		//内层循环对比 次数 = 元素个数 - 当前轮数 - 1
		for (int j = 0; j < len - i - 1; j++)
		{
			//如果第一个数字比第二个数字大，则交换两个数字
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	cout << "排序后:" << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}

}