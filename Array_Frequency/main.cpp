#include <iostream>

using namespace std;

void findFrequencies(int arr[], int n) {
    for (int i = 0; i < n; i++) {

        bool countedBefore = false;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                countedBefore=true;
                break;
            }
        }

        if (!countedBefore) {
            int count = 1;
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                }
            }
            cout<<arr[i]<<": "<<count<<endl;
        }
    }
}

int main() {
    int arr[] = {4, 2, 2, 4, 5, 2, 3, 1, 3, 5, 4};
    int n = sizeof(arr)/sizeof(arr[0]);

    findFrequencies(arr, n);

    return 0;
}
