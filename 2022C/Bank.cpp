#include <iostream>	
#include <string.h>	

using namespace std;

class cBank {
private :
	string name;
	string account;
	int balance;
public :
	cBank();
	cBank(string name, string account, int balance);
	void transfer(int input);
};

cBank::cBank() {}

cBank:: cBank(string name, string account, int balance)
	:balance(balance), name(name), account(account) {}

void cBank::transfer(int input)
{
	balance += input;
	cout << input << "���� �Ա��߽��ϴ�."<< endl;
	cout <<name<<"���� "<<account<<" ���� �ܾ��� " << balance << "�Դϴ�." << endl;
}

int main()
{
	cBank bank = cBank("���ֿ�", "110-3232", 200000);

	bank.transfer(3000);
	return 0;
}
