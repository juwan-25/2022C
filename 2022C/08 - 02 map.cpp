#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	//map�� key ���� ���� �ڵ� ���ĵ� 
	map<string, string> m;
	m["���"] = "����";
	m["����Ź"] = "�����";
	m["���»���"] = "�̵���";
	m["���"] = "���γ�";

	map<string, string>::iterator iter;
	for (iter = m.begin(); iter != m.end(); iter++) {
		cout << iter->first << "�� " << iter->second << endl;

	}
	cout << endl; 

	map<string, string>::iterator actor = m.find("���");
	if(actor != m.end())
		cout << "���ΰ��� " << actor->second << endl;

	return 0;
}