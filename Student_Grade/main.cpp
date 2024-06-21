#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter The Number Of Students: ";
    cin >> n;

    int marks[n];
    int sum = 0;

    cout << "Enter Marks For Each Student: ";
    for (int i = 0; i < n; i++) {
        cin >> marks[i];
        sum += marks[i];
    }

    float average = (float)sum / n;

    cout << "Sum Of Marks: " << sum << endl;
    cout << "Average Of Marks: " << average << endl;

    return 0;
}
