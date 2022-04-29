#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
int main() {
	int seed, list[20], max=0, sum=0;
	cout << "Please enter the seed value: ";
	cin >> seed;
    srand(seed);
	cout << "The random integers are: " << endl;
    for (int i = 0; i < 20; i++) {
        list[i] = 1 + rand() % 100;
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
                cout << setw(5) << list[i * 5 + j];
        }cout << endl;
    }
    for (int i = 0; i < 20; i++) {
        if (max < list[i])
            max = list [i];
        sum += list[i];
    }
    cout << "The largest number is: " << max << endl;
    cout << "The average value is: " << (double)sum / 20;
}