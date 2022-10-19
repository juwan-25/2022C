#include <iostream>
#include <string>

using namespace std;

int main()
{
	string food_spot[3];

	food_spot[0] = "소문난 성수 감자탕";
	food_spot[1] = "텐파";
	food_spot[2] = "감성타코";

	cout << "메뉴선택" << endl;
	int menu = 1;

	switch (menu)
	{
	case 1:
		cout << "한식" << endl;
		break;
	case 2:
		cout << "중식" << endl;
		break;
	case 3:
		cout << "양식" << endl;
		break;
	default:
		break;
	}
}