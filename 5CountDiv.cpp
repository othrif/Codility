#include <iostream>
#include <vector>

using namespace std;

int solution(int A, int B, int K)  {

unsigned int count = 0;
for (int i = A; i<=B; i++){
    if(i%K==0)
        count++;
    //std::cout << i << " " << (i%K) << " " << !(i%K) << std::endl;
}

    return count;
}

int main()
{

auto res = solution(6,11,2);
std::cout << res << " " << std::endl;

        return 0;
}