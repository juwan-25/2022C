#include <iostream>
#include <string>

using namespace std;

enum Food {
	KOREAN,		//한식
	WESTERN,	//중식
	CHINESE,	//양식
	COUNT
};

int main()
{
	string food_spot[Food::COUNT];	//3

	food_spot[Food::KOREAN] = "소문난 성수 감자탕";
	food_spot[Food::CHINESE] = "텐파";
	food_spot[Food::WESTERN] = "감성타코";


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