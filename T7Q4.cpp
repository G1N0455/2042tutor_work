#include <iostream>
#include <iomanip>
using namespace std;

// (a) Implementation of class Account should be inserted here
class Account {
public:
	Account(double b) {
		balance = b;
	}
	void credit(double amount) {
		balance += amount;
	}
	void debit(double amount) {
		balance -= amount;
	}
	double getBalance() {
		// cout << "Balance: " << balance << endl;
		return balance;
	}
private:
	double balance;
};

// Transfer money from a1 to a2, why pass-by-reference?
void transfer(Account& a1, Account& a2) {
	// (b) code for function body should be inserted here
	cout << "How much do you want to transfer?" << endl;
	double a;
	cin >> a;
	if (a1.getBalance() >= a) {
		a1.debit(a);
		a2.credit(a);
		cout << "Transfer completed." << endl;
	}
	else {
		cout << "Insufficient balance." << endl;
	}
}
int main() {
	Account peter(1000), mary(1500);
	int option;

	cout << fixed << setprecision(2);   // 2 decimal places

	do {
		cout << "\n";
		cout << "Peter's balance: " << peter.getBalance() << endl;
		cout << "Mary's balance:  " << mary.getBalance() << endl;
		cout << "------\n";
		cout << "(1) Transfer money from Peter to Mary\n";
		cout << "(2) Transfer money from Mary to Peter\n";
		cout << "(3) Quit\n";
		cout << "Option: ";
		cin >> option;

		switch (option) {
		case 1: transfer(peter, mary); break;
		case 2: transfer(mary, peter); break;
		case 3: cout << "Bye Bye.\n"; break;
		default: cout << "Incorrect option.\n";
		}
	} while (option != 3);

	return 0;
}