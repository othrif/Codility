// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;


#include <iostream>
#include <vector>
#include <map>

using namespace std;


int solution(int X, vector<int> &A) {
    unsigned int N = A.size();

    // Create a vector of size N initialized to 0, we are done when
    // we have set X elements
    std::vector<char> track(N, 0);
    int numElements = 0;

    for (unsigned int i=0; i<N; i++) {
        if ( !track[A[i]-1] ) {
            numElements++;
            track[A[i]-1] = 1;
        } else {
        }
        if (numElements == X) {
            return i;
        }
    }

    // Didn't find anything
    return -1;
}

int main()
{
std::vector<int> A = {1,3,1,4,2,3,5,4};
std::cout << "Min time:" << solution(5,A) << std::endl;

        return 0;
}