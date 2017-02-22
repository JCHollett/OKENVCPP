// OKENVCPP.cpp : Kattis Environment
//
#include <iostream>

using namespace std;
int main() {
    int x , y , z = 0;
    scanf( "%d\n%d" , &x , &y );
    z = y - x;
    if ( abs( z ) > 180 ) {
        if ( z < 0 ) {
            z += 360;
        } else {
            z -= 360;
        }
    } else {
        if ( z == -180 ) {
            z = ~z + 1;
        }
    }
    printf( "%d" , z );
#ifdef _DEBUG
    system( "pause" );
#endif
}