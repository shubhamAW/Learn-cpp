#include<iostream>
#include<conio.h>
# define N 10
struct Account {
	bool m_active = 0;
	int m_accountNo = 0;
	double m_balance = 0.0;
};
Account bank_accounts[N];

struct Settings {

	double m_minBal;
	int m_iRate;

	void setSettings(double amt, int rate) {
		m_minBal = amt;
		m_iRate = rate;
	}

	void getSettings() {
		std::cout << " Min Balance  = " << m_minBal << "  Rate = " << m_iRate << std::endl;
	}
};

void open(double balance) {
	static int accountNo = 0;
	int i = 0;
	while (bank_accounts[i].m_active)
		i++;
	bank_accounts[i].m_active = 1;
	bank_accounts[i].m_accountNo = accountNo;
	bank_accounts[i].m_balance = balance;
	accountNo++;
}

void deposit (int accNo, double amt) {
	for (int i = 0; i < N; i++) {
		if (bank_accounts[i].m_accountNo == accNo) {
			bank_accounts[i].m_balance += amt;
			return;
		}
	}
	std::cout << "Enter valid account number" << std::endl;
	return;
}

void withdraw (int accNo, double amt) {
	for (int i = 0; i < N; i++) {
		if (bank_accounts[i].m_accountNo == accNo) {
			bank_accounts[i].m_balance -= amt;
			return;
		}
	}
	std::cout << "Enter valid account number" << std::endl;
	return;
}

void transfer(int accf, int aact, double amt) {
	for (int i = 0; i < N; i++) {
		if (bank_accounts[i].m_accountNo == accf) {
			bank_accounts[i].m_balance -= amt;
		}
		if (bank_accounts[i].m_accountNo == aact) {
			bank_accounts[i].m_balance += amt;
		}
	}
	return;
}

void close(int accNo) {
	for (int i = 0; i < N; i++) {
		if (bank_accounts[i].m_accountNo == accNo) {
			bank_accounts[i].m_active = 0;
			return;
		}
	}
	std::cout << "Enter valid account number" << std::endl;
	return;
}

void EODCal(Settings*S) {

	for (int i = 0; i < N; i++) {
		if (bank_accounts[i].m_active == true)
		{
			double amt = bank_accounts[i].m_balance - S->m_minBal;
			if (amt < 0) {
				bank_accounts[i].m_balance -= (-amt)*((S->m_iRate / 365.0) / 100.0);
			}
		}
	}
}

void report() {
	for (int i = 0; i < N; i++) {
		if (bank_accounts[i].m_active) {
			std::cout << "Account no = " << bank_accounts[i].m_accountNo << "  balance =  " <<
				bank_accounts[i].m_balance << std::endl;
		}
	}
}
int main() {

	open(600.0);
	open(800.0);
	open(1000.0);
	//report();
	deposit(2, 500.0);
	deposit(5, 200.0);
	//report();
	withdraw(2, 700);
	//report();
	transfer(0, 1, 200.0);
	//report();
	close(2);
	//report();
	open(1000.0);
	//report();
	Settings S;
	S.setSettings(200.0, 10);
	S.getSettings();
	withdraw(0, 300);
	EODCal(&S);
	report();
	
	_getch();
}