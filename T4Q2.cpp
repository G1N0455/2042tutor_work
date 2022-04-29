#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
	int input, count = 0;
	double total = 0;
	do {
		cout << "Input an integer: ";
		cin >> input;
		if (input > 0) {
			count++;
			total += input;
		}
	} while (input != 0);
	cout << fixed << setprecision(3);
	cout << "Average of all positive values is " << double(total) / count << endl;
}