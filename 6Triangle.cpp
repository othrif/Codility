#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(std::vector<int> &A) {
    int N = A.size();

    if ( N < 3 )
        return 0;

    std::sort(A.begin(), A.end());

    for (int i=0; i<(N-2); i++) {
        long long A_p = A[i+0];
        long long A_q = A[i+1];
        long long A_r = A[i+2];
        if ( ((A_p+A_q) > A_r ) &&
           ((A_q+A_r) > A_p ) &&
           ((A_r+A_p) > A_q ) ) {
                 // return 1 the instant we find our first triplet
           return 1;
   }
}

return 0;
}

int main()
{
    std::vector<int> A = {10,2,5,1,8,20};
//std::vector<int> A = {10,50,5,1};
    auto res = solution(A);
    std::cout << res << " " << std::endl;

    return 0;
}