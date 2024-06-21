#include <iostream>

using namespace std;

int main()
{
    int array1[2][2];
    int array2[2][2];
    int array3[2][2];
    int array4[2][2];
    int array5[2][2];
    int array6[2][2];
    int digitCount1 = 0;
    int digitCount2 = 0;
    int oddCount = 0;
    int evenCount = 0;
    int oddSum1 = 0;
    int evenSum1 = 0;
    int oddSum2 = 0;
    int evenSum2 = 0;
    int sumArray1 = 0;
    int sumArray2 = 0;

    cout<<"Enter The Elements For The First Array: ";
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cin>>array1[i][j];
        }
    }


    cout<<"Enter The Elements For The Second Array: ";
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cin>>array2[i][j];
        }
    }

    cout<<"The First Array: "<<endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout<<array1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"The Second Array: "<<endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout<<array2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"The First Array(Reverse Order): "<<endl;
    for(int i = 1; i >= 0; --i){
        for(int j = 1; j >= 0 ; --j){
            cout<<array1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"The Second Array(Reverse Order): "<<endl;
    for(int i = 1; i >= 0; --i){
        for(int j = 1; j >= 0 ; --j){
            cout<<array2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"The First Array(Transpose): "<<endl;
    for(int j = 0; j < 2; j++){
        for(int i = 0; i < 2; i++){
            cout<<array1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"The Second Array(Transpose): "<<endl;
    for(int j = 0; j < 2; j++){
        for(int i = 0; i < 2; i++){
            cout<<array2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"The First Array(Transpose): "<<endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout<<array1[j][i]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"The Second Array(Transpose): "<<endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout<<array2[j][i]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout << "Even numbers in the first array: ";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            if(array1[i][j] % 2 == 0) {
                cout << array1[i][j] << " ";
            }
        }
    }
    cout << endl;

    cout << "Even numbers in the second array: ";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            if(array2[i][j] % 2 == 0) {
                cout << array2[i][j] << " ";
            }
        }
    }
    cout << endl;


    cout << endl;
    cout << "Odd numbers in the first array: ";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            if(array1[i][j] % 2 == 1) {
                cout << array1[i][j] << " ";
            }
        }
    }
    cout << endl;

    cout << "Odd numbers in the second array: ";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            if(array2[i][j] % 2 == 1) {
                cout << array2[i][j] << " ";
            }
        }
    }
    cout << endl;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            array1[i][j];
            digitCount1++;
        }
    }
    cout<<endl;
    cout << "The Total Numbers in First Array: " << digitCount1 << endl;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            array2[i][j];
            digitCount2++;
        }
    }
    cout << "The Total Numbers in Second Array: " << digitCount2 << endl;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            if(array1[i][j]%2 == 0){
                evenCount++;
            } else{
                oddCount++;
            }
        }
    }
    cout<<endl;
    cout << "The Even Numbers in First Array: " << evenCount << endl;
    cout << "The Odd Numbers in First Array : " << oddCount << endl;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            if(array2[i][j]%2 == 0){
                evenCount++;
            } else{
                oddCount++;
            }
        }
    }
    cout<<endl;
    cout << "The Even Numbers in Second Array: " << evenCount << endl;
    cout << "The Odd Numbers in Second Array : " << oddCount << endl;

    int maximum1 = array1[0][0];
    int minimum1 = array1[0][0];
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            if(maximum1<array1[i][j]){
                    maximum1 = array1[i][j];
            }
            if(minimum1>array1[i][j]){
                    minimum1 = array1[i][j];
            }
        }
    }
    cout<<endl;
    cout<<"The Minimum Number in First Array: "<<minimum1<<endl;
    cout<<"The Maximum Number in First Array: "<<maximum1<<endl;

    int maximum2 = array2[0][0];
    int minimum2 = array2[0][0];
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            if(maximum2<array2[i][j]){
                    maximum2 = array2[i][j];
            }
            if(minimum2>array2[i][j]){
                    minimum2 = array2[i][j];
            }
        }
    }
    cout<<endl;
    cout<<"The Minimum Number in Second Array: "<<minimum2<<endl;
    cout<<"The Maximum Number in Second Array: "<<maximum2<<endl;
    cout<<endl;

    cout<<"The Additon Of The Two Array: "<<endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            array3[i][j]=array1[i][j]+array2[i][j];
            cout<<array3[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"The Substraction Of The Two Array: "<<endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            array4[i][j]=array1[i][j]-array2[i][j];
            cout<<array4[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout << "The Multiplication Of The Two Arrays: " << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            array5[i][j] = 0;
            for(int k = 0; k < 2; k++) {
                array5[i][j] += array1[i][k] * array2[k][j];
            }
            cout << array5[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            if(array1[i][j] % 2 == 0) {
                evenSum1 += array1[i][j];
            } else {
                oddSum1 += array1[i][j];
            }
        }
    }
    cout << "The Sum of Even Numbers in First Array: " << evenSum1 << endl;
    cout << "The Sum of Odd Numbers in First Array: " << oddSum1 << endl;
    cout << endl;

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            if(array2[i][j] % 2 == 0) {
                evenSum2 += array2[i][j];
            } else {
                oddSum2 += array2[i][j];
            }
        }
    }
    cout << endl;
    cout << "The Sum of Even Numbers in Second Array: " << evenSum2 << endl;
    cout << "The Sum of Odd Numbers in Second Array: " << oddSum2 << endl;


    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            array1[i][j];
            sumArray1 += array1[i][j];
        }
    }
    cout << endl;
    cout << "The Sum of Elements in First Array: " << sumArray1 << endl;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            array2[i][j];
            sumArray2 += array2[i][j];
        }
    }
    cout << "The Sum of Elements in Second Array: " << sumArray2 << endl;
    cout << endl;

    float averageArray1 = sumArray1 / 4.0;
    float averageArray2 = sumArray2 / 4.0;

    cout << "The Average Value of Elements in First Array: " << averageArray1 << endl;
    cout << "The Average Value of Elements in Second Array: " << averageArray2 << endl;
    cout << endl;

    int row, column;
    cout << "Enter the row and column index of the element to display : ";
    cin >> row >> column;

    if(row >= 0 && row < 2 && column >= 0 && column < 2) {
        cout << "Element at index [" << row << "][" << column << "] in the first array: " << array1[row][column] << endl;
        cout << "Element at index [" << row << "][" << column << "] in the second array: " << array2[row][column] << endl;
    } else {
        cout << "Invalid index" << endl;
    }


    return 0;
}
