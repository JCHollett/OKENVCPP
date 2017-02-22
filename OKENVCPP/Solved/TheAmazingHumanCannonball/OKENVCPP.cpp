// OKENVCPP.cpp : Kattis Environment
//
#include <iostream>
#include <math.h>
using namespace std;

const double GRAVITY = 9.81;

double rads( double degs ) {
    return degs * 4 * atan( 1 ) / (180);
}

double time( double x , double v_o , double theta ) {
    return x / (v_o * cos( theta ));
}
double height( double t , double v_o , double theta ) {
    return v_o * t * sin( theta ) - 0.5 * GRAVITY * pow( t , 2 );
}

int main() {
    double N , v_o , theta , x , h2 , h1;
    cin >> N;
    for ( int i = 0; i < N; ++i ) {
        cin >> v_o >> theta >> x >> h1 >> h2;
        theta = rads( theta );
        double t = time( x , v_o , theta );
        double y = height( t , v_o , theta );
        if ( y >= h1 + 1 && y <= h2 - 1 ) {
            cout << "Safe" << endl;
        } else {
            cout << "Not Safe" << endl;
        }
    }
    system( "pause" );
}