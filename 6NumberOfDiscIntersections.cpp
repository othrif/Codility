#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(std::vector<int> &A) {
    int N = A.size();
    unsigned int xing = 0;


    for (int i=0; i<N; i++) {
      for (int j=i+1; j<N; j++){
        std::cout << i << ":" << i-A[i]  << " " << i+A[i] << "   ||  " << j << ":" << j-A[j]  << " " << j+A[j] <<  " > Intersects: " << ( (j-A[j] < i+A[i] && i+A[i] < j+A[j]) || (i-A[i] < j+A[j] && j+A[j] < i+A[i]) ) << std::endl;
            // [ j-A[j],j+A[j] ], [ i-A[i],i+A[i] ]
        if( (j-A[j] <= i+A[i] && i+A[i] <= j+A[j]) || (i-A[i] <= j+A[j] && j+A[j] <= i+A[i]) )
            xing++;
        if(xing>10000000)
            return -1;
    }
}


return xing;
}

int main()
{
    std::vector<int> A = {1,5,2,1,4,0};
    auto res = solution(A);
    std::cout << res << " " << std::endl;

    return 0;
}