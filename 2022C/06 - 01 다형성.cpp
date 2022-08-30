#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	void eat() { cout << "¸Ô´Ù" << endl; }
	void roar() { cout << "Â¢´Ù" << endl; }
	void walk() { cout << "°È´Ù" << endl; }

private:
	string name;
	int sex;
	int age;
};

class Tiger :public Animal {
public:
	void roar() { cout << "¾îÈï" << endl; }
};

class Dog :public Animal {
public:
	void roar() { cout << "¸Û¸Û" << endl; }
};

int main()
{
	Animal animal;
	animal.roar(); //Â¢´Ù

	Dog dog;
	dog.roar(); //¸Û¸Û
	Tiger tiger;
	tiger.roar(); //¾îÈï


	return 0;
}