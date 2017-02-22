// OKENVCPP.cpp : Kattis Environment
//

#include "kattismath.cpp"

//DEFINES
#define endl "\n";
#define nl "\n";
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
	int N = 0;

	cin >> N;
	vector<Shape*> data;
	incfor( i , 0 , N ) {
		string instr;
		cin >> instr;
		if ( instr == "rectangle" ) {
			Rectangle* R = new Rectangle();
			cin >> *R;
			data.push_back( R );
		}
		if ( instr == "circle" ) {
			Circle* C = new Circle();
			cin >> *C;
			data.push_back( C );
		}
	}

	cin >> N;
	incfor( j , 0 , N ) {
		int hits = 0;
		Point p;
		cin >> p;
		for ( auto i = data.begin(); i != data.end(); ++i ) {
			if ( (**i).isInside( p ) ) {
				hits++;
			}
		}
		cout << hits << endl;
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