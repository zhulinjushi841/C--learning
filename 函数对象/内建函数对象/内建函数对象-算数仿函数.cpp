#include<functional>
#include<iostream>
using namespace std;
//
// �ڽ���������
// �ڽ�������������
// ���
// STL�ڽ���һЩ��������
// ���ࣺ
// �����º���
// ��ϵ�º���
// �߼��º���
// �÷���
// ��Щ�º����������Ķ����÷���һ�㺯����ȫ��ͬ
// ʹ���ڽ�����������Ҫ����ͷ�ļ� #include<functional>
// 
// �����º���
// ����������
// ʵ����������
// ����negate��һԪ���㣬�������Ƕ�Ԫ����
// �º���ԭ�ͣ�
// template<class T> T plus<T>			//�ӷ��º���
// template<class T> T minus<T>			//�����º���
// template<class T> T multiplies<T>	//�˷��º���
// template<class T> T divides<T>		//�����º���
// template<class T> T modulus<T>		//ȡģ�º���
// template<class T> T negate<T>		//ȡ���º���
//

//negate һԪ�º��� ȡ���º���
void test01()
{
	negate<int> n;

	cout << n(50) << endl;
}

//plus ��Ԫ�º��� �ӷ�
void test02()
{
	plus<int> p;
	cout << p(10, 30) << endl;
}

int main()
{
	test02();
	system("pause");
	return 0;
}