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

    // Test the missing element could be 1 or N+1
    double answer = (N+1)*(N+2)/2 - sum;

    return answer;

}

int main()
{

std::vector<int> A = {2,3,1,5};

std::cout << "Missing element:" << solution(A) << std::endl;

        return 0;
}