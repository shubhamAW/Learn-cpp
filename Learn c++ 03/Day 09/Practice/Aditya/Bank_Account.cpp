#include<iostream>
#define N 40
struct Account {
	bool acc_active;
	double acc_balance;
	int acc_number;
}a[N];
static int accounts;
struct Settings {
	double min_balance;
	float interest;
};

void open_acc(double min)
{

	std::cout << "\n\nEnter Amount for opening balance (Amount should be greater than or equal to : " << min << ") : ";
	char i = 0;
	while (a[accounts].acc_balance < min)
	{
		std::cin >> a[accounts].acc_balance;
		if (a[accounts].acc_balance < min) {
			
				std::cout << "\n Account not created as expected minimum amount is not deposited!";
				return;
			
		}
	}
	a[accounts].acc_active = true;
	a[accounts].acc_number = 10101000 + accounts;
	std::cout << "\n\nAccount successfully created \n Account No : " << a[accounts].acc_number << "\nBalance : " << a[accounts].acc_balance;
	accounts++;
}

void deposit()
{
	std::cout << "\nPlease Enter account number you want to Deposit money into :";
	int tacc;
	std::cin >> tacc;


	double tamt = 0;
	if ((tacc % 10101000) >= 0 && (tacc % 10101000) <= N && a[tacc % 10101000].acc_active) {
		std::cout << "\nPlease Enter amount you want to deposit :";
		std::cin >> tamt;
		if (tamt > 0)
			a[(tacc % 10101000)].acc_balance += tamt;
		else
			std::cout << "\nTransaction Failed!! : amount cannot be less than or equal to zero ";

	}
	else
		std::cout << "\nTransaction Failed!! : Invalid Account number ";

}

void withdraw()
{
	std::cout << "\nPlease Enter account number you want to Withdraw money from :";
	int tacc;
	std::cin >> tacc;


	double tamt = 0;
	if ((tacc % 10101000) >= 0 && (tacc % 10101000) <= N && a[tacc % 10101000].acc_active) {
		std::cout << "\nPlease Enter amount you want to Withdraw :";
		std::cin >> tamt;
		if (tamt > 0)
		{
			if ((a[(tacc % 10101000)].acc_balance - tamt) < 0)
				std::cout << "Transaction Failed ! : Insufficient funds";
			else
				a[(tacc % 10101000)].acc_balance -= tamt;
		}
		else
			std::cout << "\nTransaction Failed!! : amount cannot be less than or equal to zero ";

	}
	else
		std::cout << "\nTransaction Failed!! : Invalid Account number ";

}

void transfer()
{
	std::cout << "\nPlease Enter account number you want to transfer money from :";
	int taccf;
	std::cin >> taccf;


	double tamt = 0;
	if ((taccf % 10101000) >= 0 && (taccf % 10101000) <= N && a[taccf % 10101000].acc_active) {
		std::cout << "\nPlease Enter account number you want to transfer money To :";
		int tacct;
		std::cin >> tacct;
		if ((tacct % 10101000) >= 0 && (tacct % 10101000) <= N && a[tacct % 10101000].acc_active) {
			std::cout << "\nPlease Enter amount you want to Transfer :";
			std::cin >> tamt;
			if (tamt > 0)
			{
				if ((a[(tacct % 10101000)].acc_balance - tamt) < 0)
					std::cout << "Transaction Failed ! : Insufficient funds";
				else
				{
					a[(taccf % 10101000)].acc_balance -= tamt;
					a[(tacct % 10101000)].acc_balance += tamt;
				}

			}
			else
				std::cout << "\nTransaction Failed!! : amount cannot be less than or equal to zero ";

		}
		else
			std::cout << "\nTransaction Failed!! : Invalid Account number ";
	}
	else
		std::cout << "\nTransaction Failed!! : Invalid Account number ";

}

void close()
{
	std::cout << "\nPlease Enter account number you want to Close:";
	int tacc;
	std::cin >> tacc;
	if ((tacc % 10101000) >= 0 && (tacc % 10101000) <= N && a[tacc % 10101000].acc_active) {
		std::cout << "Are you sure you want to close your Account? Y/N";
		char i;
		std::cin >> i;
		if (i == 'y' || i == 'Y')
		{
			a[(tacc % 10101000)].acc_active = false;
			std::cout << "\nAccount Closed Successfully";
		}
		else
			std::cout << "\nTransaction cancelled";
		
	}
	else
		std::cout << "\nTransaction Failed ! : Invalid Account number ";

	
}

void Report(double min)
{
	std::cout << "************************************************************** REPORT **************************************************************";
	std::cout << "\n\n\nMINIMUM BALANCE : " << min;
	std::cout << "\n\n\n************************************************************** Account Details **************************************************************";
	std::cout << "\n\nAccount Number \t\t Balance";
	for (int i = 0; i < accounts; i++)
	{
		if (a[i].acc_active)
			std::cout << "\n" << a[i].acc_number << "\t\t\t" << a[i].acc_balance;
	}
}


void ch_minBal(Settings *tset)
{
	std::cout << "Please Enter new minimum balance you want to set:";
	double min;
	std::cin >> min;
	if (min >= 0)
	{
		char ch = 0;
		std::cout << "Are you sure you want to change minimum Balance from  " << tset->min_balance << " to " << min << " ? Y/N";
		std::cin >> ch;
		if (ch == 'y' || ch == 'Y')
		{
			tset->min_balance = min;
			std::cout << "Minimum balace changed successfully!!";
		}
		else
			std::cout << "transaction Cancelled";
	}
}

void ch_interest(Settings *tset)
{
	std::cout << "Please Enter new Interest Rate you want to set:";
	float intr;
	std::cin >> intr;
	if (intr >= 0)
	{
		char ch = 0;
		std::cout << "\nAre you sure you want to change Interest Rate from  " << tset->interest << " to " << intr << " ? Y/N";
		
		std::cin >> ch;
		if (ch == 'y' || ch == 'Y')
		{
			tset->interest = intr;
			std::cout << "\nInterest Rate changed successfully!!";
		}
		else
			std::cout << "\nTransaction Cancelled!";
	}
}
void settings(Settings *tset)
{
	Settings *ts = tset;
	int ch = 0;

	while (ch != 3)
	{
		std::cout << "\n\n\n1:Minimum Balance\n2:Interest Rate \n3:exit\n\n Select what you want to change : ";
		std::cin >> ch;
		switch (ch)
		{
		case 1:ch_minBal(ts); break;
		case 2:ch_interest(ts); break;
		default:std::cout << "please select the correct choice:";
		}
	}
}
void EOD_cal(Settings *tset)
{
	std::cout << "\n\n\n**********************************************************EOD Calculation**********************************************************";
	std::cout << "\n\nAccount Number \t\t Balance";
	for (int i = 0; i < accounts; i++)
	{
		if (a[i].acc_balance < tset->min_balance && a[i].acc_active)
		{
			a[i].acc_balance = a[i].acc_balance-((tset->min_balance / 100) * (tset->interest / 365));
		}
		std::cout << "\n" << a[i].acc_number << "\t\t\t" << a[i].acc_balance;
	}
}
void main() {
	Settings set;
	set.interest = 12.0;
	set.min_balance = 500;
	int ch = 0;
	while (ch != 9)
	{
		std::cout << "\n\n\n1:Open new account";
		std::cout << "\n2:Deposit Money";
		std::cout << "\n3:Withdraw Money";
		std::cout << "\n4:Transfer Money";
		std::cout << "\n5:close account";
		std::cout << "\n6:Report";
		std::cout << "\n7:settings";
		std::cout << "\n8:EOD calculation";
		std::cout << "\n9:Exit\n\nEnter your Choice : ";
		std::cin >> ch;
		if (ch != 9)
		{
			switch (ch)
			{
			case 1:open_acc(set.min_balance); break;
			case 2:deposit(); break;
			case 3:withdraw(); break;
			case 4:transfer(); break;
			case 5:close(); break;
			case 6:Report(set.min_balance); break;
			case 7:settings(&set); break;
			case 8:EOD_cal(&set); break;
			default:std::cout << "Invalid Choice Please Enter the correct choice :";
			}
		}
		else
		{
			break;
		}
	}

}