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

struct Point {
	int X , Y;
	inline Point operator+=( Point A ) {
		X += A.X;
		Y += A.Y;
		return *this;
	};
	friend ostream& operator<<( ostream& os , const Point& p ) {
		os << p.X << " " << p.Y;
		return os;
	}
};
int caseX( char quad ) {
	switch ( quad ) {
		case '0':
		case '2':
			return 0;
		case '1':
		case '3':
			return 1;
		default:
			return -1;
	}
}
int caseY( char quad ) {
	switch ( quad ) {
		case '0':
		case '1':
			return 0;
		case '2':
		case '3':
			return 1;
		default:
			return -1;
	}
}
int main() {
	string *s = new string();
	getline( cin , *s );
	int length = pow( 2 , s->length() - 1 );
	Point P{ 0,0 };
	for ( char& c : *s ) {
		P += Point{ length * caseX( c ) , length * caseY( c ) };
		length /= 2;
	}

	cout << s->length() << " " << P << endl;
#ifdef _DEBUG
	return Pause();
#else
	return 0;
#endif
}