#include <iostream>

using namespace std;

int main()
{
    int array[]={5,3,7,2,1,4,6};
    int n=sizeof(array)/sizeof(array[0]);
    int i,j,k;

    cout<<"The Unsorted Array: ";
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<n-1;i++){

        int k=i;
        for(int j=i+1;j<n;j++){
            if(array[j]<array[k]){
               k=j;
            }
        }
        swap(array[k],array[i]);
    }

    cout<<"The Sorted Array: ";
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }

    return 0;
}
