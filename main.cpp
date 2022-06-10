#include <iostream>

using namespace std;

int main() {
    //kamus
    //int A[] = (4 , 6 , 7 , 8 , 9);

    int A[6];
    int a, c, tmp ;
    //input
    for (a = 1 ; a <= 5 ; a++) {
        cin >> A[a] ;
    }
    for (a = 5 ; a >=0 ; a--) {
        for (c = 2 ; c <= a ; c++) {
            if (A[c-1] > A[c]) {
                tmp = A[c-1];
                A[c-1] = A[c];
                A[c] = tmp;
            }
        }
    }
    //bubbleSort
    for (a = 1 ; a <= 5 ; a++) {
        cout << A[a] << ",";
    }

return 0;
}
