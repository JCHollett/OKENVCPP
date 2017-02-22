// OKENVCPP.cpp : Kattis Environment
//
#include <math.h>
#include <iostream>
#include <set>

using namespace std;
int main() {
    set<int> rooms; set<int>::iterator u; set<int>::iterator l;
    int r = 0 , n = 0 , x = 0;
    bool found = false;
    cin >> r >> n;
    while ( --n >= 0 ) {
        cin >> x;
        rooms.insert( x );
    }
    if ( rooms.size() == 0 ) {
        x = 1;
        found = true;
    } else {
        u = --rooms.end();
        if ( *u != r ) {
            x = r;
            found = true;
        } else {
            x = 1;
            for ( l = rooms.begin(); l != u; ++l ) {
                if ( x != *l ) {
                    found = true;
                    break;
                } else {
                    ++x;
                }
            }
        }
    }
    if ( !found ) {
        if ( x < r ) {
            printf( "%d" , x );
        } else
            printf( "too late" );
    } else {
        printf( "%d" , x );
    }
#ifdef _DEBUG
    printf( "\n\n\n" );
    system( "pause" );
#endif
    return 0;
}