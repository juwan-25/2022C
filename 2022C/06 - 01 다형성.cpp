#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	Animal() { cout << "Animal »ý¼º" << endl; }
	~Animal() { cout << "Animal ¼Ò¸ê" << endl; }

	void eat() { cout << "¸Ô´Ù" << endl; }
	//roarÇÔ¼ö¸¦ °¡»óÇÔ¼ö Å×ÀÌºí¿¡ µî·Ï(µ¿Àû ¹ÙÀÎµù)
	virtual void roar() { cout << "Â¢´Ù" << endl; }
	void walk() { cout << "°È´Ù" << endl; }
private:
	string name;
	int sex;
	int age;
};

class Tiger :public Animal {
public:
	Tiger() { cout << "Tiger »ý¼º" << endl; }
	~Tiger() { cout << "Tiger ¼Ò¸ê" << endl; }

	void roar() override { cout << "¾îÈï" << endl; }
};

class Dog :public Animal {
public:
	Dog() { cout << "Dog »ý¼º" << endl; }
	~Dog() { cout << "Dog ¼Ò¸ê" << endl; }

	void roar() override { cout << "¸Û¸Û" << endl; }
};

int main()
{
	Animal* animal = new Tiger;
	delete animal;

	return 0;
}