// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;


#include <iostream>
#include <math.h>

using namespace std;


int solution(int X, int Y, int D) {
    // write your code in C++14 (g++ 6.2.0)

    double numJumps = (( (double)Y)-( (double) X) )/ ((double)D);
    return ( ceil(numJumps) );

}


int main()
{

std::cout << "number of frog leaps:" << solution(10,85,30) << std::endl;

        return 0;
}