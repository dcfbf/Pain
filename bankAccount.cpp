#include <bits/stdc++.h>
using namespace std;

class bankAccount{
	public:
		double _balance;
		bankAccount(double balance);
		double viewBalance() const;
};

class authorizedUser : public bankAccount{
	public:
		void deposit(double value);
		void withdraw(double value);
		authorizedUser(double balance);
};

bankAccount::bankAccount(double balance) : _balance(balance){};

authorizedUser::authorizedUser(double balance) : bankAccount(balance){};

double bankAccount::viewBalance() const{
	return _balance;
}

void authorizedUser::deposit(double value){
	_balance += value;
	cout << "New Balance: " << _balance << "\n";
}

void authorizedUser::withdraw(double value){
	_balance -= value;
	cout << "New Balance: " << _balance << "\n";
}

int main(){
	double a;
	cout << "Starting balance? \n";
	cin >> a;
	authorizedUser account(a);
	cout << account.viewBalance() << "\n";
	account.deposit(10000);
	account.withdraw(4300.22);
}
