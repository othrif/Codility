#include <iostream>
#include <vector>
#include <map>

using namespace std;

int solution(std::vector<int> &A) {
    int N = A.size();
    std::map<int,int> count;

    for(int i=0; i<N; i++)
        count[A[i]]++;

    return count.size();
}

int main()
{

std::vector<int> A = {2,1,1,2,3,1};
auto res = solution(A);
std::cout << res << " " << std::endl;

return 0;
}