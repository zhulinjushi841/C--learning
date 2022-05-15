#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

//¶þÔªÎ½´Ê
class MyCompare
{
public:
	bool operator()(int a, int b)
	{
		return a > b;
	}
};


void test01()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(20);
	v.push_back(30);
	v.push_back(50);

	sort(v.begin(), v.end(),MyCompare());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
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