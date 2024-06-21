#include <iostream>

using namespace std;

int main()
{
    int array[5]={1,2,3,4,5};
    int max=array[0];

    for(int i=0;i<5;i++){
        if(array[i]>max){
           max=array[i];
        }
    }

    int secondMax=array[0];
    for(int i=0;i<5;i++){
        if(array[i]>secondMax && array[i]!=max){
            secondMax=array[i];
        }
    }

    cout<<"The Second Largest Element In The Array: "<<secondMax<<endl;
    return 0;
}
