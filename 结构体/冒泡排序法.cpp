#include<iostream>
#include<string>
#include<vector>
using namespace std;

//ð�������㷨
void BubbleSort(int arr[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		//�Դ��������н���ð������
		for (int j = 0; j < len - i -1; j++)
		{
			//����Ԫ�ؽ��бȽϣ���˳����ȷ��ʱ�򣬽���λ��
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