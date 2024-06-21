#include<iostream>

using namespace std;

int main()
{
    int day,week,year;

    cout<<"Enter Number Of Days: ";
    cin>>day;

    year=day/365;
    day=day%365;
    week=day/7;
    day=day%7;

    cout<<"No. of Years: "<<year<<endl;
    cout<<"No. of Weeks: "<<week<<endl;
    cout<<"No. of Days : "<<day<<endl;
    cout<<year<<" Year "<<week<<" Week "<<day<<" Days ";

    return 0;
}
