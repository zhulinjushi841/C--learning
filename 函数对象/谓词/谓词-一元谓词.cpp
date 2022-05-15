#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
//
// 谓词
// 谓词的概念
// 概念：
// 返回bool类型的仿函数称为 谓词
// 如果 operator() 接受一个参数 那么叫做一元谓词
// 如果 operator() 接受两个参数 那么叫做二元谓词
//

//一元谓词
class GreaterFive
{
public:
	bool operator() (int a)
	{
		return a > 5;
	}
};

void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//查找容器中 有没有大于5的数字
	//GreaterFive()是匿名函数对象
	//通过阅读内部源代码 可以发现 find_if()返回的是一个迭代器 如果找到目标则返回指向该元素的迭代器位置
	//如果未找到 返回的就是end()尾迭代器
	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
	if (it == v.end())
	{
		cout << "未找到" << endl;
	}
	else
	{
		cout << "找到了大于5的元素，数字为： " << *it << endl;
	}
}

int main()
{
	test01();
	system("pause");
	return 0;
}