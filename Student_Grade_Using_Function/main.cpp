#include <iostream>

using namespace std;

int n;

int sum = 0;

void Student_Grade(){
    cout << "Enter The Number Of Students: ";
    cin >> n;

    int marks[n];
    cout << "Enter Marks For Each Student: ";
    for (int i = 0; i < n; i++) {
        cin >> marks[i];
        sum += marks[i];
    }

    float average = (float)sum / n;

    cout << "Sum Of Marks: " << sum << endl;
    cout << "Average Of Marks: " << average << endl;
}

int main() {
    int n;

    Student_Grade();

    return 0;
}
