#include <iostream>

using namespace std;

bool isSorted(int arr[],int n) {
    for (int i=1; i<n; i++) {
        if (arr[i]<arr[i-1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    if (isSorted(arr,n)) {
        cout<<"The Array is Sorted"<<endl;
    } else {
        cout<<"The Array is Not Sorted"<<endl;
    }

    return 0;
}
