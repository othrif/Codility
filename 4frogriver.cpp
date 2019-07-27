// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;


#include <iostream>
#include <vector>
#include <map>

using namespace std;


// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int X, vector<int> &A) {
    unsigned int N = A.size();

    std::map<int,int> ord;


    for (unsigned int i=0; i< N; i++) {
        if(!ord.count(A[i])){
            ord[A[i]] = i;
        }
        else{
            ord[A[i]] = i;
        }
    }

//for (auto k : ord)
  //  std::cout << "m[" << k.first << "] = " << k.second << std::endl;

    return ord[X];
}

int main()
{
std::vector<int> A = {1,3,1,4,2,3,5,4};
std::cout << "Min time:" << solution(5,A) << std::endl;

        return 0;
}