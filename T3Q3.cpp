//Ng Kwan Ho
//21090099A
//T3Q3

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
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