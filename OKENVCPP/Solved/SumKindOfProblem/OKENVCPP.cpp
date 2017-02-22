// OKENVCPP.cpp : Kattis Environment
//
#include <stdio.h>
int isc[3] = { 0,0,0 };
int square( int n ) {
    isc[0] = n;
    isc[1] = 0;
    isc[2] = 0;
    while ( isc[0] > 0 ) {
        if ( (isc[0] & 1) == 1 ) {
            isc[1] += n << isc[2];
        }

        isc[0] >>= 1;
        ++isc[2];
    }

    return isc[1];
}
int main() {
    int* Nkiabc = new int[6];
    scanf( "%d" , &Nkiabc[0] );
    Nkiabc[2] = 0;
    while ( true ) {
        scanf( "%*d %d" , &Nkiabc[1] );
        Nkiabc[4] = square( Nkiabc[1] );
        Nkiabc[5] = Nkiabc[4] + Nkiabc[1];
        printf( "%d %d %d %d\n" , ++(Nkiabc[2]) , Nkiabc[5] >> 1 , Nkiabc[4] , Nkiabc[5] );
        if ( Nkiabc[0] == Nkiabc[2] ) {
            return 0;
        }
    }
}