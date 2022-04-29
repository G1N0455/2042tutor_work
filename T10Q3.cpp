#include <iostream>
using namespace std;
//21090099A Ng Kwan Ho
void printArray(const int a[], int size){
for (int i = 0; i < size; i++){
cout << a[i] << " ";
}
cout << endl;
}
void multiplyArray(int * const a, int size, int n){
    for (int i = 0; i < size; i++){
        *(a + i) = *(a + i) *n;
    }
}
int main(){
const int arraySize = 10;
int c[arraySize] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
cout << "Before multiplyArray, array is: ";
printArray(c, arraySize);
multiplyArray(c, arraySize, 3);
// Function call on multiplyArray
// Insert your codes here
cout << "After multiplyArray, array is: ";
printArray(c, arraySize);
return 0;
}