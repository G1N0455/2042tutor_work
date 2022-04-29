#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n, count = 0;
    cout << "How many integers to enter? ";
    cin >> n;
    int list[20] = {};
    for (int i = 0; i < n; i++) {
        cout << "? ";
        cin >> list[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < list[i]; j++)
            cout << "*";
        cout << endl;
    }
}
