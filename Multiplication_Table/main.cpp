#include <iostream>

using namespace std;

int main()
{
    int number;
    cout<<"Enter Number: ";
    cin>>number;

    for(int i=0;i<=10;i++){
        cout<<number<<" x "<<i<<" = "<<i*number<<endl;
    }

    return 0;
}
