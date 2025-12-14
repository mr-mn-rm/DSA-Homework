// Factorial of a number

#include<iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the Number: ";
    cin >> N;
    int i, factorialValue = 1;
// Basic Concept : n! = n(n-1)(n-2) ...
// For e.g.: 5! = 5*4*3*2*1 = 120


// Using for-loop
    for(i = 1; i <= N; i++) {
        // 0! = 1
        if(N != 0){
        factorialValue *= i;
        }
    }

    cout << "Factorial of " << N << "= "<< factorialValue << endl;

// Using while-loop
    while(i <= N) {
        // 0! = 1
        if(N != 0){
           factorialValue *= i;
        }
    }
     cout << "Factorial of " << N << "= "<< factorialValue << endl;
    return 0;
}


