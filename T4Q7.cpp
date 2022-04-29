#include <iostream>
#include <iomanip>
using namespace std;
double calcPI(int n){
    double pi= 4/1;
    for (int i = 1, count = 3; i < n; i++ ,count +=2){
        if (i % 2 != 0)
        pi -= 4/(double)count;
        else
        pi += 4/(double)count;
    }
    return pi;
}
int main(){
    int n;
    cout << "How many terms for PI: ";
    cin >> n;
    cout << "PI with 1000 terms is " << setprecision(15) << fixed << calcPI(n);
    return 0;
}