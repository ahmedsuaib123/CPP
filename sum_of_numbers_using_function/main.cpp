#include <iostream>

using namespace std;

int n;
int sum = 0;
int evenSum = 0;
int oddSum = 0;

void sum_of_numbers(){
    for (int i=1; i<=n; i++) {
        sum += i;
    }

    cout << "The sum of all  numbers between 1 and " << n << " is: " << sum << endl;
}

void sum_of_even_numbers(){

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            evenSum += i;
        }
    }

    cout << "The sum of all even numbers between 1 and " << n << " is: " << evenSum << endl;
}

void sum_of_odd_numbers(){

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            evenSum += i;
        } else{
            oddSum += i;
        }
    }

    cout << "The sum of all odd numbers between 1 and " << n << " is: " << oddSum << endl;

}

int main() {

    cout << "Enter a number: ";
    cin >> n;

    sum_of_even_numbers();
    sum_of_odd_numbers();
    sum_of_numbers();


    return 0;
}

