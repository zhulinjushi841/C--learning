#include<iostream>
#include <string>

using namespace std;

template<class T>
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

template<class T>
void mySort(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		int min = i;
		for (int j = i+1; j < len; j++)
		{
			if (arr[min] > arr[j])
			{
				min = j;
			}
		}
		if (min != i)
		{
			mySwap(arr[min], arr[i]);
		}
	}

}

template<class T>
void printArray(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
}

void test01()
{
	int intArr[] = { 45,324,32,68,356,789,23,1,7846 };
	int num = sizeof(intArr) / sizeof(int);
	mySort(intArr, num);
	printArray(intArr, num);
	cout << endl;
}

void test02()
{
	char charArr[] = "qwertyuiopasdfghjklzxcvbnm";
	int num = sizeof(charArr) / sizeof(char);
	mySort(charArr, num);
	printArray(charArr, num);
}

int main()
{
	test01();
	system("pause");
	return 0;
}