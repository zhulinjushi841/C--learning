#include<set>
#include<stack>
#include<iostream>
using namespace std;
//
// stack���ý��
// ����������
//ջ�������õĶ���ӿ�
// ���캯����
// stack<T> stk;				//stack����ģ����ʵ�� stack�����Ĭ�Ϲ��췽ʽ
// stack(const stack &stk);		//�������캯��
// ��ֵ������
// stack& operator=(const stack &stk);		//���صȲ�����
// ���ݴ�ȡ��
// push(elem);		//��ջ�����Ԫ��
// pop();			//��ջ���Ƴ���һ��Ԫ��
// top();			//����ջ��Ԫ��
// ��С������
// empty();			//�ж϶�ջ�Ƿ�Ϊ��
// size();			//����ջ�Ĵ�С
//

//ջstack����
void test01()
{
	//�ص㣺�����Ƚ���������ݽṹ
	stack<int> s;

	//��ջ
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);

	//ֻҪջ��Ϊ�� �Ͳ鿴ջ�� ��ִ�г�ջ����
	while (!s.empty())
	{
		//�鿴ջ��Ԫ��
		cout << "ջ��Ԫ��Ϊ: " << s.top() << endl;
		//��ջ
		s.pop();
	}

	cout << "ջ�Ĵ�С�� " << s.size() << endl;




}

int main()
{
	test01();
	system("pause");
	return 0;
}

