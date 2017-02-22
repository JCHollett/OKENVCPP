// OKENVCPP.cpp : Kattis Environment
//
#include <iostream>
#include <istream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int lines;
    cin >> lines;
    for ( int i = 0; i < lines; i++ ) {
        string x;
        string y;
        cin >> x >> y;
        cout << x << '\n' << y << '\n';
        for ( int j = 0; j < x.length(); j++ ) {
            if ( x[j] == y[j] ) {
                cout << '.';
            } else {
                cout << '*';
            }
        }
        cout << '\n' << '\n';
    }
    system( "pause" );
}