// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;


#include <iostream>
#include <vector>
#include <map>

int [] solution(int[] A, int K) {

    int n = sizeof(A)/sizeof(A[0]) ;
    vector<int> B(n, 0);
        if (!n) {
        return B;
    }
    int index = 0;
    if (K%n) {
        index = (n-K%n);
    }

    for (int i=0; i<n; i++) {
        B[i] = A[index];
        index = ((index+1)%n);
    }
    return res;
}


int main()
{

int A[] = {3, 8, 9, 7, 6};
int n = sizeof(A)/sizeof(A[0]) ;
int a [] = solution(A,3);
for (int i=0; i<n; i++)
    std::cout << "Unpaired element " << a[i] << std::endl;

        return 0;
}