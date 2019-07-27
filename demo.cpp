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


    while (i>0)
    {
        auto res = std::find(std::begin(A), std::end(A), i);
        if (res == std::end(A)){
            std::cout << "Smallest integer is: " << i << std::endl;
            break;}
        i++;
    }

    std::cout << "Minimum is: " << *std::min_element(A.begin(), A.end())<< std::endl;

    return 0;
}


int main()
{

std::vector<int> A = {1,-2,3,4};
int a = solution(A);



        return 0;
}