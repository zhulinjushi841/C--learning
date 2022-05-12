#include <iostream>
#include<vector>
using namespace std;

//vector����
// vector��������
// ���ܣ�
// vector���ݽṹ������ǳ����ƣ�Ҳ��Ϊ��������
//vector����ͨ��������
// ��֮ͬ�����������Ǿ�̬�ռ䣬��vector���Զ�̬��չ
// ��̬��չ��
// ��������ԭ�пռ�֮������¿ռ䣬�����Ҹ�����ڴ�ռ䣬Ȼ��ԭ���ݿ����¿ռ䣬���ͷ�ԭ�ռ�
// vector�����ĵ�������֧��������ʵĵ�����
// ���õĵ������У� v.end()    v.begin()
// ֧�ֵĲ�����β���βɾ���ֱ��� push_back() �� pop_back()
// 
// vector���캯��
// ����������
// ����vector����
// ����ԭ�ͣ�
// vector<T> v;					//����ģ��ʵ����ʵ�֣�Ĭ�Ϲ��캯��
// vector(v.begin(),v.end());	//��v[begin(),end()]�����е�Ԫ�ؿ���������
// vector(n,elem);				//���캯����n��elem����������
// vector(const vector &vec);	//�������캯��
//

void printVector( vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	
}


//vector��������
void test01()
{
	vector<int> v1;			//Ĭ�Ϲ��� �޲ι���

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	//ͨ�����䷽ʽ���й���
	vector<int> v2(v1.begin(), v1.end());
	printVector(v2);

	//n��elem��ʽ����
	vector<int> v3(10, 100);
	printVector(v3);

	//�������캯��
	vector<int> v4(v3);
	printVector(v4);

}


int main()
{
	test01();
}




//vector��ֵ����
//����������
//��vector�������и�ֵ
//����ԭ�ͣ�
//vector& operator=(const vector &vec);		//���صȺŲ�����
// assign(beg, end);						//��[beg, end)�����е����ݿ�����ֵ������
// assign(n,elem);							//��n��elem������ֵ������
// 
// �ܽ᣺
// vector��ֵ��ʽ�Ƚϼ򵥣�ʹ�� operator=������assign������
//

void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//vector��ֵ
void test01()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	//��ֵ   operator=
	vector<int> v2;
	v2 = v1;
	printVector(v2);

	//��ֵ assign
	vector<int> v3;
	v3.assign(v1.begin(), v1.end());
	printVector(v3);

	//n��elem��ʽ��ֵ
	vector<int> v4;
	v4.assign(10, 5);
	printVector(v4);


}

int main()
{
	test01();
	system("pause");
}


//vector�����ʹ�С
// ����������
// ��vector�����������ʹ�С����
// ����ԭ�ͣ�
// empty();					//�ж������Ƿ�Ϊ��
// capacity();				//����������
// size();					//����������Ԫ�صĸ���
// resize(int num);			//����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ�ã���������̣���ĩβ�����������ȵ�Ԫ�ؽ���ɾ��
// resize(int num, elem);	//����ָ�������ĳ���Ϊnum���������䳤������elem�����λ�ã���������̣���ĩβ�����������ȵ�Ԫ�ؽ���ɾ��
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
	printVector(v1);

	if (v1.empty())	//�� ��������Ϊ��
	{
		cout << "v1Ϊ��" << endl;
	}
	else
	{
		cout << "v1Ϊ�ǿ�" << endl;
		cout << "v1������Ϊ�� " << v1.capacity() << endl;
		cout << "v1�Ĵ�СΪ�� " << v1.size() << endl;
	}

	//�����ƶ���С
	v1.resize(15, 100);		//Ĭ����0��� ���������صİ汾����ָ��Ĭ�����ֵ ���������100���ʹ��100�������
	cout << "v1������Ϊ�� " << v1.capacity() << endl;
	printVector(v1);		//�������ָ���ı�ԭ��������Ĭ����0����µ�λ��

	v1.resize(5);
	printVector(v1);		//�������ָ���ı�ԭ���̣��򳬳��Ĳ��ֻᱻɾ��
}

int main()
{
	test01();

	system("pause");

}