// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;


#include <iostream>
#include <vector>
#include <map>

int solution(std::vector<int> &A) {

    unsigned int size = A.size();
    unsigned long long int sum = 0;

    for (unsigned int i=0; i<size; i++) {
        // A xor B xor A = B
        sum ^= A[i];
    }

    return sum;
}


int main()
{

std::vector<int> A = {9,3,9,3,9,7,9};
int a = solution(A);
std::cout << "Unpaired element " << a << std::endl;

        return 0;
}