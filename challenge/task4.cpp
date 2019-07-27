#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<int> &A) {
    int N = A.size();


    int count=1;
    bool keepGoing=true;;
    while(keepGoing){
        keepGoing = false;
        for (int i=1; i<N-1; i++) {
            if(A[i-1]>A[i] && A[i+1]>A[i]){
                A[i]=A[i]+1;
                keepGoing |= true;
            }
            else if (A[i-1]<A[i] && A[i+1]<A[i]){
                A[i]=A[i]-1;
                keepGoing |= true;
            }
        }
        count++;
    }

    return A;
}

int main()
{
    vector<int> A = {1,6,3,4,3,5};
    //vector<int> A = {100,50,40,30};
    auto res = solution(A);
    for(auto r:res)
        cout << r << " ";
    cout << endl;

    return 0;
}