// OKENVCPP.cpp : Kattis Environment
//
#include <iostream>
#include <string>
#include <map>
using namespace std;
int main() {
    map<int , string> cups;
    int n;
    int radius;
    string x , y;
    cin >> n;
    for ( int i = 0; i < n; ++i ) {
        cin >> x >> y;
        try {
            radius = stoi( y );
            cups.insert( pair<int , string>{radius , x} );
        } catch ( ... ) {
            radius = stoi( x ) / 2;
            cups.insert( pair<int , string> {radius , y} );
        }
    }
    for ( pair<int , string> p : cups ) {
        cout << p.second << '\n';
    }
    system( "pause" );
}