#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
void Q1()
{
	int x, y;
	cout << "Input x: ";
	cin >> x;
	cout << "Input y: ";
	cin >> y;
	if (y % x == 0) {
		cout << x << " is a factor of " << y ;
	}
	else {
		cout << x << " is not a factor of " << y  ;
	
	}

}

void Q2()
{
	int year;
	cout << "Input a year: ";
	cin >> year;
	if (year % 4 == 0  && year % 100 != 0 || year % 400 == 0) {
		cout << "Is " << year << " a leap year ? Yes";
	}
	else {
		cout << "Is " << year << " a leap year? No";

	}

}

void Q3()
{
	int p, c;
	cout << "What is the principal value ? ";
	cin >> p;
	cout << "Please enter the customer type : ";
	cin >> c;
	switch (c) {
	case 0: cout << "interest payable after one year : $" << p * .005; break;
	case 1: cout << "interest payable after one year : $" << p * .008; break;
	case 2: cout << "interest payable after one year : $" << p * .01; break;
	case 3: cout << "interest payable after one year : $" << p * .012; break;
	case 4: cout << "interest payable after one year : $" << p * .02; break;
	default: cout << "Interest payable after one year: Error in customer type" << endl;
	}

}

void Q4()
{
	int main() {
	int d, m, y;
	cout << "Input day month year: ";
	cin >> d >> m >> y;
	if (y > 0) {
		if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && d > 0 && d < 32)
			cout << d << "-" << m << "-" << y << " is correct";
		else if ((m == 4 || m == 6 || m == 9 || m == 11) && d > 0 && d < 31)
				cout << d << "-" << m << "-" << y << " is correct";
			else if (m == 2) {
					if ((y % 400 == 0 || (y % 100 != 0 && y % 4 == 0)) && d > 0 && d <= 29)
						cout << d << "-" << m << "-" << y << " is correct";
					else if (d > 0 && d <= 28)
						cout << d << "-" << m << "-" << y << " is correct";
					else
						cout << d << "-" << m << "-" << y << " is incorrect";
				}
				else
					cout << d << "-" << m << "-" << y << " is incorrect";
	}
	else
		cout << d << "-" << m << "-" << y << " is incorrect";
}


}
int main()
{
	char prog_choice;

	do {
		cout << "\n\n";
		cout << "Program Selection Menu" << endl;
		cout << "---------------------------------------" << endl;
		cout << "Enter question number ('q' to quit): ";
		cin >> prog_choice;
		cout << "\n\n";

		switch (prog_choice) {
		case '1': Q1(); break;
		case '2': Q2(); break;
		case '3': Q3(); break;
		case '4': Q4(); break;
		case 'q': break;
		default:
			cout << "No such question " << prog_choice << endl;
			break;
		}
	} while (prog_choice != 'q');

	cout << "Program terminates. Good bye!" << endl;
	return 0;
}