#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int solution(vector<int> &A) {

    int N = A.size();
    sort(A.begin(), A.end(), greater<int>());
    vector<int> sub(N, 0);
    partial_sum(A.begin(), A.end(), sub.begin());

    int i=0;
    for(; i<N; i++){
        if(sub[i]>5000){
            break;
        }
    }

    return i-1;
}

int main()
{
    vector<int> A = {4650,150,150,150};
    auto res = solution(A);
    cout << res << " " << endl;

    return 0;
}