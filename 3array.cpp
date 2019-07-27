// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    unsigned int size = A.size();
    unsigned int mis  = 0;

    sort(A.begin(),A.end());

    for (unsigned int i=0; i<size-1; i++) {
        if(A[i+1]>(A[i]+1)){
            mis = A[i]+1;
            break;
        }

    }

    return mis;
}



int main()
{

std::vector<int> A = {2,3,1,5};

std::cout << "Missing element:" << solution(A) << std::endl;

        return 0;
}