#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int solution(vector<int> &A) {
    // Brute force method.
    // Calculate and list all possible slices, keep positions of smallest one,
    // return only smallest
    // This is O(N^2)
    int minP = std::numeric_limits<int>::max();
    int minQ = std::numeric_limits<int>::max();
    double minAverage = std::numeric_limits<double>::max();
    int N = A.size();

    for (int p=0; p<N; p++) {
        int sum = A[p];
        for (int q=(p+1); q<N; q++) {
            sum += A[q];
            double average = (double) sum/(q-p+1);
            //cout << "slice(" << p << ", " << q << ") = " << average << endl;
            if (average < minAverage) {
                minAverage = average;
                minP = p;
                minQ = q;
                //cout << "  ** new minimum average found" << endl;
            } else if (average == minAverage) {
                if (p < minP) {
                    // Q isn't really q but I want to keep the pair
                    minP = p;
                    minQ = q;
                    cout << "  -- setting new minP" << endl;
                }
            }
        }
    }

    //cout << "min average found at slice (" << minP << ", " << minQ << ") = " << minAverage << endl;

    return minP;
}

int main()
{
std::vector<int> A = {4,2,2,5,1,5,8};
auto res = solution(A);
std::cout << res << " " << std::endl;

        return 0;
}