// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;


#include <iostream>
#include <cmath>

int solution(int N) {

     int numBits = floor(std::log2(N))+1; // number of bits in N


    bool foundOne = false;
    int maximumGap = 0;
    int possibleGap = 0;

    for (int i=0; i<numBits; i++) {
        // find a 0
        if ( foundOne && !(N & (1<<i))) {
            possibleGap++;
        } else if ((N & (1<<i))) {
            // If we found a one, set the gap length and reset the
            // current counter
            if (foundOne) {
                if (possibleGap > maximumGap) {
                    maximumGap = possibleGap;
                }
                possibleGap = 0;
            }
            foundOne = true;
        }
    }

    return maximumGap;
}


int main()
{

int N = 1041;
int a = solution(N);
std::cout << "Longest binary gap of " << N << ": " << a << std::endl;

        return 0;
}