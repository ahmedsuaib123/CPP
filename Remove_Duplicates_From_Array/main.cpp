#include <iostream>

using namespace std;

void removeDuplicates(int arr[], int n) {
    if (n == 0) return;

    int uniqueCount = 1;

    for (int i = 1; i < n; i++) {
        int j;
        for (j = 0; j < uniqueCount; j++) {
            if (arr[i] == arr[j]) {
                break;
            }
        }
        if (j == uniqueCount) {
            arr[uniqueCount] = arr[i];
            uniqueCount++;
        }
    }

    cout << "Array After Removing Duplicates: ";
    for (int i = 0; i < uniqueCount; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {4, 2, 2, 4, 5, 2, 3, 1, 3, 5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i=0; i<11; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    removeDuplicates(arr, n);

    return 0;
}
