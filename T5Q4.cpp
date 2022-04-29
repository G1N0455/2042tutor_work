#include <iostream>
#include <iomanip>
//T5Q4
using namespace std;
void nChar(int n, char c) {
    for (int i = 0; i < n; i++)
        cout << c;
}
void swtri(int n) {
    for (int i = 1; i <= n; i++, cout << endl)
        nChar(i, '*');
}
void netri(int n) {
    for (int i = 1; i <= n; i++, cout << endl) {
        nChar(n - i, ' ');
        nChar(i, '*');
    }
}
void pyr(int n) {
    for (int i = 1; i <= n; i++, cout << endl) {
        nChar(n - i, ' ');
        nChar(2 * i - 1, '*');
    }
}
void ipyr(int n) {
    for (int i = 1; i <= n-1; i++, cout << endl) {
        nChar(i, ' ');
        nChar(2 * n - 2 * i - 1, '*');
    }
}

int main() {
    char input;
    int n;
    cout << "Input:";
    cin >> input;
    cout << "n=";
    cin >> n;
    switch (input)
    {
    case 'a': swtri(n); break;
    case 'b': netri(n); break;
    case 'c': pyr(n); break;
    case 'd': pyr(n); ipyr(n); break;
    case 'e': pyr(n); pyr(n); pyr(n); break;
    default:
        cout << "ggwp";
        break;
    }

    return 0;
}