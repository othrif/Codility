// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;


#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<int> &A, int K) {
       int n = A.size();
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
    return B;
}


int main()
{

std::vector<int> A = {3, 8, 9, 7, 6};
std::vector<int> B = solution(A,3);
for (auto b:B)
    std::cout << b << std::endl;

        return 0;
}