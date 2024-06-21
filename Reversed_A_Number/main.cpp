#include <iostream>

using namespace std;

int main()
{
    int number;
    int remainder;
    int reversed_number=0;

    cout<<"Enter A Number: ";
    cin>>number;

    while(number!=0){
        remainder=number%10;
        reversed_number=reversed_number*10+remainder;
        number/=10;
    }
    cout<<"Reversed Number: "<<reversed_number<<endl;

    return 0;
}
