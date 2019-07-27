// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;


#include <iostream>
#include <vector>
#include <limits>
#include <cmath>

using namespace std;

int solution(vector<int> &A) {
    vector<long long> sums;
    unsigned int N = A.size();
    long long sum = 0;
    // generate all of the possible sums
    for (unsigned int i=0; i<N; i++) {
      sum += A[i];
      sums.push_back(sum);
    }

     // figure out which difference is the smallest
    long long minDiff = std::numeric_limits<long long>::max();

    // Can't do the entire array, have to stop at one less than the max
    for (unsigned int i=0; i<(N-1); i++) {
        // Simplifying this:
        // sums[i] - (sum - sums[i]) = 2*sums[i]-sum;

        long long diff = abs( 2*sums[i] - sum );
        if ( diff < minDiff ) {
            minDiff = diff;
        }

    }

    return minDiff;

}


int main()
{

std::vector<int> A = {3,1,2,4,3};

std::cout << "Missing element:" << solution(A) << std::endl;

return 0;
}