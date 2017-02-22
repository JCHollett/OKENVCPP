// OKENVCPP.cpp : Kattis Environment
//
#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int N , i = 0;
    double x;
    cin >> N;
    for ( i; i < N; ++i ) {
        cin >> x;
        cout << ceil( x / 400 ) << endl;
    }
    system( "pause" );
}