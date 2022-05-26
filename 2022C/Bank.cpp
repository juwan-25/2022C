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
	cout << input << "원을 입금했습니다."<< endl;
	cout <<name<<"님의 "<<account<<" 계좌 잔액은 " << balance << "입니다." << endl;
}

int main()
{
	cBank bank = cBank("이주완", "110-3232", 200000);

	bank.transfer(3000);
	return 0;
}
