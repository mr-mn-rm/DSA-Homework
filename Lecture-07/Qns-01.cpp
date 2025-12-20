// The number is power of 2 or not??

#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout << "Enter the number: \n";
    cin >> n;
    int N = n; // Another variable is used for Bitwise operator

// Checking the number using loop
    if (n <= 0) {
        cout << "Not power of 2";
    }else{

    while (n > 1) {
        if (n % 2 != 0) {
            cout << "Not power of 2" << endl;
            goto bitwise;
        }
        n = n / 2;
    }
}

    cout << "Power of 2" << endl;




bitwise: 
// Checking the number using bitwise operator
    if (N > 0 && (N & (N - 1)) == 0){
        cout << "Power of 2" << endl;
    }
    else{
        cout << "Not power of 2" << endl; 
    }  


    return 0;
}