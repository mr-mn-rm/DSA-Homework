// WAP to swap the maximum and minimum number in an Array

#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 7, 9, 5, 1, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int minIndex = 0, maxIndex = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[minIndex])
            minIndex = i;
        if (arr[i] > arr[maxIndex])
            maxIndex = i;
    }

    // swap min and max
    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;

    // print array
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
