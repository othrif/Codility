#include <iostream>
#include <vector>

using namespace std;

int solution(std::vector<int> &A) {
    int N = A.size();
    unsigned int count = 0;


    for (int i=0; i<N; i++)
        for (int j=i; j<N; j++){
            if(A[i]+A[j] == 1 && A[i]<A[j] )
                count++;

    }

    if (count > 1e6)
    return -1;

    return count;
}

int main()
{
std::vector<int> A = {0,1,0,1,1};
auto res = solution(A);
std::cout << res << " ";
std::cout << std::endl;

        return 0;
}