#include <iostream>

using namespace std;

int main()
{
    int array[] = {1,2,3,4,5,6,7,8,9};
    int n;
    int i;

    for(int i = 0; i < 9; i++){
        cout<< array[i] << " ";
    }
    cout<<endl;

    cout<<"Enter the number to serach: ";
    cin>>n;

    for(int i = 0; i < 9; i++){
        if(n == array[i]){
            cout<<n<<" was found in the index "<< i <<" of the array"<<endl;
            break;
        }
    }




    return 0;
}
