#include<iostream>
#include<string>
using namespace std;

#define MAX 1000  //�������

//
// �˵�����
// �����������û�ѡ���ܵĽ���
// ���裺
// ��װ������ʾ�ý��� ��void showMenu()
// ��main�����е��÷�װ�õĺ���
//



//�˵�����
void showMenu()
{
	cout << "*************************" << endl;
	cout << "***** 1�������ϵ�� *****" << endl;
	cout << "***** 2����ʾ��ϵ�� *****" << endl;
	cout << "***** 3��ɾ����ϵ�� *****" << endl;
	cout << "***** 4��������ϵ�� *****" << endl;
	cout << "***** 5���޸���ϵ�� *****" << endl;
	cout << "***** 6�������ϵ�� *****" << endl;
	cout << "***** 0���˳�ͨѶ¼ *****" << endl;
	cout << "************************* " << endl;
 
}

//
//�����ϵ��
// ��������:
// �����ϵ�˽ṹ��
// ���ͨѶ¼�ṹ��
// main�����д���ͨѶ¼
// ��װ�����ϵ�˺���
// ���������ϵ�˹���
// 
// �����ϵ�˽ṹ��
// ��ϵ����Ϣ�������������Ա����䡢��ϵ�绰����ͥסַ
//

struct Person
{
	string m_Name;	//����
	int m_Gender;		//�Ա�1.�� 2.Ů
	int m_Age;		//����
	string m_Phone;	//�绰
	string m_Addr;	//סַ
};


//ͨѶ¼�ṹ��
struct Addressbooks
{
	struct Person personArray[MAX];	//ͨѶ¼�б������ϵ������
	int m_Size;		//ͨѶ¼����Ա����
};



//1.�����ϵ��
void addPerson(Addressbooks* abs)
{
	//�ж�ͨѶ¼�Ƿ�������������˾Ͳ������
	if (abs->m_Size == MAX)
	{
		cout << "ͨѶ¼�������޷���ӣ�" << endl;
		return;
	}
	else
	{
		//��Ӿ�����ϵ��

		//����
		string name;
		cout << "������������ " << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;

		//�Ա�
		cout << "�������Ա� " << endl;
		cout << "1----��" << endl;
		cout << "2----Ů" << endl;
		int gender = 0;
		while (true)
		{
			cin >> gender;
			if (gender == 1 || gender == 2)
			{
				abs->personArray[abs->m_Size].m_Gender = gender;
				break;
			}
			cout << "������������������" << endl;
			
		}
		
		//����
		cout << "���������䣺 " << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;
				 
		//�绰
		cout << "��������ϵ�绰�� " << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		//סַ
		cout << "�������ַ�� " << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;
		
		//����ͨѶ¼����
		abs->m_Size++;

		cout << "���³ɹ���" << endl;

		system("pause");	//�밴���������
		system("cls");		//����

	}
}


//
// ��ʾ��ϵ��
// ������������ʾͨѶ¼�����е���ϵ����Ϣ
// ��ʾ��ϵ��ʵ�ֲ��裺
// ��װ��ʾ��ϵ�˺���
// ������ʾ��ϵ�˹���
// 
//


//2.��ʾ������ϵ��
void showPerson(Addressbooks* abs)
{
	//�ж�ͨѶ¼�������Ƿ�Ϊ0�����Ϊ0����ʾ��¼Ϊ��
	// �����Ϊ0����ʾ��¼����ϵ����Ϣ
	//
	if (abs->m_Size == 0)
	{
		cout << "��ǰ��¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "������ " << abs->personArray[i].m_Name << "\t";
			cout << "�Ա� " << (abs->personArray[i].m_Gender == 1 ? "��" : "Ů") << "\t";
			cout << "���䣺 " << abs->personArray[i].m_Age << "\t";
			cout << "�绰�� " << abs->personArray[i].m_Phone << "\t";
			cout << "סַ�� " << abs->personArray[i].m_Addr << endl;
		}
	}

	system("pause");
	system("cls");
}


//ɾ����ϵ��
//����������������������ɾ��ָ����ϵ��
// ɾ����ϵ��ʵ�ֲ��裺
// ��װ�����ϵ���Ƿ����
// ��װɾ����ϵ�˺���
// ����ɾ����ϵ�˹���
// 
// ��װ�����ϵ���Ƿ����
// ���˼·��
// ɾ����ϵ��֮ǰ��������Ҫ���ж��û��������ϵ���Ƿ����
// �������ɾ������������ʾ�û�û��Ҫɾ������ϵ��
// ������ǿ��԰Ѽ����ϵ���Ƿ���ڷ�װ��һ�������У��������
// �ͷ�����ϵ����ͨѶ¼�е�λ�ã��������򷵻�-1
//

//�����ϵ���Ƿ���ڣ�������ڣ�������ϵ�����������еľ���λ�ã������ڷ���-1
//����1 ͨѶ¼  ����2 �Ա�����
int isExist(Addressbooks* abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->personArray[i].m_Name == name)
		{
			return i;
		}
	}
	return -1;
}


//ɾ��ָ����ϵ��
void deletePerson(Addressbooks* abs)
{
	cout << "��������Ҫɾ������ϵ��" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);
	if (ret != -1)
	{
		for (int i = ret; i < abs->m_Size; i++)
		{
			abs->personArray[i] = abs->personArray[i + 1];
		}

		abs->m_Size--;
	}
	else
	{
		cout << "���޴���" << endl;
	}

	system("pause");
	system("cls");
}


//������ϵ��
//�������������������鿴ָ����ϵ����Ϣ
// ������ϵ��ʵ�ֲ���
// ��װ������ϵ�˺���
// ���Բ���ָ����ϵ��
// 
// ��װ������ϵ�˺���
// ʵ��˼·���ж��û�ָ������ϵ���Ƿ���ڣ�������ھ���ʾ��Ϣ������������ʾ���޴���
// 
void findPerson(Addressbooks* abs)
{
	cout << "��������Ҫ���ҵ���ϵ��" << endl;
	string name;
	cin >> name;

	//�ж�ָ������ϵ���Ƿ���ͨѶ¼��
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		cout << "������" << abs->personArray[ret].m_Name << "\t";
		cout << "�Ա�" << abs->personArray[ret].m_Gender << "\t";
		cout << "���䣺" << abs->personArray[ret].m_Age << "\t";
		cout << "�绰��" << abs->personArray[ret].m_Phone << "\t";
		cout << "סַ��" << abs->personArray[ret].m_Addr << endl;
	}
	else
	{
		cout << "���޴��ˣ�" << endl;
	}

	system("pause");
	system("cls");
}


//�޸���ϵ��
//�����������������������޸�ָ����ϵ��
// �޸���ϵ��ʵ�ֲ��裺
// ��װ�޸���ϵ�˺���
// �����޸���ϵ�˹���
// 
// ��װ�޸���ϵ�˺���
// ʵ��˼·�������û��������ϵ�ˣ�������ҳɹ������޸Ĳ���������ʧ������ʾ���޴���
//
void modifyPerson(Addressbooks* abs)
{
	cout << "��������Ҫ�޸ĵ���ϵ��" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);
	if (ret != -1)
	{
		//����
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;
		//�Ա�
		cout << "�������Ա�" << endl;
		cout << "1 --- ��" << endl;
		cout << "2 --- Ů" << endl;

		int gender = 0;
		cin >> gender;
		while (true)
		{
			if (gender == 1 || gender == 2)
			{
				abs->personArray[ret].m_Gender = gender;
				break;
			}
			else
			{
				cout << "�Ա�����������������룡" << endl;
			}
		}
		//����
		cout << "���������䣺" << endl;
		int age;
		cin >> age;
		abs->personArray[ret].m_Age = age;
		//�绰
		cout << "������绰��" << endl;
		int phone;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;
		//��ַ
		cout << "�������ַ��" << endl;
		string address;
		cin >> address;
		abs->personArray[ret].m_Addr = address;

		cout << "�޸ĳɹ�!" << endl;

	}
	else
	{
		cout << "���޴��ˣ�" << endl;
	}

	system("pause");
	system("cls");
}



//�����ϵ��
//�������������ͨѶ¼��������Ϣ
//�����ϵ��ʵ�ֲ���
//��װ�����ϵ�˺���
// ���������ϵ��
// 
// 
// ��װ�����ϵ�˺���
// ʵ��˼·����ͨѶ¼��������ϵ����Ϣ�������ֻҪ��ͨѶ¼��¼����ϵ��������Ϊ0��Ȼ�������߼���ռ���
//


//���������ϵ��
void clearPerson(Addressbooks* abs)
{
	cout << "�Ƿ�ȷ�����ȫ�����ݣ�" << endl;
	cout << "y ��   n ��" << endl;
	string confirm;
	cin >> confirm;
	if (confirm == "y")
	{
		abs->m_Size = 0;
		cout << "ͨѶ¼�Ѿ����" << endl;
	}
	else
	{
		cout << "δ���ͨѶ¼" << endl;
	}

	;
	system("pause");
	system("cls");
}



int main()
{
	//����ͨѶ¼�ṹ�����
	Addressbooks abs;
	//��ʼ��ͨѶ¼�е�ǰ��Ա����
	abs.m_Size = 0;

	int select = 0;//�����û�ѡ������ı���

	while (true)
	{
		//�˵�����
		showMenu();

		cin >> select;

		switch (select)
		{
		case 1:		//1�������ϵ��
			addPerson(&abs);	//���õ�ַ���ݣ����������β�
			break;
		case 2:		//2����ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3:		//3��ɾ����ϵ��
			deletePerson(&abs);
			break;
		case 4:		//4��������ϵ��
			findPerson(&abs); 
			break;
		case 5:		//5���޸���ϵ��
			modifyPerson(&abs);
			break;
		case 6:		//6�������ϵ��
			clearPerson(&abs);
			break;
		case 0:		//0���˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}

	}

	system("pause");
	return 0;
}