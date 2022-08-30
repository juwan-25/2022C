#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	void eat() { cout << "�Դ�" << endl; }
	void roar() { cout << "¢��" << endl; }
	void walk() { cout << "�ȴ�" << endl; }

private:
	string name;
	int sex;
	int age;
};

class Tiger :public Animal {
public:
	void roar() { cout << "����" << endl; }
};

class Dog :public Animal {
public:
	void roar() { cout << "�۸�" << endl; }
};

int main()
{
	Animal animal;
	animal.roar(); //¢��

	Dog dog;
	dog.roar(); //�۸�
	Tiger tiger;
	tiger.roar(); //����


	return 0;
}