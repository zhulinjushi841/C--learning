#include<iostream>
#include<vector>
using namespace std;
//
// 7.6ָ�������
// ���ã�����ָ����������е�Ԫ��
//����ָ����������е�Ԫ��
//

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	cout << "��һ��Ԫ��Ϊ��" << arr[0] << endl;

	int* p = arr;//arrҲ����������׵�ַ
	cout << "����ָ�������������һ��Ԫ��" << *p << endl;

	p++;
	cout << "����ָ����ʵڶ���Ԫ��" << *p << endl;

	cout << "����ָ���������" << endl;

	int* p2 = arr;
	for (int i = 0; i < 10; i++)
	{
		cout << *p2 << " ";
		p2++;
	}

	system("pause");
}


//
// 7.7ָ��ͺ���
// ���ã�����ָ�������������������޸�ʵ�ε�ֵ
//

//ʵ���������ֵĽ���
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
	//ָ��ͺ���
	//1.ֵ����
	int a = 10;
	int b = 20;
	swap01(a, b);
	cout << "a = " << a << " b = " << b << endl;


	//2.��ַ����
	int c = 30;
	int d = 40;
	swap02(&c, &d);
	cout << "c = " << c << " d = " << d << endl;
}

//
// 7.8ָ�롢���顢����
// ������������װһ������������ð������ʵ�ֶ������������������
// 
//

//ð��������		����1 ������׵�ַ  ����2 ���鳤��
void BubbleSort(int* arr, int len)		//int *arr Ҳ����дΪint arr[]
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
	//1.�ȴ�������
	int arr[] = { 12,34,4,676,44,897};

	//2.���鳤��
	int len = sizeof(arr) / sizeof(int);
	BubbleSort(arr, len);

	//3.��ӡ����
	printArray(arr, len);
	system("pause");
	return 0;
}