#include <iostream>
#include <vector>
#include <limits>

using namespace std;


int solution(int X) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> F = {0, 1};
    int i = 2;
    int minDist = numeric_limits<int>::max();;
    while ( (F[i-1]+F[i-2]) < 1e6 ) {
        F.push_back(F[i-1] + F[i-2]);
        if(abs(X-F[i]) < minDist)
            minDist = abs(X-F[i]);
        i++;
    }

    return minDist;
}

int main()
{
auto res = solution(832043);
cout << res << " " << endl;

        return 0;
}