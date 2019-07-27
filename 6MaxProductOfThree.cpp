#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

using namespace std;

int solution(std::vector<int> &A) {
    int N = A.size();

    // Sort the array using built in sort, this is O(N*log(N))
    std::sort(A.begin(), A.end());
    for (auto a : A)
        std::cout << a << " ";
    std::cout << std::endl;
    if ( N == 3 ) {
        return (A[0] * A[1] * A[2]);
    }

    long long int X = A[0] * A[1];
    long long int Y = A[N-3] * A[N-2];
    long long int Z = A[N-1];

    return ( ((X*Z)>(Y*Z)) ? (X*Z) : (Y*Z) );


}

int main()
{
std::vector<int> A = {2,-2,5,6};
auto res = solution(A);
std::cout << res << " " << std::endl;

        return 0;
}