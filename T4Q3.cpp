#include <iostream>
using namespace std;
int main() {
    int n, ans =1;
    cin >> n;
    for (n ; n > 0; n--) {
        ans *= n;
    }
    cout << ans;
}