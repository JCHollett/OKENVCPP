// OKENVCPP.cpp : Kattis Environment
//
#include <iostream>;
using namespace std;

int main() {
    int d1;
    int d2;
    int x;
    cin >> x;
    d1 = x;
    cin >> x;
    if ( d1 > x ) {
        d2 = d1;
        d1 = x;
    } else {
        d2 = x;
    }
    for ( int i = d1 + 1; i <= d2 + 1; ++i ) {
        cout << i << "\n";
    }
    system( "pause" );
}