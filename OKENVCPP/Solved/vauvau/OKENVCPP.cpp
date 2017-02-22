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

void DogTest( bool dog1 , bool dog2 ) {
	if ( dog1 || dog2 ) {
		if ( dog1 && dog2 ) {
			cout << "both" << endl;
		} else cout << "one" << endl;
	} else cout << "none" << endl;
}
void CODE() {
	int A , B , C , D , P , M , G;
	cin >> A >> B >> C >> D >> P >> M >> G;
	bool dog1 = (P - 1) % (A + B) <= A - 1;
	bool dog2 = (P - 1) % (C + D) <= C - 1;
	DogTest( dog1 , dog2 );
	dog1 = (M - 1) % (A + B) <= A - 1;
	dog2 = (M - 1) % (C + D) <= C - 1;
	DogTest( dog1 , dog2 );
	dog1 = (G - 1) % (A + B) <= A - 1;
	dog2 = (G - 1) % (C + D) <= C - 1;
	DogTest( dog1 , dog2 );
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