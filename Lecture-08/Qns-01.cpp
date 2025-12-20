// Sum and product of all numbers in an Array

#include<iostream>
using namespace std;

int arraySum(int arr[], int size){
    int sum = 0;
    for(int i = 0; i<size; i++){
        sum += arr[i];
    }
    return sum;
}
int arrayProduct(int arr[], int size){
    int product = 1;
    for(int i = 0; i<size; i++){
        product *= arr[i];
    }
    return product;
}


int main(){

    int myArray[] = {2,7,9,5,1,6};
    int size = sizeof(myArray) / sizeof(int);
    
    cout << "Sum= " << arraySum(myArray, size) << endl;
    cout << "Product= " << arrayProduct(myArray, size) << endl;

    return 0;
}