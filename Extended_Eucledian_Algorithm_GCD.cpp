#include <iostream>

using namespace std;

int extended_gcd(int a, int b, int& x, int& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }

    int x1, y1;
    int gcd = extended_gcd(b, a % b, x1, y1);

    x = y1;
    y = x1 - (a / b) * y1;

    return gcd;
}

int main() {
    int a, b;
    int x, y;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    int gcd = extended_gcd(a, b, x, y);

    cout << "GCD(" << a << ", " << b << ") = " << gcd << endl;
    cout << "Coefficients of Bezout's identity: " << x << ", " << y << endl;

    return 0;
}