#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	void eat() { cout << "¸Ô´Ù" << endl; }
	//roarÇÔ¼ö¸¦ °¡»óÇÔ¼ö Å×ÀÌºí¿¡ µî·Ï(µ¿Àû ¹ÙÀÎµù)
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
	Animal * animal = new Animal;
	animal->roar(); //Â¢´Ù
	delete animal;
	
	animal = new Dog;
	animal->roar();//Â¢´Ù
	delete animal;

	animal = new Tiger;
	animal->roar(); //Â¢´Ù
	delete animal;


	return 0;
}