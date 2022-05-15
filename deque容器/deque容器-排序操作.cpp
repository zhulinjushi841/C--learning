#include<algorithm>
#include<iostream>
#include<deque>
using namespace std;
//deque排序
// 功能描述：
// 利用算法实现对deque容器进行排序
// 算法：
// sort(iterator beg, iterator end)		//对beg和end区间内元素进行排序
// 
//

void test01()
{
	deque<int> d1;
	d1.push_back(10);
	d1.push_back(50);
	d1.push_back(70);
	d1.push_back(40);
	d1.push_back(20);

	sort(d1.begin(), d1.end());

	for (deque<int>::iterator it = d1.begin(); it != d1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;


}

int main()
{
	test01();
	system("pause");
	return 0;
}