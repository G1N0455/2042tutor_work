#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
int main() {
    int seed, list[100], ran[11] = {}, num, max = 0;
    cout << "Please enter the seed value: ";
    cin >> seed;
    srand(seed);
    cout << "The random integers are: " << endl;
    for (int i = 0; i < 100; i++) {
        num = 1 + rand() % 10;
        list[i] = num;
        ran[num]++;
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << setw(5) << list[i * 10 + j];
        }cout << endl;
    }
    for (int i = 1; i <= 10; i++) {
        if (max < list[i])
            max = list[i];
    }
    cout << max << " appears the most with " << ran[max];
}