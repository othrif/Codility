#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int solution(std::vector<int> &A) {

    int n = A.size();
    unsigned int numPassing = 0;

    // Generate prefix sums
    std::vector<int> P(n, 0);
    std::partial_sum(A.begin(), A.end(), P.begin());
    std::cout << "A: " ;
    for (auto a:A)
        std::cout << a << " ";

    std::cout << "\nP: " ;
    for (auto a:P)
        std::cout << a << " ";
    cout << endl;

    // Go through array and count cars passed for ones starting with 0
    for (int i=0; i<n; i++) {
        if (!A[i]) {
            std::cout << "i=" << i << std::endl;
            int num = P[n-1] - P[i];
            std::cout << "> " << num << " " << P[n-1] << " " <<  P[i] << std::endl;
            numPassing += num;
            if (numPassing > 1000000000) {
                return -1;
            }
        }
    }

    return numPassing;
}

int main()
{
std::vector<int> A = {0,1,0,1,1};
auto res = solution(A);
std::cout << res << " ";
std::cout << std::endl;

        return 0;
}