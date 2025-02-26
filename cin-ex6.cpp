#include <iostream>
using namespace std;

int y;
int *x;

int main() {
    y = 10;
    x = &y;
    cout << x << "\n";
    cout << *x << "\n";
    y = 30;
    cout << *x << "\n";
}