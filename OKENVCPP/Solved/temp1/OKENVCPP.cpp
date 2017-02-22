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
#include <math.h>
#include <iomanip>
#include <vector>
#include "macros.cpp"
#include "Geometry.cpp"

using namespace Geometry;

void CODE() {
	Point *p = new Point();
	while ( cin >> *p ) {
		cout << std::fixed << setprecision( 0 ) << abs( p->X - p->Y ) << endl;
	}
}

int main() {
	ios::sync_with_stdio( false );
	//***RUN***
	CODE();

	//***END****
}