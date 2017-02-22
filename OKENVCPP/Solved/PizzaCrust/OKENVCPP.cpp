// OKENVCPP.cpp : Kattis Environment
//
#include <stdio.h>
#include <math.h>
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double pi = 4 * atan( 1 );
    int R = 0.0 , C = 0.0;
    scanf( "%d %d" , &R , &C );
    double cheese = pi * pow( R - C , 2 ) , pizza = pi * pow( R , 2 );

    cout << std::setprecision( 6 ) << std::fixed << 100 * (cheese / pizza) << endl;
}