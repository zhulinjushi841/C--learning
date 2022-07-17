#include<iostream>
#include<string>
#include<vector>
using namespace std;

//冒泡排序算法
void BubbleSort(int arr[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		//对待排序序列进行冒泡排序
		for (int j = 0; j < len - i -1; j++)
		{
			//相邻元素进行比较，当顺序不正确的时候，交换位置
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}


}

int main()
{
	int arr[] = { 34,45657,32,45,6,234,56556,4 ,56,23,12,2344};
	int len = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, len);

	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}