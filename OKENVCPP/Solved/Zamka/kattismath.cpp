#ifndef String_H
#define String_H
#include <string>
#endif
#ifndef Algorithm_H
#define Algorithm_H
#include <algorithm>
#endif // !Algorithm_H
#ifndef sstream_H
#define sstream_H
#include <sstream>
#endif // !sstream_H

using namespace std;
//Early Defines
namespace funcs {
	static int Factorial( int );
	static double Power( double , int );
};
namespace funcsASCII {
	static int charToInt( char );
};
//End Defines
namespace constants {
	using namespace funcs;
	static const double PI = 4 * atan( 1 );
	static double e( int , int );
	double e( int x , int prec ) {
		double numer = Power( x , 0 );
		double denom = Factorial( 0 );
		double X = numer / denom;
		for ( int i = 1; i < prec; ++i ) {
			numer *= x;
			denom *= i;
			X += numer / denom;
		}
		return X;
	}
}
namespace funcs {
	int Factorial( int n ) {
		if ( n == 0 ) {
			return 1;
		} else {
			return n * Factorial( n - 1 );
		}
	}
	double Power( double x , int y ) {
		if ( y == 0 ) {
			return 1;
		} else {
			return x * Power( x , y - 1 );
		}
	}
}
namespace funcsASCII {
	static bool isInteger( const string& s , int &i ) {
		int sign;
		int value = 0;
		auto start = s.begin();
		auto end = s.end();
		if ( *s.begin() == '-' ) {
			sign = -1;
			start++;
		} else if ( isdigit( *s.begin() ) ) {
			sign = 1;
		} else sign = 1;
		bool b = !s.empty() && find_if( start , end , [&]( char c ) {
			if ( isdigit( c ) ) {
				value = (value * 10) + (c - '0');
				return false;
			} else {
				value = 0;
				return true;
			}
		} ) == end;
		if ( b )
			i = value * sign;
		return b;
	}
	static bool isDouble( string str , double& d ) {
		char* endptr = 0;
		d = strtod( str.c_str() , &endptr );

		if ( *endptr != '\0' || endptr == str )
			return false;
		return true;
	}
	static int charToInt( char C ) {
		switch ( C ) {
			case '0':
				return 0;
			case '1':
				return 1;
			case '2':
				return 2;
			case '3':
				return 3;
			case '4':
				return 4;
			case '5':
				return 5;
			case '6':
				return 6;
			case '7':
				return 7;
			case '8':
				return 8;
			case '9':
				return 9;
			default:
				return 0;
		}
	}
	static bool Symbol( char C ) {
		switch ( C ) {
			case '!':
			case '"':
			case '#':
			case '$':
			case '%':
			case '&':
			case '\'':
			case '(':
			case ')':
			case '*':
			case '+':
			case ',':
			case '-':
			case '.':
			case '/':
			case ':':
			case ';':
			case '<':
			case '=':
			case '>':
			case '?':
			case '@':
			case '[':
			case '\\':
			case ']':
			case '^':
			case '_':
			case '{':
			case '}':
			case '~':
				return true;
			default:
				return false;
		}
	}

	static bool lower( char C ) {
		int c = C;
		if ( c > 96 && c < 123 ) return true;
		else return false;
	}
	static bool upper( char C ) {
		int c = C;
		if ( c > 64 && c < 91 ) return true;
		else return false;
	}
	static bool white( char C ) {
		if ( C == '_' ) return true;
		else return false;
	}
}