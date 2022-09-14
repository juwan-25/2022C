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
		cout << "이름 : " << name << endl;
		cout << "체력 : " << hp << endl;
		cout << "공격 : " << attack << endl;
		cout << "방어 : " << defense << endl;
	}
private:
	S name;
	T hp, attack, defense;
};

int main()
{
	User<string, int> * user = new User<string, int>("하하", 200, 20, 30);
	user->print();

	delete user;

	return 0;
}