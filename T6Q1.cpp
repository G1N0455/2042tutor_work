#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
double hypoten(double x,double y){
    double z;
    z = sqrt(x*x +y*y);
    return z;
}
int main(){
    double x,y;
    cout << "Please enter the length of first side: ";
    cin >> x;
    cout <<"Please enter the length of second side: ";
    cin >> y;
    cout << "Hypotenuse of a 3 by 4 right triangle is " << hypoten(3,4);
}