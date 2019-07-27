#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <limits>

using namespace std;

// Problem:
// DNA sequence:  A, C, G, T
// Impact factor: 1, 2, 3, 4
// DNA string of N char
// M queries to find minimal impact factor between P[K] and Q[K]

vector<int> solution(string &S, vector<int> &P, vector<int> &Q) {
    const int A_VAL = 1;
    const int C_VAL = 2;
    const int G_VAL = 3;
    const int T_VAL = 4;

    // Have to track these values separately, this costs us space complexity
    // but saves us time complexity.  Can't do this simply with prefix_sums with
    // single  vector of fundamental type (or at least I am not clever enough to see it)
    int N = S.size();
    vector<int> A(N, -1);
    vector<int> C(N, -1);
    vector<int> G(N, -1);
    vector<int> T(N, -1);

    int aLastIndex = -1;
    int cLastIndex = -1;
    int gLastIndex = -1;
    int tLastIndex = -1;
    std::cout << S << std::endl;
    std::cout << "A  " << "C  " << "G  " << "T  " << std::endl;
    // Complexity of this operation is O(N)
    for (int n=0; n<N; n++) {
        switch (S[n]) {
            case 'A':
                aLastIndex = n;
                break;
            case 'C':
                cLastIndex = n;
                break;
            case 'G':
                gLastIndex = n;
                break;
            case 'T':
                tLastIndex = n;
                break;
            default:
                break;
        }
        A[n] = aLastIndex;
        C[n] = cLastIndex;
        G[n] = gLastIndex;
        T[n] = tLastIndex;
        std::cout << n << " " << S[n] << " " << A[n] << " " << C[n] << " " << G[n] << " " << T[n] << std::endl;
    }

    int M = P.size();
    vector<int> result(M, 0);

    // Complexity of this operation is O(M+1) ==> O(M)
    for (int m=0; m<M; m++) {
        int l = P[m];
        int r = Q[m];
        std::cout << "l/r " << l << " " << r << std::endl;

        // Check if the last seen index is greater or less than the left value
        // If it is then that is the nucleotide for this space.  Done in order
        // of lowest to highest impact factor.
        // LOGIC:
        //   1. A[r] cannot be greater than the n at that location.
        //      See assignment above, so no need to check it separately
        //   2. A[r] will be equal to l if A was last seen at index l
        //   3. A[r] will be less than l if A was last seen before index l
        //   4. A[r] will be greater than l if A was seen after l up to and including r
        if ( A[r] >= l ) {
            result[m] = A_VAL;
        } else if ( C[r] >= l ) {
            result[m] = C_VAL;
        } else if ( G[r] >= l ) {
            result[m] = G_VAL;
        } else if ( T[r] >= l ) {
            result[m] = T_VAL;
        }
    }

    return result;
}

  int main()
  {

    string S = "CAGCCTA";
    vector<int> P = {2,5,0};
    vector<int> Q = {4,5,6};

    auto res = solution(S,P,Q);
    for (auto a : res)
        std::cout << a << " ";
    std::cout << std::endl;

    return 0;
}