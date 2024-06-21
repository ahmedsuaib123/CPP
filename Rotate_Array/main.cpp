#include <iostream>

using namespace std;

void rotateLeftByOne(int arr[], int n) {
    int temp=arr[0];
    for (int i=0; i<n-1; i++) {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}

void rotateRightByOne(int arr[], int n) {
    int temp = arr[n - 1];
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}

void printArray(int arr[], int n) {
    for (int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Original Array: ";
    printArray(arr,n);

    rotateLeftByOne(arr,n);

    cout<<"Array After Left Rotation By One Position: ";
    printArray(arr,n);

    rotateRightByOne(arr,n);

    cout<<"Array After Right Rotation By One Position: ";
    printArray(arr,n);

    return 0;
}
