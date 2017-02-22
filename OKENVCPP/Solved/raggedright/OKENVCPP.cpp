// OKENVCPP.cpp : Kattis Environment
//

#include <iostream>
#include <iomanip>
#include <ostream>
#include "kattismath.cpp"
#include <string>
#include <vector>
#ifdef _DEBUG
#include <io.h>
int Pause() {
	return std::system( "pause" );
}
#endif // _DEBUG
using namespace std;
//using namespace constants;
//using namespace funcs;
//using namespace IntervalASCII;

int main() {
#ifdef _DEBUG
	if ( !isatty( fileno( stdin ) ) ) {
		cout << "InputFile detected" << endl;
	} else return 0;
#endif
	ios::sync_with_stdio( false );
	string *s = new string();
	vector<int> linelen;
	int max = 0;
	int curlen = 0;
	while ( getline( cin , *s ) ) {
		curlen = s->length();
		if ( curlen > max ) max = curlen;

		linelen.push_back( curlen );
	}
	int score = 0;
	for ( int i = 0; i < linelen.size() - 1; ++i ) {
		score += pow( max - linelen[i] , 2 );
	}
	cout << score << endl;
	//end
#ifdef _DEBUG
	return Pause();
#else
	return 0;
#endif
}