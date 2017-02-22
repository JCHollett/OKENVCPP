// OKENVCPP.cpp : Kattis Environment
//

#include <iostream>
#include <iomanip>
#include <ostream>
#include "kattismath.cpp"
#include <string>
#ifdef _DEBUG
int Pause() {
	return std::system( "pause" );
}
#endif // _DEBUG
using namespace std;
using namespace constants;
using namespace funcs;
using namespace IntervalASCII;

int main() {
	string *str = new string();
	getline( cin , *str );
	double strlen = str->length();
	int w = 0;
	int s = 0;
	int u = 0;
	int l = 0;
	for ( char& c : *str ) {
		if ( white( c ) ) w++;
		else if ( lower( c ) ) l++;
		else if ( upper( c ) ) u++;
		else s++;
	}
	cout << setprecision( 15 ) << w / strlen << endl << l / strlen << endl << u / strlen << endl << s / strlen << endl;
#ifdef _DEBUG
	return Pause();
#else
	return 0;
#endif
}