#include <iostream>

using namespace std;

int main()
{
    string s;

    cout<<"Enter String: ";
    cin>>s;

    int count=0;

    for(int i=0;s[i]!='\0';i++){
        if(tolower(s[i])=='a'||tolower(s[i])=='e'||tolower(s[i])=='i'||tolower(s[i])=='o'||tolower(s[i])=='u'){
            count++;
        }
    }

    cout<<"Total Vowels: "<<count<<endl;

    return 0;
}
