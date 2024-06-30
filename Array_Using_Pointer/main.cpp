#include <iostream>

using namespace std;

int main()
{
    int array1[5]={1,2,3,4,5};
    int *ptr;
    int sum=0;

    ptr=array1;
    for(int i=0;i<5;i++){
        sum=sum+ *(ptr+i);
    }

    cout<<"The Sum Of The Array Elements: "<<sum<<endl;

    return 0;

}
