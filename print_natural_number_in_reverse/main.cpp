#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter size: ";
    cin>>n;

    cout<<"Original: ";
    for(int i=0;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Reverse : ";
    for(int i=n;i>=0;--i){
        cout<<i<<" ";
    }

    return 0;
}
