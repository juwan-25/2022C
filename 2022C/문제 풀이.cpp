#include <iostream>
#include <string>

using namespace std;

template <typename S, typename T>
class User {
public:
	
	User(S n, T h, T a, T d) {
		name = n;
		hp = h;
		attack = a;
		defense = d;
	}

	void print() {
		cout << "�̸� : " << name << endl;
		cout << "ü�� : " << hp << endl;
		cout << "���� : " << attack << endl;
		cout << "��� : " << defense << endl;
	}
private:
	S name;
	T hp, attack, defense;
};

int main()
{
	User<string, int> * user = new User<string, int>("����", 200, 20, 30);
	user->print();

	delete user;

	return 0;
}