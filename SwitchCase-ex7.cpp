// add your code here
#include <iostream>
using namespace std;

int main() { 
    int N;
    cout << "Please enter an integer value: ";
    cin >> N;
    int x = 2;
    if (N % 2 == 0 & N < 10) {
        x = 0;
    }
    if (N % 2 == 1) {
        x = 1;
    }
    switch(x) {
        case 0:
            cout << N*N; 
            break;
        case 1:
            cout << double(N)/2;
            break;
        default:
            cout << "hahaha";
    }
}