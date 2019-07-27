// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;



#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <bitset>

int solution(int N) {
    // write your code in C++14 (g++ 6.2.0)
int res = 0;
 std::string  binary = std::bitset<32>(N).to_string();
 binary.erase(0, binary.find_first_not_of('0'));
 std::cout << "binary: " << binary << std::endl;

int tmp=0;
std::vector<int> counts;
for(char& c : binary) {
    //std::cout << c << std::endl;
    if (c != '1')
        tmp++;
    else
        {counts.push_back(tmp); tmp=0;}
}
    res = *std::max_element(std::begin(counts), std::end(counts));

    return res;
}


int main()
{

int N = 1041;
int a = solution(N);
//std::cout << "Longest binary gap of " << N << ": " << a << std::endl;

        return 0;
}