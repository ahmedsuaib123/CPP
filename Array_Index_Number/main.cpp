#include <iostream>

using namespace std;

int main()
{
    int array1[2][2];
    int n=0;
    int n1=0;

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<"Index Number For "<<n+1<<": ["<<i<<j<<"] "<<endl;
            n++;
        }
    }
    cout<<endl;

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<"["<<i<<j<<"] ";
        }
        cout<<endl;
    }
    cout<<endl;

    int row,column;
    cout<<"Enter The Row & Column Number: ";
    cin>>row>>column;


    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<"["<<i<<j<<"] ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<"Index Number For "<<n1+1<<": ["<<i<<j<<"] "<<endl;
            n1++;
        }
    }

    return 0;
}
