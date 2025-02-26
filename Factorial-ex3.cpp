// Add your code here
#include <iostream>

int main() { 
    int N = 10;
    for (int i = 0; i <= N; ++i) {
        int factorial = 1;
        if (i > 1) {
            for (int j = 1; j <= i; ++j) {
                factorial = factorial * j;
            }
        }
        std::cout << "factorial of " << i << " is " << factorial << "\n"; 
        }
}