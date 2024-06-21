#include <iostream>

using namespace std;

void Swap_Number(){

    int firstValue=5;
    int secondValue=10;
    int *p1,*p2;

    p1=&firstValue;
    p2=&secondValue;

    cout<<"The First Value : "<<*p1<<endl;
    cout<<"The Second Value : "<<*p2<<endl;
    cout<<endl;

    cout<<"The Address Of The First Value : "<<p1<<endl;
    cout<<"The Address Of The Second Value : "<<p2<<endl;
    cout<<endl;

    p1=p2;
    p2=&firstValue;

    cout<<"The First Value : "<<*p1<<endl;
    cout<<"The Second Value : "<<*p2<<endl;
    cout<<endl;

}

int main()
{
    Swap_Number();
    return 0;
}
