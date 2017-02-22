// OKENVCPP.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include <math.h>

using namespace std;
int main() {
	int N = 0;
	cin >> N;
	cin.get();
	while ( --N >= 0 ) {
		string *s = new string();
		getline( cin , *s );
		int strlen = s->length();
		int dimXY = floor( sqrt( strlen - 1 ) ) + 1;

		int dim = pow( dimXY , 2 );
		char* flip = new char[dim];
		const char *c = s->c_str();

		for ( int i = dimXY - 1; i >= 0; --i ) {
			for ( int j = 0; j < dimXY; ++j ) {
				if ( ((dimXY - 1 - i)*dimXY + j) < strlen ) {
					*(flip + (i + j*dimXY)) = *c++;
				} else {
					*(flip + (i + j*dimXY)) = '*';
				}
			}
		}
		for ( char* i = flip; i < flip + dim; ++i ) {
			if ( *i != '*' ) {
				cout << *i;
			}
		}
		cout << endl;
	}
	return 0;
}