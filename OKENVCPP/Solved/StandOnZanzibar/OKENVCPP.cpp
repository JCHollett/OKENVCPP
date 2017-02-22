// OKENVCPP.cpp : Kattis Environment
//
#include <iostream>
#include <math.h>
#include <queue>
using namespace std;

int main() {
    queue<int> turtles;
    int N , T , LOWER , MAX;
    cin >> N;
    for ( int i = 0; i < N; ++i ) {
        LOWER = MAX = T = 0;
        while ( cin >> T ) {
            if ( T != 0 ) {
                if ( !MAX ) {
                    MAX = T << 1;
                } else {
                    if ( T > MAX ) {
                        LOWER += T - MAX;
                    }
                    MAX = T << 1;
                }
            } else break;
        }
        cout << LOWER << endl;
    }
    system( "pause" );
}