#include <iostream>
#include <string>

using namespace std;

enum Food {
	KOREAN,		//�ѽ�
	WESTERN,	//�߽�
	CHINESE,	//���
	COUNT
};

int main()
{
	string food_spot[Food::COUNT];	//3

	food_spot[Food::KOREAN] = "�ҹ��� ���� ������";
	food_spot[Food::CHINESE] = "����";
	food_spot[Food::WESTERN] = "����Ÿ��";


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