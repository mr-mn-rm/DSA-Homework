#include<iostream>
using namespace std;

int main(){
    int a = 0, b = 1, n, i = 0, c;
    cout << "Enter the nth number: \n";
    cin >> n;
    while(i < n){
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
        i++;
        
    }
    
    return 0;
}