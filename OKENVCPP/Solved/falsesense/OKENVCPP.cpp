// OKENVCPP.cpp : Kattis Environment
//

//#include "kattismath.cpp"
//#include "Geometry.cpp"
using namespace std;
#include <iostream>
#include <map>
#include <string>
#include <sstream>
#include <deque>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "macros.cpp"

string toStr( char c , int &i ) {
	switch ( c ) {
		case'A':
			i = 2;
			return ".-";
		case'B':
			i = 4;
			return "-...";
		case'C':
			i = 4;
			return "-.-.";
		case'D':
			i = 3;
			return "-..";
		case'E':
			i = 1;
			return ".";
		case'F':
			i = 4;
			return "..-.";
		case'G':
			i = 3;
			return "--.";
		case'H':
			i = 4;
			return "....";
		case'I':
			i = 2;
			return "..";
		case'J':
			i = 4;
			return ".---";
		case'K':
			i = 3;
			return "-.-";
		case'L':
			i = 4;
			return ".-..";
		case'M':
			i = 2;
			return "--";
		case'N':
			i = 2;
			return "-.";
		case'O':
			i = 3;
			return "---";
		case'P':
			i = 4;
			return ".--.";
		case'Q':
			i = 4;
			return "--.-";
		case'R':
			i = 3;
			return ".-.";
		case'S':
			i = 3;
			return "...";
		case'T':
			i = 1;
			return "-";
		case'U':
			i = 3;
			return "..-";
		case'V':
			i = 4;
			return "...-";
		case'W':
			i = 3;
			return ".--";
		case'X':
			i = 4;
			return "-..-";
		case'Y':
			i = 4;
			return "-.--";
		case'Z':
			i = 4;
			return "--..";
		case'_':
			i = 4;
			return "..--";
		case',':
			i = 4;
			return ".-.-";
		case'.':
			i = 4;
			return "---.";
		case'?':
			i = 4;
			return "----";
		default:
			i = 0;
			return "\0";
	}
}
char toChar( int i ) {
	switch ( i ) {
		case 0: return 'H';
		case 1: return 'B';
		case 2: return 'L';
		case 3: return 'Z';
		case 4: return 'F';
		case 5: return 'C';
		case 6: return 'P';
		case 7: return '.';
		case 8: return 'V';
		case 9: return 'X';
		case 10: return ',';
		case 11: return 'Q';
		case 12: return '_';
		case 13: return 'Y';
		case 14: return 'J';
		case 15: return '?';
		case 16: return 'S';
		case 17: return 'D';
		case 18: return 'R';
		case 19: return 'G';
		case 20: return 'U';
		case 21: return 'K';
		case 22: return 'W';
		case 23: return 'O';
		case 24: return 'I';
		case 25: return 'N';
		case 26: return 'A';
		case 27: return 'M';
		case 28: return 'E';
		case 29: return 'T';
		default: return '\0';
	}
}

void CODE() {
	char *s = new char();
	string *bs = new string();
	ostringstream builder;
	deque<int> lens;
	int i , j , max , index , len = 0;
	while ( std::cin ) {
		while ( std::cin.peek() != '\n' ) {
			std::cin >> *s;
			builder << toStr( *s , len );
			lens.push_front( len );
		}
		const char *istr = (*bs = builder.str()).c_str();
		len = lens.size();
		for ( i = 0; i < len; ++i ) {
			index = 30;
			max = lens[i];
			for ( j = 0; j < max; ++j ) {
				index -= pow( 2 , j ) * (*istr++ - ',');
			}
			std::cout << toChar( index );
		}
		std::cout << endl;
		lens.clear();
		builder.str( "" );
		std::cin.get();
		if ( std::cin.peek() == -1 ) return;
	}
}

int main() {
	ios::sync_with_stdio( false );
	//***RUN***

	CODE();

	//***END****
}