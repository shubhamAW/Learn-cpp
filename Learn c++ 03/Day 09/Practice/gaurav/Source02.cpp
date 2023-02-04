#include<iostream>
using namespace std;


struct Account {
	int m_accountno;
	double m_balance;
	bool active;
};

void newAccount(int &m_accountno, double &m_balance, bool &x) {
	static int c = 1001;
	m_accountno = c++;
	m_balance = 0;
	x = 1;
	cout << "Account created successfully\n";
}

void depositeMoney(int &m_accountno, double &m_balance, bool &x) {
	if (x == 1) {
		double balance;
		cout << "Enter money to deposite\n";
		cin >> balance;
		m_balance += balance;
		cout << "Money Deposited successfully\n";
	}
	else
		cout << "Account is inactive\n";
}

void withdrawMoney(int &m_accountno, double &m_balance, bool &x) {
	if (x == 1) {
		int withdraw;
		cout << "Enter money to withdraw\n";
		cin >> withdraw;
		m_balance -= withdraw;
		cout << "Money Withdrawn successfully\n";
	}
	else
		cout << "Account is inactive\n";
}
void report(Account *ptr, int c) {
	cout << endl << endl;
	cout << "Account no." << "             " << "Balance" << endl << endl;
	for (int i = 0; i < c; i++) {
		cout << ptr[i].m_accountno << "                     " << ptr[i].m_balance << endl;
	}
}
void closeAccount(int &m_accountno, double &m_balance, bool &x) {
	m_balance = 0;
	x = 0;
	cout << "Account has been closed successfully\n";
}
void settings(double &minbalance,int &interest) {

	cout << "Set minimum balance\n";
	cin >> minbalance;
	cout << "Set Interest rate\n";
	cin >> interest;
}

void eodCalculation(Account *ptr, int c, double &minbalance, int &interest) {
	for (int i = 1; i <= c; i++) {
		if (ptr[i].active != 0) {
			if (ptr[i].m_balance < minbalance) {
				ptr[i].m_balance -= (ptr[i].m_balance*(interest / (100.00*365.00)));
			}
		}
	}
	cout << "EOD Calculation has been done successfully\n";
}

void transferMoney(Account *ptr) {
	int acc1, acc2, j, k;
	double mon;
	cout << "Enter account number\n";
	cin >> acc1;
	for (int i = 0; i < 10; i++) {
		if (ptr[i].m_accountno == acc1) {
			j = i;
			break;
		}
	}
	cout << "Enter money to transfer\n";
	cin >> mon;
	cout << "Enter account number to transfer money\n";
	cin >> acc2;
	for (int i = 0; i < 10; i++) {
		if (ptr[i].m_accountno == acc2) {
			k = i;
			break;
		}
	}
	if (ptr[j].active == false || ptr[k].active == false) {
		cout << "Account is inactive\n";
		return;
	}

	ptr[j].m_balance -= mon;
	ptr[k].m_balance += mon;
	cout << "Money successfully transfered\n";
}

int main() {
	Account a[10];
	double minbalance = 500.00;
	int interest = 8;
	int i = 0, k;
	char ch;
	int acc;
	do {
		cout << "       Main Menu                \n";
		cout << "       1.Create new account     \n";
		cout << "       2.Modify existing account   \n\n";
		cout << "       Enter your options        \n";
		cin >> k;
		switch (k)
		{
		case 1: { newAccount(a[i].m_accountno, a[i].m_balance, a[i].active);
			i++;
			break;
		}
		case 2:
		{
			cout << "       1.Deposite Money          \n";
			cout << "       2.Withdraw Money          \n";
			cout << "       3.Print Report            \n";
			cout << "       4.Close Account           \n";
			cout << "       5.Settings                \n";
			cout << "       6.Transfer Money           \n";
			cout << "       7.EOD Calculation         \n\n";
			cout << "       Enter your options         \n";
			cin >> k;


			switch (k) {
			case 1:
			{cout << "Enter account number\n";
			cin >> acc;
			for (int i = 0; i < 10; i++)
				if (a[i].m_accountno == acc)
					depositeMoney(a[i].m_accountno, a[i].m_balance, a[i].active);
			break;
			}
			case 2:
			{ cout << "Enter account number\n";
			cin >> acc;
			for (int i = 0; i < 10; i++)
				if (a[i].m_accountno == acc)
					withdrawMoney(a[i].m_accountno, a[i].m_balance, a[i].active);
			break;
			}
			case 3: {
				report(a, i);
				break;
			}
			case 4: {
				cout << "Enter account number\n";
				cin >> acc;
				for (int i = 0; i < 10; i++)
					if (a[i].m_accountno == acc)
						closeAccount(a[i].m_accountno, a[i].m_balance, a[i].active);
				break;
			}
			case 5: {
				settings(minbalance,interest);
				break;
			}
			case 6: {
				transferMoney(a);
				break;
			}
			case 7: {
				eodCalculation(a, i, minbalance, interest);
				break;
			}


			}

		}
		}

		cout << "Enter y to continue\n";
		cin >> ch;
	} while (ch == 'y');
}