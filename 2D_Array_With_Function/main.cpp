#include <iostream>

using namespace std;

int array1[2][2];
int array2[2][2];
int array3[2][2];
int array4[2][2];
int array5[2][2];
int maximum1 = array1[0][0];
int minimum1 = array1[0][0];
int oddCount = 0;
int evenCount = 0;
int oddSum1 = 0;
int evenSum1 = 0;
int oddSum2 = 0;
int evenSum2 = 0;
int sumArray1 = 0;
int sumArray2 = 0;
float averageArray1 = sumArray1 / 4.0;
float averageArray2 = sumArray2 / 4.0;


void print_array(){
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
}

void Odd_Even_Number_Count_Of_Array(){
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
}

void minimum_maximum_value_of_array() {
    maximum1 = array1[0][0];
    minimum1 = array1[0][0];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (maximum1 < array1[i][j]) {
                maximum1 = array1[i][j];
            }
            if (minimum1 > array1[i][j]) {
                minimum1 = array1[i][j];
            }
        }
    }
    cout << endl;
    cout << "The Minimum Number in First Array: " << minimum1 << endl;
    cout << "The Maximum Number in First Array: " << maximum1 << endl;

    int maximum2 = array2[0][0];
    int minimum2 = array2[0][0];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (maximum2 < array2[i][j]) {
                maximum2 = array2[i][j];
            }
            if (minimum2 > array2[i][j]) {
                minimum2 = array2[i][j];
            }
        }
    }
    cout << endl;
    cout << "The Minimum Number in Second Array: " << minimum2 << endl;
    cout << "The Maximum Number in Second Array: " << maximum2 << endl;
    cout << endl;
}

void minimum_value_of_array() {
    minimum1 = array1[0][0];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (minimum1 > array1[i][j]) {
                minimum1 = array1[i][j];
            }
        }
    }
    cout << endl;
    cout << "The Minimum Number in First Array: " << minimum1 << endl;

    int minimum2 = array2[0][0];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (minimum2 > array2[i][j]) {
                minimum2 = array2[i][j];
            }
        }
    }
    cout << endl;
    cout << "The Minimum Number in Second Array: " << minimum2 << endl;
    cout << endl;
}

void maximum_value_of_array() {
    maximum1 = array1[0][0];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (maximum1 < array1[i][j]) {
                maximum1 = array1[i][j];
            }
        }
    }
    cout << endl;
    cout << "The Maximum Number in First Array: " << maximum1 << endl;

    int maximum2 = array2[0][0];
    int minimum2 = array2[0][0];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (maximum2 < array2[i][j]) {
                maximum2 = array2[i][j];
            }

        }
    }
    cout << endl;
    cout << "The Maximum Number in Second Array: " << maximum2 << endl;
    cout << endl;
}


void Reverse_Array_Elements(){
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
}

void Transpose_Array_Type1(){
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
}

void Transpose_Array_Type_one(){
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
}

void Transpose_Array_Type_two(){
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
}

void Addition_of_two_Array(){
    cout<<"The Additon Of The Two Array: "<<endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            array3[i][j]=array1[i][j]+array2[i][j];
            cout<<array3[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void Subtraction_of_two_Array(){
    cout<<"The Subtraction Of The Two Array: "<<endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            array4[i][j]=array1[i][j]-array2[i][j];
            cout<<array4[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void Multiplication_of_two_Array(){
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

}

void sum_of_even_numbers_of_array(){
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            if(array1[i][j] % 2 == 0) {
                evenSum1 += array1[i][j];
            }
        }
    }
    cout << "The Sum of Even Numbers in First Array: " << evenSum1 << endl;

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            if(array2[i][j] % 2 == 0) {
                evenSum2 += array2[i][j];
            }
        }
    }
    cout << "The Sum of Even Numbers in Second Array: " << evenSum2 << endl;
    cout << endl;
}

void sum_of_odd_numbers_of_array(){
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            if(array1[i][j] % 2 == 1) {
                oddSum1 += array1[i][j];
            }
        }
    }
    cout << "The Sum of Odd Numbers in First Array: " << oddSum1 << endl;

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            if(array2[i][j] % 2 == 1) {
                oddSum2 += array2[i][j];
            }
        }
    }
    cout << "The Sum of Odd Numbers in Second Array: " << oddSum2 << endl;
}

void Sum_Of_Elements_Of_Array(){
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
}

void Average_Of_Elements_Of_Array(){
    float averageArray1 = sumArray1 / 4.0;
    float averageArray2 = sumArray2 / 4.0;

    cout << "The Average Value of Elements in First Array: " << averageArray1 << endl;
    cout << "The Average Value of Elements in Second Array: " << averageArray2 << endl;

}

int main(){

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
    cout<<endl;

    print_array();
    Odd_Even_Number_Count_Of_Array();
    minimum_maximum_value_of_array();
    Reverse_Array_Elements();

    Transpose_Array_Type_one();
    Transpose_Array_Type_two();

    Addition_of_two_Array();
    Subtraction_of_two_Array();
    Multiplication_of_two_Array();

    minimum_value_of_array();
    maximum_value_of_array();

    sum_of_even_numbers_of_array();
    sum_of_odd_numbers_of_array();

    Sum_Of_Elements_Of_Array();

    Average_Of_Elements_Of_Array();

    return 0;
}
