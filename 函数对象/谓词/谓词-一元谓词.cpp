#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
//
// ν��
// ν�ʵĸ���
// ���
// ����bool���͵ķº�����Ϊ ν��
// ��� operator() ����һ������ ��ô����һԪν��
// ��� operator() ������������ ��ô������Ԫν��
//

//һԪν��
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

	//���������� ��û�д���5������
	//GreaterFive()��������������
	//ͨ���Ķ��ڲ�Դ���� ���Է��� find_if()���ص���һ�������� ����ҵ�Ŀ���򷵻�ָ���Ԫ�صĵ�����λ��
	//���δ�ҵ� ���صľ���end()β������
	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
	if (it == v.end())
	{
		cout << "δ�ҵ�" << endl;
	}
	else
	{
		cout << "�ҵ��˴���5��Ԫ�أ�����Ϊ�� " << *it << endl;
	}
}

int main()
{
	test01();
	system("pause");
	return 0;
}