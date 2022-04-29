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
    cout << "The input integers are:" << endl;
    for (int i = 0; i < 4 ; i++) {
        for (int j = 0; j < 5; j++) {
            if (i * 5 + j == n )
                return 0;
            else
            cout << setw(3) << right << " " << list[i * 5 + j];
        }cout << endl;
    }
}
