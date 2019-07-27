// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;



#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

int solution(std::vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int i = 1;

    sort(A.begin(), A.end());
    for (auto a : A)
    {
        std::cout << "checking " << a << std::endl;
        if ( a <= 0) continue;
        else if ( a==i ) {i++;std::cout << i<< std::endl;}
    }

    return i;
}


int main()
{

std::vector<int> A = {1, 3, 6, 4, 1, 2};
int a = solution(A);
std::cout << "Smallest integer is " << a << std::endl;

        return 0;
}