#include<iostream>

struct Account
{
	int m_accountNo;
	double m_balance;
	bool m_active;
};

struct Settings
{
	int m_count;
	int m_prevAccntNo;
	Account a[50];
	double m_minBalance;
	double m_iRate;
	int m_flag;
};

Settings s = { 0, 1000,{ 0 }, 0, 0, 1 };

void openAccount(Settings *ps);
void depositMoney(Settings *ps);
void withdrawMoney(Settings *ps);
void transferMoney(Settings *ps);
void closeAccount(Settings *ps);
void report(Settings *ps);
void systemSetting(Settings *ps);
void eodCalculator(Settings *ps);
void exit(Settings *ps);

int main()
{
	int user_option;
	while (s.m_flag == 1)
	{
		std::cout << "Enter the option you want to work with: " << std::endl;
		std::cout << " 1. Open new account" << std::endl;
		std::cout << " 2. Deposit money" << std::endl;
		std::cout << " 3. Withdraw money" << std::endl;
		std::cout << " 4. Transfer money" << std::endl;
		std::cout << " 5. Close account" << std::endl;
		std::cout << " 6. Report" << std::endl;
		std::cout << " 7. Setting" << std::endl;
		std::cout << " 8. EOD Calculator" << std::endl;
		std::cout << " 9. Exit" << std::endl;

		std::cin >> user_option;

		switch (user_option)
		{
		case 1: openAccount(&s);
			break;
		case 2: depositMoney(&s);
			break;
		case 3: withdrawMoney(&s);
			break;
		case 4: transferMoney(&s);
			break;
		case 5: closeAccount(&s);
			break;
		case 6: report(&s);
			break;
		case 7: systemSetting(&s);
			break;
		case 8: eodCalculator(&s);
			break;
		case 9: exit(&s);
			break;
		default: std::cout << "Invalid Choice!" << std::endl;
		}
	}

}

void openAccount(Settings *ps)
{
	ps->a[ps->m_count].m_active = true;
	if (ps->m_count == 0)
		ps->a[ps->m_count].m_accountNo = 1000;
	else
		ps->a[ps->m_count].m_accountNo = ps->m_prevAccntNo + 1;

	ps->m_prevAccntNo = ps->a[ps->m_count].m_accountNo;
	std::cout << "Enter the balance you want to deposit in the new account(minimum 1000!)." << std::endl;
	std::cin >> ps->a[ps->m_count].m_balance;
	++ps->m_count;
	std::cout << "New account is created successfully!" << std::endl;
}

void depositMoney(Settings *ps)
{
	int tempAccntNo, i;
	double dMoney;
	std::cout << "Enter the account number in which you want to deposit the money." << std::endl;
	std::cin >> tempAccntNo;

	for (i = 0; i <= ps->m_count; i++)
	{
		if (ps->a[i].m_accountNo == tempAccntNo)
			break;
	}
	if (ps->a[i].m_active == true)
	{
		std::cout << "Enter the amount you want to deposit in this account." << std::endl;
		std::cin >> dMoney;
		ps->a[i].m_balance = ps->a[i].m_balance + dMoney;
	}
	else
		std::cout << "The entered account is inactive!"<<std::endl;


}

void withdrawMoney(Settings *ps)
{

	int tempAccntNo, i;
	double wMoney, check;
	std::cout << "Enter the account number from which you want to withdraw money.(Minimum balance should be 1000!)"
		<< std::endl;
	std::cin >> tempAccntNo;

	for (i = 0; i <= ps->m_count; i++)
	{
		if (ps->a[i].m_accountNo == tempAccntNo)
			break;
	}

	if (ps->a[i].m_active == true)
	{
		std::cout << "Enter the amount you want to withdraw from this account." << std::endl;
		std::cin >> wMoney;

		check = ps->a[i].m_balance - wMoney;

		if (check < 0)
			std::cout << "You do not have enough balance to withdraw this amount." << std::endl;

		else
		{
			char ch = 'y';
			if (check > 0 && check < ps->m_minBalance)
			{
				std::cout << "After this withdrawl, the account balance will be less than 1000. Do you still want to continue?(y/n)" << std::endl;
				std::cin >> ch;
			}
			if (ch == 'y' || ch == 'Y')
			{
				ps->a[i].m_balance = ps->a[i].m_balance - wMoney;
			}
			else
			{
				std::cout << "Withdrawl process aborted!" << std::endl;
				return;
			}
		}

	}
	else
		std::cout << "The entered account is inactive!"<<std::endl;

}

void transferMoney(Settings *ps)
{
	int tempAccntNo1, tempAccntNo2, i, j;
	double tMoney, check;

	std::cout << "Enter the account from which you want to transfer the money to another account." << std::endl;
	std::cin >> tempAccntNo1;

	for (i = 0; i <= ps->m_count; i++)
	{
		if (ps->a[i].m_accountNo == tempAccntNo1)
			break;
	}
	if (ps->a[i].m_active == true)
	{
		if (ps->a[i].m_balance < ps->m_minBalance)
		{
			std::cout << "Current balance in this account is less than minimum balance of " << ps->m_minBalance
				<< ", hence you cannot transfer money." << std::endl;
		}
		else
		{
			std::cout << "Enter the amount of money you want to transfer." << std::endl;
			std::cin >> tMoney;

			check = ps->a[i].m_balance - tMoney;

			if (check < 0)
				std::cout << "There is not enough balance to transfer this amount from this account." << std::endl;
			else
			{
				char ch = 'y';
				if (check > 0 && check < ps->m_minBalance)
				{
					std::cout << "After this transfer, the account balance will be less than "
						<< ps->m_minBalance << ". Do you still want to continue?(y/n)" << std::endl;
					std::cin >> ch;
				}
				if (ch == 'y' || ch == 'Y')
				{
					std::cout << "Enter the account to which you want to trasfer the money." << std::endl;
					std::cin >> tempAccntNo2;

					for (j = 0; j <= ps->m_count; j++)
					{
						if (ps->a[j].m_accountNo == tempAccntNo2)
							break;
					}
					if (ps->a[j].m_active == true)
					{
						ps->a[i].m_balance = ps->a[i].m_balance - tMoney;
						ps->a[j].m_balance = ps->a[j].m_balance + tMoney;
					}
					else
						std::cout << "The entered account is inactive!";
				}
				else
				{
					std::cout << "Transfer process aborted!" << std::endl;
					return;
				}

			}
		}
	}
	else
		std::cout << "The entered account is inactive!" << std::endl;

}

void closeAccount(Settings *ps)
{
	int tempAccntNo, i, ch;

	std::cout << "Enter the account number you want to close." << std::endl;
	std::cin >> tempAccntNo;

	for (i = 0; i <= ps->m_count; i++)
	{
		if (ps->a[i].m_accountNo == tempAccntNo)
			break;
	}

	if (ps->a[i].m_active == true)
	{
		if (ps->a[i].m_balance == 0)
		{
			ps->a[i].m_active = false;
		}
		else
		{
			std::cout << "There is balance in your account. Please withdraw it to close the account" << std::endl;
			std::cout << "1. Withdraw remaining balance." << std::endl;
			std::cout << "2. Quit the process of closing account." << std::endl;
			std::cin >> ch;
			if (ch == 1)
			{
				withdrawMoney(&s);
				ps->a[i].m_active = false;
				std::cout << "Account has been closed successfully!" << std::endl;
			}
			else
			{
				std::cout << "Account closing process aborted!" << std::endl;
				return;
			}
		}
	}
	else
		std::cout << "The entered account is already closed!"<<std::endl;

}

void report(Settings *ps)
{
	std::cout << "Follwing are the account details." << std::endl;
	std::cout << "Account Number   Balance" << std::endl;
	for (int i = 0; i <= ps->m_count; i++)
	{
		if (ps->a[i].m_active == true)
			std::cout << ps->a[i].m_accountNo << "             " << ps->a[i].m_balance << std::endl;
	}
}

void systemSetting(Settings *ps)
{
	double tempMinBal, tempIrate;
	std::cout << "Enter the amount that should be set as minimum balance." << std::endl;
	std::cin >> tempMinBal;
	ps->m_minBalance = tempMinBal;

	std::cout << "Enter the interest rate to be set." << std::endl;
	std::cin >> tempIrate;
	ps->m_iRate = tempIrate;
}

void eodCalculator(Settings *ps)
{
	for (int i = 0; i <= ps->m_count; i++)
	{
		if (ps->a[i].m_active == true)
		{
			if (ps->a[i].m_balance < ps->m_minBalance)
			{
				double intAmnt = ps->m_minBalance - ps->a[i].m_balance;
				double dedAmnt = intAmnt * ((ps->m_iRate / 365) / 100);
				ps->a[i].m_balance = ps->a[i].m_balance - dedAmnt;
			}
		}
	}
	std::cout << "EOD calculations done succesffuly for every active accounts" << std::endl;
}

void exit(Settings *ps)
{
	ps->m_flag = 0;
}
