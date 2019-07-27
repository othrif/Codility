// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;


#include <iostream>
#include <vector>
#include <map>

int solution(std::vector<int> &A) {

     int res =0;
     std::map<int,int> count;

     for (auto a:A){
        count[a]++;
    }

    for(auto c : count)
        if(c.second%2!=0)
        {
            res = c.first ;
            break;
        }

    return res;
}


int main()
{

std::vector<int> A = {9,3,9,3,9,7,9};
int a = solution(A);
std::cout << "Unpaired element " << a << std::endl;

        return 0;
}