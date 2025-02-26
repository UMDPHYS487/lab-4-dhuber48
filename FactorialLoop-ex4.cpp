#include <iostream>

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
    int N = 10;
    for (int i = 0; i <= N; ++i) {
        std::cout << "factorial of " << i << " is " << factorial(i) << "\n"; 
        }
}
