#include<iostream>

using namespace std;

int main(){
    char ch;

    cout<<"Enter Any Character To Check: ";
    cin>>ch;

    if(ch>=65 && ch<=90){
        cout<<"The Entered Character '"<<ch<<"' is an UPPERCASE "<<endl;
    } else if(ch>=48 && ch<=57){
        cout<<"The Entered Character '"<<ch<<"' is a DIGIT"<<endl;
    } else if(ch>=97 && ch<=122){
        cout<<"The Entered Character '"<<ch<<"' is a LOWERCASE "<<endl;
    } else{
        cout<<"The Entered Character '"<<ch<<"' is an SPECIAL Character"<<endl;
    }

    return 0;
}
