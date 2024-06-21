#include <iostream>

using namespace std;

int main()
{
    int array[] = {1,2,3,4,5,9,7,8,9};

    for(int i = 0; i < 9; i++){
        cout<< array[i] << " ";
        array[i]--;
    }
    cout<<endl;

    int maximum1 = array[0];
    int minimum1 = array[0];
    int sum1 = 0;
    for(int i = 0; i < 9; i++){
        cout<< array[i] << " ";
        sum1+=array[i];

        if(maximum1<array[i]){
            maximum1 = array[i];
        }

        if(minimum1>array[i]){
            minimum1 = array[i];
        }

    }
    cout<<endl;
    cout<<"The Maximum Number : "<<maximum1<<endl;
    cout<<"The Minimum Number : "<<minimum1<<endl;
    cout<<"Total Sum : "<<sum1<<endl;

    int maximum2 = array[0];
    int minimum2 = array[0];
    int sum2 = 0;
    for(int i = 0; i < 9; i++){
        if(i%2 == 0){
            cout<< array[i] << " ";
            sum2+=array[i];
            if(maximum2<array[i]){
                maximum2 = array[i];
            }

            if(minimum2>array[i]){
                minimum2 = array[i];
            }
        }
    }
    cout<<endl;
    cout<<"The Maximum Number : "<<maximum2<<endl;
    cout<<"The Minimum Number : "<<minimum2<<endl;
    cout<<"Total Sum of Even Numbers: "<<sum2<<endl;

    int maximum3 = array[0];
    int minimum3 = array[0];
    int sum3 = 0;
    for(int i = 0; i < 9; i++){
        if(i%2 == 1){
            cout<< array[i] << " ";
            sum3+=array[i];
            if(maximum3<array[i]){
                maximum3 = array[i];
            }

            if(minimum3>array[i]){
                minimum3 = array[i];
            }
        }
    }
    cout<<endl;
    cout<<"The Maximum Number : "<<maximum3<<endl;
    cout<<"The Minimum Number : "<<minimum3<<endl;
    cout<<"Total Sum of Odd Numbers: "<<sum3<<endl;

    int array1[] = { 1,2,3,4,5};
    int array2[] = { 6,7,8,9,10};

    for(int i = 0; i < 5; i++){
        cout<<array1[i]<<" ";
    }
    cout<<endl;

    for(int i = 0; i < 5; i++){
        cout<<array2[i]<<" ";
    }
    cout<<endl;

    cout<<"After The Summation between Index of Array1 & Array2: "<<endl;
    for(int i = 0; i < 5; i++){
        cout<<array1[i]+array2[i]<<" ";
    }
    cout<<endl;





    return 0;
}
