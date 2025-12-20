#include<iostream>
using namespace std;

// function for reversing
int revNum(int num){
    int lastdigit; // var to store last digit extracted from num
    int revNum=0; // var to store reversed num

    
    while(num>0){
        int lastdigit =  num % 10; // getting the last digit
        revNum = (revNum*10) + lastdigit; // logic to store reversed num
        num = num/10; // removing the last digit from the orignal number
    }
    
    return revNum;
} 

int main() {

    int num;
    cout << "Enter the number to be reversed: \n";
    cin >> num;
    cout<< "Reversed Num : " << revNum(num) << endl; 

    return 0; 
}