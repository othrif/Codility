#include <iostream>
#include <string>
#include <stack>

using namespace std;

// Problem:
// S consists of only "(", "{", "[", "]", "}" and/or ")".
// Return 1 if nested, otherwise 0

int solution(string &S) {
    std::cout << S << std::endl;
    int N = S.length();

    // Quick check for empty string
    if ( N == 0) {
        return 1;
    }

    // Any nested string is a pair, so odd length strings are improperly nested
    if ( N%2 ) {
        return 0;
    }

    stack<char> nest;
    char c;
    for (int i=0; i<N; i++) {
        std::cout << "Look at: " << S[i] << std::endl;
        switch (S[i]) {
            case '{':
            case '[':
            case '(':
                nest.push(S[i]);

                std::cout << S[i] << std::endl;
                break;
            case '}':
                c = nest.top();
                std::cout << ">" << c << std::endl;
                nest.pop();
                if ( c != '{') {
                    return 0;
                }
                break;
            case ']':
                c = nest.top();
                std::cout << ">" << c << std::endl;
                nest.pop();
                if ( c != '[') {
                    return 0;
                }
                break;
            case ')':
                c = nest.top();
                std::cout << ">" << c << std::endl;
                nest.pop();
                if ( c != '(') {
                    return 0;
                }
                break;
            default: break;
        }
    }

    // Some elements were left hanging!
    if (nest.size() > 0 ) {
        return 0;
    }

    // No errors, so good!
    return 1;


    return 0;
}

int main()
{
 string S = "{[((]}";
 auto res = solution(S);
std::cout << res << " " << std::endl;

        return 0;
}