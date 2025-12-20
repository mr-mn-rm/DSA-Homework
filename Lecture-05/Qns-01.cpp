// WAP to check if a number is prime or not?

#include<iostream>
using namespace std;

void isPrime(int N){
    int i = 2;
    while(i <= (N-1)){
        if(N % i == 0){
            cout <<  "Non-prime";
            break;
        }else{
            i++;
            cout << "Prime";
            break;
        }      
    }
}
int main(){
    int N;
    cout << "Enter the number: " << endl;
    cin >> N;
    cout << N << " is ";
    isPrime(N); 
    return 0;
}