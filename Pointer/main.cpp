#include <iostream>

using namespace std;

int main()
{
    int x=10;
    int *ptr; //Declare The Pointer Variable Type

    ptr=&x; //Store The Address of The Variable In Pointer

    cout<<"The Value Of The Integer X  : "<<x<<endl; //Value
    cout<<"The Value Of The Integer X  : "<<*ptr<<endl; //Value
    cout<<"The Address Of The Integer X: "<<ptr<<endl; //Address
    cout<<endl;

    char ch='A';
    char *chptr;

    chptr=&ch;

    cout<<"The Value Of The Character ch  : "<<ch<<endl;
    cout<<"The Value Of The Character ch  : "<<*chptr<<endl;
    cout<<"The Address Of The Character ch: "<<chptr<<endl;

    cout<<endl;

    float f=10.0;
    float *fptr;

    fptr=&f;
    cout<<"The Value Of The Float f  : "<<f<<endl;
    cout<<"The Value Of The Float f  : "<<*fptr<<endl;
    cout<<"The Address Of The Float f: "<<fptr<<endl;
    cout<<endl;

    double d=10.0;
    double *dptr;

    dptr=&d;
    cout<<"The Value Of The Double d  : "<<d<<endl;
    cout<<"The Value Of The Double d  : "<<*dptr<<endl;
    cout<<"The Address Of The Double d: "<<dptr<<endl;
    cout<<endl;

    return 0;
}
