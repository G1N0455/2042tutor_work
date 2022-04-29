#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
void showInfo(){}
void Q1(){
		int num =(rand()%99)+1, x;
		cout << "I have a number between 1 and 100.";
		cout << "Can you guess my number?" << endl;
		do {
			cout << "Guess : ";
			cin >> x;
			if (x < num) {
				cout << "Too low. Try again."<<endl;
			}
			if (x > num) {
				cout << "Too high. Try again."<<endl;		
			}
		} while (x != num); 
			cout << "Excellent! Correct guess.";
}
void Q3() {
	int n,m=1 ;
	cout << "n= ";
	cin >> n;
	for (int i = n; i >= 1; i--) {
		m *= i;
		
	}
	cout << "n="<<m ;
}
void Q4(){
    int a, b, small, large, sum=0;
	cout << "Please input value A:";
	cin >> a;
	cout << "Please input value B:";
	cin >> b;
	if (a < b) {
		small = a; large = b;
	}
	else large = a; small = b;
	for (int i = small; i <= large; i++) {
		if (i % 2 != 0) sum += i;
	}
	cout << "n=" << sum;
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
		case '0': showInfo(); break;
		case '1': Q1(); break;
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