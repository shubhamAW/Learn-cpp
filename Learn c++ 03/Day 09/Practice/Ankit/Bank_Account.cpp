#include<iostream>
#define N 50

struct Account {
	bool m_active;
	int m_ac;
	double m_bal;
};

void newacc(Account details[N]);
void addmoney(Account details[N]);
void withdraw(Account details[N]);
void transfer(Account details[N]);
void close(Account details[N]);
void report(Account details[N]);
void settings(Account details[N]);
void print(Account details[N], int z);

int main() {
	int n;
	Account details[N] = { 0 };

	do {
		std::cout << "\n\nPlease Select an option:\n1 Open new account\n2 Deposit Money\n3 Withdraw Money\n4 Transfer Money\n5 Close Account\n6 Report\n7 Settings\n8 Exit" << std::endl;
		std::cin >> n;

		switch (n) {
		case (1):
			newacc(details);
			break;
		case (2):
			addmoney(details);
			break;
		case (3):
			withdraw(details);
			break;
		case (4):
			transfer(details);
			break;
		case (5):
			close(details);
			break;
		case (6):
			report(details);
			break;
		case (7):
			settings(details);
			break;
		case (8):
			break;
		default:
			std::cout << "Invalid selection\n\nPlease Select an option:\n1 Open new account\n2 Deposit Money\n3 Withdraw Money\n4 Transfer Money\n5 Close Account\n6 Report\n7 Settings\n8 EOD calculation\n9 Exit" << std::endl;
			std::cin >> n;
		}
	} while (n != 8);
}

void print(Account details[N], int z) {
	z--;
	std::cout << "Your A/C No.: " << details[z].m_ac << std::endl;
	if (details[z].m_active == true)
		std::cout << "Account Status: Active" << std::endl;
	else
		std::cout << "Account Status: Inactive" << std::endl;
	std::cout << "Your Balance: " << details[z].m_bal << std::endl;
}

void newacc(Account details[N]) {
	int i = 0;
	for (i = 0; i < N;) {
		if (details[i].m_ac == 0) {
			details[i].m_ac = i + 1;
			break;
		}
		else
			i++;
	}
	details[i].m_active = true;
	std::cout << "Your Account is created.\nYour A/C No. : " << details[i].m_ac << "\nEnter amount deposited:" << std::endl;
	std::cin >> details[i].m_bal;
	print(details, i+1);
}

void addmoney(Account details[N]) {
	int i;
	double n;
	std::cout << "Please Enter Your A/C No.: ";
	std::cin >> i;
	std::cout << "Please Enter the amount deposited: ";
	std::cin >> n;

	if (details[i - 1].m_active == true) {
		details[i - 1].m_bal = details[i - 1].m_bal + n;
	}

	else
		std::cout << "Your Account is currently inactive.\n" << std::endl;
	print(details, i);
}

void withdraw(Account details[N]) {
	int i;
	double n;
	std::cout << "Please Enter Your A/C No.: ";
	std::cin >> i;
	std::cout << "Please Enter the amount withdrawn: ";
	std::cin >> n;

	if (details[i - 1].m_active == true) {
		details[i - 1].m_bal = details[i - 1].m_bal - n;
	}

	else
		std::cout << "Your Account is currently inactive.\nPlease try again." << std::endl;
	print(details, i);
}

void transfer(Account details[N]) {
	int i, j;
	double n;
	std::cout << "Please Enter Your A/C No.: ";
	std::cin >> i;
	std::cout << "Please Enter the destination A/C No. : ";
	std::cin >> j;
	std::cout << "Please Enter the amount to be transferred: ";
	std::cin >> n;

	if (details[i - 1].m_active == true && details[j - 1].m_active == true) {
		details[i - 1].m_bal = details[i - 1].m_bal - n;
		details[j - 1].m_bal = details[j - 1].m_bal + n;
	}

	else
		std::cout << "Your Account is currently inactive.\nPlease try again." << std::endl;
	print(details, i);
	print(details, j);
}

void close(Account details[N]) {
	int i = 0;
	std::cout << "Please Enter Your A/C No.: ";
	std::cin >> i;
	details[i - 1].m_active == false;
	print(details, i);
}

void report(Account details[N]) {
	int i;
	std::cout << "Please Enter Your A/C No.: ";
	std::cin >> i;
	print(details, i);
}

void settings(Account details[N]) {
	int i = 0;
	for (i; details[i].m_ac != 0; i++) {
		if (details[i].m_active == true && details[i].m_bal < 500)
			details[i].m_bal = details[i].m_bal - 0.05*details[i].m_bal;
		print(details, i + 1);
	}
}

