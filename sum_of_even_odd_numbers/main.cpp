#include <iostream>

using namespace std;

int main() {
    int n;
    int evenSum = 0;
    int oddSum = 0;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            evenSum += i;
        } else{
            oddSum += i;
        }
    }

    cout << "The sum of all even numbers between 1 and " << n << " is: " << evenSum << endl;
    cout << "The sum of all odd numbers between 1 and " << n << " is: " << oddSum << endl;

    return 0;
}
