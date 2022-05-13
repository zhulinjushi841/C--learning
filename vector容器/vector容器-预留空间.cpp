#include<vector>
#include<iostream>
using namespace std;
//
// vector预留空间
// 功能描述：
// 减少vector在动态扩展时的扩展次数
// 函数原型：
// reverse(int len);	//容器预留len个元素长度，预留位置不初始化，元素不可访问
// 总结：
// 
//

void printArray(vector<int>& vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec.at(i) << " ";
	}
	cout << endl;
}

void printVector(vector<int>& vec)
{
	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}



/// 2.实际用途
/// 

void test02()
{
	vector<int> v;

	//利用reserve预留空间
	v.reserve(100000);
	int num = 0;	//	统计空间开辟次数
	int* p = NULL;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}

	}

	cout << "num = " << num << endl;
}


int main()
{
	test02();
	system("pause");
}