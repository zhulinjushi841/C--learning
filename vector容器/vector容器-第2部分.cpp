#include<vector>
#include<iostream>
using namespace std;

//
// vector�����ɾ��
// ����������
// ��vector�������в��롢ɾ������
// ����ԭ�ͣ�
// push_back(ele);						//β������Ԫ��ele		β��
// pop_back();							//ɾ�����һ��Ԫ��	βɾ
// insert(const_iterator pos, ele);		//������ָ��λ��pos����Ԫ��ele
// insert(const_iterator pos, int count, ele);	//������ָ��λ��pos����count��Ԫ��ele
// erase(const_iterator pos);			//ɾ��������ָ���Ԫ��
// erase(const_iterator start, const_iterator end);	//ɾ����������start��end֮���Ԫ��
// clear();								//ɾ��������ȫ��Ԫ��
// 
//
void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	vector<int> v1;

	//β��
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);

	printVector(v1);

	//βɾ
	v1.pop_back();
	printVector(v1);

	//����
	v1.insert(v1.begin(), 100);
	v1.insert(v1.begin(), 4, 200);
	printVector(v1);

	//ɾ��
	v1.erase(v1.begin());
	printVector(v1);

	//����ɾ��
	v1.erase(v1.begin(), v1.end());
	printVector(v1);

	//�������Ч����ͬ��v1.clear()
	/*v1.clear();
	printVector(v1);*/

}


int main()
{
	test01();
	system("pause");
	return 0;
}



//vector���ݴ�ȡ
// ����������
// ��vector�е����ݵĴ�ȡ����
// ����ԭ�ͣ�
// at(int idx);		//��������idx��ָ������
// operator[];		//��������idx��ָ������
// front();			//���������е�һ������Ԫ��
// back();			//�������������һ������Ԫ��
//


void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	//����[]��ʽ���������е�Ԫ��
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;

	//����at��ʽ����Ԫ��
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " ";
	}
	cout << endl;

	//��ȡ��һ��Ԫ��
	cout << "��һ��Ԫ��Ϊ�� " << v1.front() << endl;

	//��ȡ���һ��Ԫ��
	cout << "���һ��Ԫ��Ϊ: " << v1.back() << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}