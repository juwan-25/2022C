#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	Animal() { cout << "Animal ����" << endl; }
	~Animal() { cout << "Animal �Ҹ�" << endl; }

	void eat() { cout << "�Դ�" << endl; }
	//roar�Լ��� �����Լ� ���̺� ���(���� ���ε�)
	virtual void roar() { cout << "¢��" << endl; }
	void walk() { cout << "�ȴ�" << endl; }
private:
	string name;
	int sex;
	int age;
};

class Tiger :public Animal {
public:
	Tiger() { cout << "Tiger ����" << endl; }
	~Tiger() { cout << "Tiger �Ҹ�" << endl; }

	void roar() override { cout << "����" << endl; }
};

class Dog :public Animal {
public:
	Dog() { cout << "Dog ����" << endl; }
	~Dog() { cout << "Dog �Ҹ�" << endl; }

	void roar() override { cout << "�۸�" << endl; }
};

int main()
{
	Animal* animal = new Tiger;
	delete animal;

	return 0;
}