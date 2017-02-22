// OKENVCPP.cpp : Kattis Environment
//

#include "kattismath.cpp"

//DEFINES
#define endl "\n";
#define nl "\n";
#define iter(var,data) for(auto var = data.begin(); var != data.end(); ++var)
#define iterrev(var,data) for(auto var = data.end(); var != data.begin(); ++var)
#define incfor(var,x,y) for(int var = x; var < y; ++var)
#define decfor(var,x,y) for(int var = y; var >= y; --var)
#define range(x) x.begin(), x.end()

#ifdef PRE_KATTIS
#include <io.h>
int Pause() {
	return std::system( "pause" );
}
#endif // PRE_KATTIS
using namespace std;
using namespace constants;
using namespace funcs;
using namespace funcsASCII;
using namespace Geometry;

void CODE() {
	Point *p;
	Circle *C;

	while ( true ) {
		p = new Point();
		C = new Circle();
		if ( cin >> *C >> *p )
			if ( C != nullptr && C->isInside( *p ) ) {
				double theta = 2 * acos( p->length() / C->getRadius() );
				double A = 0.5 * pow( C->getRadius() , 2 )*(theta - sin( theta ));
				double A2 = PI*pow( C->getRadius() , 2 ) - A;
				cout << A2 << " " << A << endl;
			} else {
				cout << "miss" << endl;
			} else break;
	}
}
#ifdef PRE_KATTIS
int TEST() {
	system( "pause" );
	return 0;
}
#endif
int main() {
	ios::sync_with_stdio( false );
#ifdef PRE_KATTIS
	if ( !isatty( fileno( stdin ) ) ) {
		cout << "InputFile detected" << endl;
	} else {
		cout << "No InputFile detected: Defaulting to Test" << endl;
		CODE();
		return TEST();
	}
#endif
	//***RUN***

	CODE();

	//***END****
}