// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> &A) {
    // N is size of the array
    unsigned long long int N = A.size();
    unsigned long long int sum = 0;

    for (unsigned int i=0; i<N; i++) {
        sum += A[i];
    }

    if ((N)*(N+1)/2 - sum == 0)
        return 1;
    else
        return 0;

}

int main()
{

std::vector<int> A = {4,1,3,2};

std::cout << "Missing element:" << solution(A) << std::endl;

        return 0;
}