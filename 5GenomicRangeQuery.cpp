#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <limits>

using namespace std;

// Problem:
// DNA sequence:  A, C, G, T
// Impact factor: 1, 2, 3, 4
// DNA string of N char
// M queries to find minimal impact factor between P[K] and Q[K]

vector<int> solution(string &S, vector<int> &P, vector<int> &Q){
    int M = P.size();
    if(Q.size() != M)
        std::cout << "Problem!" << std::endl;
    std::vector<int> minImpact(M, 0);

    std::map<char,int> count;
    count['A'] = 1;
    count['C'] = 2;
    count['G'] = 3;
    count['T'] = 4;

    for(auto s:S)
        std::cout << s << " ";
    std::cout << std::endl;

    for(auto c:count)
        std::cout << c.first << " " << c.second << std::endl;
    std::cout << std::endl;

    for (int i=0; i<M; i++) {
        int minVal = std::numeric_limits<int>::max();
        for(int j=P[i]; j<=Q[i]; j++)
          {if( count[S[j]] <  minVal)
              minVal = count[S[j]];
          }
          minImpact[i] = minVal;
      }



      return minImpact;
  }

  int main()
  {

    string S = "CAGCCTA";
    vector<int> P = {2,5,0};
    vector<int> Q = {4,5,6};

    auto res = solution(S,P,Q);
    for (auto a : res)
        std::cout << a << " ";
    std::cout << std::endl;

    return 0;
}