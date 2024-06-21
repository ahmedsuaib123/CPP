#include<iostream>
using namespace std;
int main(){
    int n;
    char arr[n];

    cout<<"Enter Number of character you want to input: ";
    cin>>n;

    cout<<"Enter Characters: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' || arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U'){
                cout<<arr[i]<<" is a Vowel"<<endl;
        } else{
             cout<<arr[i]<<" is a Consonant"<<endl;
        }
    }

    return 0;
}
