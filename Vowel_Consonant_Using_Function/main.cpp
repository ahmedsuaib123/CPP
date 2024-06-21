#include<iostream>

using namespace std;

int n;


void Find_Vowel_Consonant(){
    char arr[n];

    cout<<"Enter Number of character to input: ";
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
}

int main(){

    Find_Vowel_Consonant();

    return 0;
}
