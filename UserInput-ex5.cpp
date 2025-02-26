#include <iostream>
using namespace std;

int factorial (int n) {
    int factor = 1;
    if (n > 1) {
        for (int j = 1; j <= n; ++j) {
            factor = factor * j;
        }
    }
    return factor;
}

int main() {
    int N;
    cout << "Please enter an integer value: ";
    cin >> N;
    cout << "The value you entered is " << N << " and its factorial is " << factorial(N) << "\n"; 
}