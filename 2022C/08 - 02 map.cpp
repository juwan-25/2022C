#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	//map�� key ���� ���� �ڵ� ���ĵ� 
	map<string, string> m;
	m.insert(pair<string, string>("���", "����"));
	m.insert(pair<string, string>("����Ź", "�����"));
	m.insert(pair<string, string>("���»���", "�̵���"));
	m.insert(pair<string, string>("���", "���γ�"));

	map<string, string>::iterator iter;
	for (iter = m.begin(); iter != m.end(); iter++) {
		cout << iter->first << "�� " << iter->second << endl;

	}
	cout << endl; 

	map<string, string>::iterator actor = m.find("���");
	cout << "���ΰ��� " << actor->second << endl;

	return 0;
}