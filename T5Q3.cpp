#include <iostream>
using namespace std;
double pow(double base, int n){
    double result = 1;
    for(int i = 0; i < n; i++){
        result = result*base;
    }
    return result;
}
int main(){
	double base,exp;
    int n;
	cout << "Enter the base value: ";
	cin >> base ;
	cout << "Enter the exponent value: ";
	cin >> exp ;
	if (exp <0)
		n = - exp;
	else n = exp;
	if (exp==0)
	cout << base << " to the power of " << exp << "is " << 1;
	if (exp > 0)
	cout << base << " to the power of " << exp << "is " << pow(base, n);
    if (exp < 0)
	cout << base << " to the power of " << exp << "is " << 1/pow(base, n);
}