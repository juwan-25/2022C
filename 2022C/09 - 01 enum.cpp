#include <iostream>
#include <string>

using namespace std;

int main()
{
	string food_spot[3];

	food_spot[0] = "�ҹ��� ���� ������";
	food_spot[1] = "����";
	food_spot[2] = "����Ÿ��";

	cout << "�޴�����" << endl;
	int menu = 1;

	switch (menu)
	{
	case 1:
		cout << "�ѽ�" << endl;
		break;
	case 2:
		cout << "�߽�" << endl;
		break;
	case 3:
		cout << "���" << endl;
		break;
	default:
		break;
	}
}