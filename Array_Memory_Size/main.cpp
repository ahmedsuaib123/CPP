#include <iostream>

using namespace std;

int main()
{
    int array1[7]={1,2,3,4,5,6,7};

    cout<<"array[7]: ";
    for(int i=0;i<7;i++){
        cout<<array1[i]<<" ";
    }
    cout<<endl;

    cout<<"array[7]: ";
    for(int i=0;i<7;i++){
        cout<<&array1[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<7;i++){
        cout<<"Array["<<i<<"] = ";
        cout<<&array1[i]<<" ";
        cout<<endl;
    }

    cout<<"The Memory Size Of The Array is "<<sizeof(array1)<<" Bytes"<<endl;
    cout<<"The Memory Size Of The Array Address is "<<sizeof(&array1)<<" Bytes"<<endl;
    return 0;
}
