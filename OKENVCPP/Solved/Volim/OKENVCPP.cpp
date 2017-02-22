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
//using namespace constants;
//using namespace funcs;
//using namespace IntervalASCII;

int main() {
	int MAX = 210;
	int i = 0;
	int N = 0;
	int X = 0;
	char A = '\0';
	cin >> i;
	cin >> N;
	while ( --N >= 0 ) {
		cin >> X >> A;
		if ( (MAX -= X) < 0 ) {
			cout << i << endl;
			break;
		}
		switch ( A ) {
			case 'T':
				if ( i == 8 ) { i = 1; } else i++;
			default:
				break;
		}
	}
	//end
#ifdef _DEBUG
	return Pause();
#else
	return 0;
#endif
}