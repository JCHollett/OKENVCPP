// OKENVCPP.cpp : Kattis Environment
//
#include <iostream>
#include "kattismath.cpp";
using namespace std;

int SumOfDigits( string x ) {
    int sum = 0;
    for ( char c : x ) {
        sum += funcsASCII::charToInt( c );
    }
    return sum;
}

int main() {
    int L , D , X , N = 0 , M = 0;
    cin >> L >> D >> X;
    for ( int i = 0; i + L <= D; ++i ) {
        if ( !N && SumOfDigits( to_string( i + L ) ) == X ) {
            N = i + L;
        }
        if ( !M && SumOfDigits( to_string( D - i ) ) == X ) {
            M = D - i;
        }
        if ( N && M ) {
            break;
        }
    }
    cout << N << '\n' << M << '\n';
    system( "pause" );
}