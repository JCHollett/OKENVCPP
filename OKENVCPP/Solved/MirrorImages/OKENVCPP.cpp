// OKENVCPP.cpp : Kattis Environment
//
#include <iostream>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;
int main() {
    int N , R , C;
    string s;
    cin >> N;
    stack<string> str;
    for ( int i = 0; i < N; ++i ) {
        cin >> R >> C;
        for ( int j = 0; j < R; ++j ) {
            cin >> s;
            str.push( s );
        }
        cout << "Test " << i + 1 << endl;
        while ( !str.empty() ) {
            s = str.top();
            reverse( s.begin() , s.end() );
            cout << s << endl;
            str.pop();
        }
    }
    system( "pause" );
}