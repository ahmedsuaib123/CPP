#include <iostream>
using namespace std;

double square_root(double num) {
    double x = num;
    double y = 1;

    while (x - y > 0.000001) {
        x = (x + y) / 2;
        y = num / x;
    }

    return x;
}

int main() {
    double num;

    cout << "Enter Any number: ";
    cin >> num;

    if (num < 0) {
        cout << "Error: cannot calculate square root of negative number." << endl;
        return 1;
    }

    double root = square_root(num);

    cout << "Square root of " << num << ": " << root << endl;

    return 0;
}
