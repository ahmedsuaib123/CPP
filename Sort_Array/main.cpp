#include <iostream>

using namespace std;

void bubbleSort(int array1[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (array1[j] > array1[j + 1]) {
                int temp = array1[j];
                array1[j] = array1[j + 1];
                array1[j + 1] = temp;
            }
        }
    }
}

int main() {
    int array1[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(array1) / sizeof(array1[0]);
    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout << array1[i] << " ";
    }
    cout << endl;

    bubbleSort(array1, n);
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << array1[i] << " ";
    }
    cout << endl;

    return 0;
}
