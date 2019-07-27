#include <iostream>
#include <sstream>

using namespace std;

string solution(string &S) {

    int N = S.length();

    int dec_val = stoi(S);
    stringstream tmp;
    tmp << hex << dec_val;
    string hex_val ( tmp.str() );

    string out (N, 'x');
    for (int i=0; i<N; i++) {
        switch (hex_val[i]) {
            case '0':
            out[i] = 'O';
            break;
            case '1':
            out[i] = 'I';
            break;
            default:
            out[i] = hex_val[i];
            break;
        }
    }

    for (auto s:out)
        if(s!='A' && s!='B' && s!='C' && s!='D' && s!='D' && s!='E' && s!='F' && s!='I' && s!='O')
            return "ERROR";
    return out;
}

int main()
{
    string S = "3"; //"256";
    auto res = solution(S);
    cout << res << " " << endl;

    return 0;
}