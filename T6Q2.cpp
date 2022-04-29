#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
void sumAvg(int lower, int upper, int &sum, float &average){
    sum = 0;
    for (int i =lower; i <= upper; i++)
    sum+=i;
    average = sum/(double)(upper - lower +1);
}
int main(){
int lower, upper, sum;
float average;
cout << "Enter the lower bound: ";
cin >> lower;
cout << "Enter the upper bound: ";
cin >> upper;
sumAvg(lower, upper, sum, average);
cout << "From " << lower << " to " << upper << ":\n";
cout << "Sum = " << sum << endl;
cout << "Average = " << average << endl;
return 0;
}