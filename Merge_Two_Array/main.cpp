#include <iostream>

using namespace std;

int main()
{
    int array1[5]={1,2,3,4,5};
    int array2[4]={6,7,8,9};
    int array3[8];

    cout<<"The First Array: ";
    for(int i=0;i<5;i++){
        cout<<array1[i]<<" ";
    }
    cout<<endl;

    cout<<"The Second Array: ";
    for(int i=0;i<4;i++){
        cout<<array2[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<5;i++){
        array3[i]=array1[i];
    }

    for(int i=0;i<4;i++){
        array3[i+5]=array2[i];
    }

    cout<<"The Merged Array: ";
    for(int i=0;i<9;i++){
        cout<<array3[i]<<" ";
    }

    return 0;
}
