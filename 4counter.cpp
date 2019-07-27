// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;


#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(int N, vector<int> &A) {
    unsigned int n = A.size();
    std::vector<int> counter(N, 0);
    int max = -1;
    for (unsigned int i=0; i<n; i++) {
        if(A[i] && A[i]<=N){
            counter[A[i]]++;
            if(counter[A[i]]>max)
                max=counter[A[i]];
        }
        else if (A[i]==N+1){
            //counter set to max
           // counter(N, max);
           std::fill (counter.begin(),counter.end(),max);
        }
        for(auto s : counter) std::cout << s << " "; //
        std::cout << std::endl;
    }


    return counter;
}

int main()
{
std::vector<int> A = {3,4,4,6,1,4,4};
auto res = solution(5,A);
for(auto s : res) std::cout << s << std::endl;

        return 0;
}