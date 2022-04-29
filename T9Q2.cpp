#include <iostream>
using namespace std;
void swapString(char w1[], char w2[]) {
    for (int i = 0; !(w1[i] == '\0' || w2[i] == '\0'); i++) {
        char temp = w1[i];
        w1[i] = w2[i];
        w2[i] = temp;
    }
}
int main() {
    char w1[20], w2[20];
    cout << "Enter two words (separated by space): ";
    cin >> w1;
    cin >> w2;
    cout << "Before swapping, words are:\n";
    cout << w1 << endl << w2 << endl;
    // Function call on swapString
    swapString(w1, w2);
    // Insert your code here
    cout << "After swapping, words are:\n";
    cout << w1 << endl << w2 << endl;
    return 0;
}
// Function definition of swapString
// Insert your codes here
