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
	const int OFFSET = pow( 2 , 31 );
	int N = 0;
	int Case = 1;
	string* x = new string();
	while ( getline( cin , *x ) ) {
		stringstream ss{ *x };
		int M = 0;
		ss >> M;
		int MIN = OFFSET - 1;
		int MAX = -OFFSET;
		while ( --M >= 0 ) {
			ss >> N;
			if ( N > MAX )
				MAX = N;
			if ( N < MIN )
				MIN = N;
		}
		cout << "Case " << Case++ << ": " << MIN << " " << MAX << " " << (MAX - MIN) << endl;
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