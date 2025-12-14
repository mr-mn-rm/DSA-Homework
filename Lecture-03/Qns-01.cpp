// SUM of all numbers from 1 to N which are divisible by 3

#include<iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the Number: ";
    cin >> N;
    int i, sum = 0;
// Basic Concept : (i%3) checks whether the number is divisible by 3 or not.
    
// Using for-loop
    for(i = 1; i <= N; i++) {
        if(i % 3 == 0) {           
            sum += i;
        }
    }

    cout << "Sum = " << sum << endl;

// Using while-loop
    while(i <= N) {
            if(i % 3 == 0) {
                sum = sum + i;
            }
            i++;
        }

    cout << "Sum = " << sum << endl;
    return 0;
}