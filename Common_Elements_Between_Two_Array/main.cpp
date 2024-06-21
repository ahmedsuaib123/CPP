#include <iostream>

using namespace std;

int main()
{
    int array1[4]={1,2,3,4};
    int array2[4]={2,7,3,1};

    cout<<"The First Array: ";
    for(int i=0;i<4;i++){
        cout<<array1[i]<<" ";
    }
    cout<<endl;

    cout<<"The Second Array: ";
    for(int i=0;i<4;i++){
        cout<<array2[i]<<" ";
    }
    cout<<endl;

    cout<<"The Common Elements Between Two Array: ";
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(array1[i]==array2[j]){
                cout<<array1[i]<<" ";
            }
        }
    }
    cout<<endl;

    return 0;
}
