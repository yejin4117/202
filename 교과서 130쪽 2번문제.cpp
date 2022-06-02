#include <iostream>
#include <string.h>

using namespace std;

class CBank {
private:
	string name;
	string account;
	int balance;

public:
	CBank(void);
	CBank(string name, string account, int balance);
	string get();
	string accountnumber();
	int inquiry();

	int deposit(int money);
	
};

CBank::CBank() {
	name = " "; account = " "; balance = 0;
}

CBank::CBank(string n, string m, int a) {
	name = n, account = m, balance = a;
}

int CBank::deposit(int money) {
	balance += money;
	return money;
}

string CBank::get() {
	return name;
}

string CBank::accountnumber() {
	return account;
}

int CBank::inquiry() {
	return balance;
}

int main() {
	CBank bank("이예진님", "1234-12-1234567", 10000);
	bank.deposit(12000);
	cout << bank.get() << "의 계좌 : " << bank.accountnumber() << endl;
	cout << bank.get() <<"의 입금 금액 : " << bank.inquiry() << endl;

	return 0;
}
