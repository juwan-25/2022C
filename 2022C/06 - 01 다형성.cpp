#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	Animal() { cout << "Animal 积己" << endl; }
	virtual ~Animal() { cout << "Animal 家戈" << endl; }

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
	Tiger() { cout << "Tiger 积己" << endl; }
	virtual ~Tiger() { cout << "Tiger 家戈" << endl; }

	void eat() override { cout << "铝铝" << endl; }
	void roar() override { cout << "绢蕊" << endl; }
	void walk() override { cout << "磐棍磐棍" << endl; }
};

class Dog :public Animal {
public:
	Dog() { cout << "Dog 积己" << endl; }
	virtual ~Dog() { cout << "Dog 家戈" << endl; }

	void eat() override { cout << "橙橙" << endl; }
	void roar() override { cout << "港港" << endl; }
	void walk() override { cout << "气气" << endl; }
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