// OKENVCPP.cpp : Kattis Environment
//

#include <iostream>
#include <math.h>
#include <iomanip>
#include <ostream>
#include "kattismath.cpp"

#ifdef _DEBUG
int Pause() {
	return std::system( "pause" );
}
#endif // _DEBUG
using namespace std;
using namespace constants;
using namespace IntervalASCII;
void print( double& r , int& m , int& c ) {
	if ( r == 0 ) return;
	cout << std::setprecision( 10 ) << PI*pow( r , 2 ) << " " << (pow( 2 * r , 2 ) *  c) / m << endl;
}

int main() {
	double r = 0;
	int m = 0;
	int c = 0;
	do {
		cin >> r >> m >> c;
		print( r , m , c );
	} while ( r != 0 );

#ifdef _DEBUG
	return Pause();
#else
	return 0;
#endif
}