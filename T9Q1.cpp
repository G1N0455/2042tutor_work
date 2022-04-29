#include <iostream>
#include <string>
using namespace std;
int main()
{
    char s[100];
    cout << "Enter a string: ";
    cin >> s;
    for (int i = 0; i <= strlen(s); i++) {
        if (s[i] >= 97 && s[i] <= 122)
        {
            s[i] = s[i] - 32;
        }
    }
    cout << "Converted string is: " << s;
    return 0;
}