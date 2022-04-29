#include <iostream>
#include <iomanip>
#include <cmath>
//T6Q3v2
using namespace std;
double calcPI(double n){
if (n == 1)
return 4 * 1;
else
return (4 * (pow(-1, n + 1)*(1 / (2 * n - 1))) + calcPI(n - 1));
}
int main() {
    int n;
    cout << "How many terms for PI: ";
    cin >> n;
    cout << "PI with" << n << "terms is " << setprecision(15) << fixed << calcPI(n);
    return 0;
}