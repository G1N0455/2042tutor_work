#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
double d2r(double degree) {
	const double PI = 3.1415926535;
	double radian = degree * PI / 180;
	return radian;
}
int main(){
const string t = "\t\t";
cout << "Degree" << t << "Sin" << t << "Cos" << endl;
for ( int d = 0; d <= 360 ; d += 10) 
	cout << setprecision(4) << fixed << setw(4) << right << noshowpos << d  << t << showpos << sin(d2r(d)) << t << cos(d2r(d)) << endl;
}
