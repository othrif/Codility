#include <iostream>

using namespace std;

int solution(string &S) {
    int N = S.length();
    int count = 0;
    for(int i = 0; i<N; i++){
        for(int j = 0; j<N-i+1; j++){
            if(S[i] == S[i+j]){
                count++;
            }
            else
                break;
        }
    }
    return count;
}

int main()
{
    string S = "zzzyz";
    auto res = solution(S);
    cout << res << " " << endl;

    return 0;
}