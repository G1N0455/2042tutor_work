#include <iostream>
#include <string>
using namespace std;
int main(){
    int i, j;
    for (i =2; i <= 200; i++){
        for (j =2; j < i; j++){
            if (1%j == 0)break;
        }
        if (j ==i)
        cout << i << " ";
    }
}