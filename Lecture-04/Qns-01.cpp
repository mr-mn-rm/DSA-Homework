// Butterfly Pattern

#include<iostream>
using namespace std;

int main(){
    int i, j, n = 6;
    cout << "###############-Butterfly Pattern-################\n\n";

    for(i = 0; i < n; i++){
        // Left wing
        for(j = 0; j <= i; j++){
            cout << "* ";
        }

        // Middle space
        for(j = 0; j < 2*(n - i - 1); j++){
            cout << "  ";
        }

        // Right wing
        for(j = 0; j <= i; j++){
            cout << "* ";
        }

        cout << endl;
    }

    for(i = 0; i < n; i++){
        // Left wing
        for(j = 0; j < n - i; j++){
            cout << "* ";
        }

        // Middle space
        for(j = 0; j < 2*i; j++){
            cout << "  ";
        }

        // Right wing
        for(j = 0; j < n - i; j++){
            cout << "* ";
        }

        cout << endl;
    }
    return 0;
}