#include <iostream>

using namespace std;

int sumOfSubarray(int arr[], int start, int end) {
    int sum = 0;
    for (int i=start; i<=end; i++) {
        sum+=arr[i];
    }
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n=sizeof(arr)/sizeof(arr[0]);

    int start=1;
    int end=3;

    cout<<"Sum of elements in subarray from index "<<start<<" to "<<end<<" is: ";
    cout<<sumOfSubarray(arr,start,end)<<endl;

    return 0;
}
