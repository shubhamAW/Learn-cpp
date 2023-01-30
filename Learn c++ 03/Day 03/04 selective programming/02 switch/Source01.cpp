#include <iostream>
using namespace std;

int main() {
	double a = 0;
	cout << "Enter first number: ";
	cin >> a;

	double b = 0;
	cout << "Enter second number: ";
	cin >> b;

	char op;
	cout << "Enter operator [+ - * /]: ";
	cin >> op;

	double result = 0.0;

	switch (op) {
	case '+':
		result = a + b;
		cout << "result = " << result << endl;
		break;
	case '-':
		result = a - b;
		cout << "result = " << result << endl;
		break;
	case '*':
	case 'x':
	case 'X':
		result = a * b;
		cout << "result = " << result << endl;
		break;
	case '/':
		result = static_cast<double>(a) / b;
		cout << "result = " << result << endl;
		break;
	default:
		cout << "Invalid operator." << endl;
	}
}

/*
- Switch variable can be int, char, wchar_t, bool or enum type.
  It cannot be float or double typed.
- A fallthrough happens when case is not terminated with break or return.
- default can be placed anywhere within switch ... case block.
  If placed at the beginning or in between then it has to be terminated with break or return.
- Good practice is to place default block at the end of switch case block.
  In that case no break or return statement is required.
- If no case matches with switch variable then default block is executed.
  If matching case exist then default is not executed irrespective of its position.
- Note default is optional.
- Only one matching case or default is executed. After which control exits the switch...case.
- In some instances, cases are likely to be terminated with return statement.
*/

