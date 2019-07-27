Tricks to solve codility problems in c++


``` c++

// Size of vector
unsigned int N = A.size();
//Initialize vector to same value
std::vector<int> track(N, 0);

// String length
std::string S = "ksljdf";
int N = S.length();

// Limits to get max possible per type
#include <limits>
long long minDiff = std::numeric_limits<long long>::max();

// Fill vector
vector<long long> sums;
sums.push_back(sum);

// number of bits in N
int numBits = floor(std::log2(N))+1;

// bit manipulation // 1binarygap
if ((N & (1<<i)))

// Max of two values
maxVal = std::max(counters[k], minimum);

// when counting use unsigned
unsigned int count = 0;

// when needing a constant
const int A_VAL = 1;

// Sum all elements: P[k]=A[k]+A[k-1]
std::vector<int> P(n, 0);
std::partial_sum(A.begin(), A.end(), P.begin());

// Loop and print vector content
for (auto a : A)
    std::cout << a << " ";
std::cout << std::endl;

// Switch
switch (val) {
    case 'A':
        aLastIndex = n;
        break;
    case 'C':
        cLastIndex = n;
        break;
    default:
        break;
    }

// pass vector to function from main
int solution(std::vector<int> &A)

// in main
std::vector<int> A = {0,1,0,1,1};
int res = solution(A);

// Sort the array using built in sort, this is O(N*log(N))
// If (0<=P<Q<R), then sort
#include <algorithm>
std::sort(A.begin(), A.end());

// map
std::map<int,int> count;
count[i] = j;
for (auto k : count)
  std::cout << "m[" << k.first << "] = " << k.second << std::endl;

// Multiplying int's should be in long long
int a; int b; long long c = a*b;

// Make sure to include checks for empty strings vectors, etc
if ( N == 0) {
    return 1;
}

// Stack
#include <stack>
stack<char> nest;
nest.push('1');
nest.push('2');
nest.pop() = '2';
nest.pop() = '1';

// Struct with Stack
struct FishStruct {
  int size;
  int direction;
};
std::stack<FishStruct> fishes;




```