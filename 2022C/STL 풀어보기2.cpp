#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	//map�� key ���� ���� �ڵ� ���ĵ� 
	//������ ����
	map<string, string> m;
	m["���"] = "����";
	m["����"] = "���� ����";
	m["����"] = "����";

	//������ ��ü ���
	map<string, string>::iterator iter;
	for (iter = m.begin(); iter != m.end(); iter++) {
		cout << iter->first << " " << iter->second << endl;
	}
	cout << endl;

	//��� key ���� ���� ������ ����
	m.erase("���");

	//���� �� ������ ��ü ���
	for (iter = m.begin(); iter != m.end(); iter++) {
		cout << iter->first << " " << iter->second << endl;
	}
	cout << endl;

	return 0;
}