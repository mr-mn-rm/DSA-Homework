// Intersection of two array

#include <iostream>
using namespace std;

int main() {
    int A[] = {34,23,234,345,345,4345,6445,6324,34};
    int B[] = {34,456,4,6756,75,76567,345,35,34};

    int sizeA = sizeof(A) / sizeof(A[0]);
    int sizeB = sizeof(B) / sizeof(B[0]);

    cout << "Intersection: ";

    for (int i = 0; i < sizeA; i++) {
        for (int j = 0; j < sizeB; j++) {
            if (A[i] == B[j]) {
                cout << A[i] << " ";
                B[j] = -1;
                break;
            }
        }
    }

    return 0;
}
