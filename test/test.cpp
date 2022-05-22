#include<iostream>
using namespace std;
class Animal
{
public:
	virtual void speak()
	{
		cout << "Animal is talking." << endl;
	}
 };

class Cat :public Animal
{
public:
	void speak()
	{
		cout << "Cat is talking." << endl;
	}
};

class Dog :public Animal
{
public:
	void speak()
	{
		cout << "Dog is talking." << endl;
	}
};

void doSpeak(Animal& animal)
{
	animal.speak();
}

void test01()
{
	Cat cat;
	Dog dog;
	doSpeak(cat);
	doSpeak(dog);
}

int main()
{
	test01();
	system("pause");
	return 0;
}