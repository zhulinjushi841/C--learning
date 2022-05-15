#include<deque>
#include<iostream>
using namespace std;
//
// deque����
// deque�����Ļ�������
// ���ܣ�
// ˫�����飬���Զ�ͷ�˽��в����ɾ������
// deque��vector����
// vector����ͷ���Ĳ���ɾ��Ч�ʽϵͣ�������Խ��Ч��Խ��
// deque��Զ��ԣ���ͷ���Ĳ���ɾ���ٶȻ��vectorҪ��
// vector����Ԫ��ʱ���ٶȻ��deque�飬��������ڲ�ʵ���й�
// 
// deque�ڲ�����ԭ��
// deque�ڲ��и��п��� ά��ÿ�λ������е����� �������д������ʵ����
// �п����м�¼�ľ��ǵ�ַ ���Կ���һֱ���в����ɾ������
// �п���ά������ÿ���������ĵ�ַ ʹ��ʹ��dequeʱ��һƬ�������ڴ�ռ�
// deque������֧��������ʵ�
// 
// deque���캯��
// ����������
// deque��������
// ����ԭ�ͣ�
// deque<T> deqT;				//Ĭ�Ϲ�����ʽ
// deque(beg, end);				//���캯����[beg,end)�����е�Ԫ�ؿ���������
// deque(n,elem);				//���캯����n��elem����������
// deque(const deque &deq);		//�������캯��
// 
//

void printDeque(deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		//ʹ�õ���������Ϊ const_iteratorʱ�������е����ݾͲ����޸ģ���Ϊֻ��
		//*it = 100;
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}

	printDeque(d1);

	//���丳ֵ
	deque<int> d2(d1.begin(), d1.end());

	printDeque(d2);

	deque<int> d3(10, 23);
	printDeque(d3);

	deque<int> d4(d3);
	printDeque(d4);
}

int main()
{
	test01();
	system("pause");
	return 0;
}