#include <iostream>
using namespace std;
void printBinary(int n) {
    if (n == 0 || n == 1) {
        cout << n;
        return;
        printBinary(n / 2);
        cout << (n % 2);
    }
}
int main() {
    int num;
    cout << "Input a positive decimal integer: ";
    cin >> num;
    cout << "The binary version is ";
    printBinary(num);
    cout << endl;
    return 0;
}
