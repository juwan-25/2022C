#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	Animal() { cout << "Animal ����" << endl; }
	virtual ~Animal() { cout << "Animal �Ҹ�" << endl; }

	virtual void eat() = 0;
	virtual void roar() = 0;
	virtual void walk() = 0;

private:
	string name;
	int sex;
	int age;
};

class Tiger :public Animal {
public:
	Tiger() { cout << "Tiger ����" << endl; }
	virtual ~Tiger() { cout << "Tiger �Ҹ�" << endl; }

	void eat() override { cout << "����" << endl; }
	void roar() override { cout << "����" << endl; }
	void walk() override { cout << "�͹��͹�" << endl; }
};

class Dog :public Animal {
public:
	Dog() { cout << "Dog ����" << endl; }
	virtual ~Dog() { cout << "Dog �Ҹ�" << endl; }

	void eat() override { cout << "�ȳ�" << endl; }
	void roar() override { cout << "�۸�" << endl; }
	void walk() override { cout << "����" << endl; }
};

int main()
{
	Animal* animal = new Tiger;
	animal->walk();
	delete animal;

	animal = new Dog;
	animal->eat();
	delete animal;

	return 0;
}