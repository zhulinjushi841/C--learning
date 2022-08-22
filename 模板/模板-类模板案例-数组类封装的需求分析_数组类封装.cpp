#include<iostream>
#include<string>
#include"MyArray.hpp"
using namespace std;
//
// 1.3.9 ��ģ�尸��
// 
// ���Զ��������������Լ��Զ����������͵����ݽ��д洢
// �������е����ݴ洢������
// ���캯���п��Դ������������
// �ṩ��Ӧ�Ŀ������캯���Լ�operator=��ֹǳ��������
// �ṩβ�巨��βɾ���������е����ݽ������Ӻ�ɾ��
// ����ͨ���±�ķ�ʽ���������е�Ԫ��
// ���Ի�ȡ�����е�ǰԪ�ظ��������������
//

void printIntArray(MyArray<int>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}


void test01()
{
	MyArray <int> arr1(5);

	for (int i = 0; i < 5; i++)
	{
		//����β�巨�������в�������
		arr1.Push_Back(i);
	}

	cout << "arr1�Ĵ�ӡ���Ϊ��" << endl;
	
	printIntArray(arr1);

	cout << "arr1������Ϊ��" << arr1.getCapacity() << endl;

	cout << "arr1�Ĵ�СΪ��" << arr1.getSize() << endl;
	
	MyArray<int> arr2(arr1);

	//βɾ
	arr2.Pop_Back();
	cout << "arr2βɾ��" << endl;

	printIntArray(arr2);
	cout << "arr2������Ϊ��" << arr2.getCapacity() << endl;
	cout << "arr2�Ĵ�СΪ��" << arr2.getSize() << endl;

	
	
	
	/*MyArray<int> arr2(arr1);

	MyArray<int> arr3(100);
	arr3 = arr1;*/

}


//�����Զ�����������
class Person
{
public:
	Person() {};
	Person(string name, int age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}

	string m_Name;
	int m_Age;
};

void printPersonArray(MyArray<Person>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << "������" << arr[i].m_Name << "���䣺" << arr[i].m_Name << endl;
	}
}


void test02()
{
	MyArray<Person> arr(10);

	Person p1("Sam", 100);
	Person p2("Jack", 160);
	Person p3("David", 150);
	Person p4("Rose", 130);
	Person p5("Edward", 170);

	//�����ݲ��뵽������
	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);
	arr.Push_Back(p4);
	arr.Push_Back(p5);
	arr.Push_Back(p1);

	//��ӡ����
	printPersonArray(arr);

	//�������
	cout << "arr����Ϊ��" << arr.getCapacity() << endl;

	//�����С
	cout << "arr��СΪ��" << arr.getSize() << endl;

}


int main()
{
	test02();
	system("pause");
	return 0;
}