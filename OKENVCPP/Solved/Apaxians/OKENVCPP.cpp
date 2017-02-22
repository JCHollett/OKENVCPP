// OKENVCPP.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <math.h>
#include <string>

#ifdef _DEBUG
int Pause() {
	return std::system( "pause" );
}
#endif // _DEBUG
using namespace std;
int main() {
	string *s = new string();
	getline( cin , *s );
	char X = '\0';
	for ( char& c : *s ) {
		if ( X != c ) {
			cout << (X = c);
		}
	}
	cout << endl;
#ifdef _DEBUG
	return Pause();
#else
	return 0;
#endif
}