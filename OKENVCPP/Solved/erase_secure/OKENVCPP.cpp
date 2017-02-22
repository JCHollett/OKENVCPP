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
	int N = 0;
	cin >> N;
	string *line = new string();
	string *line2 = new string();
	getline( cin , *line );
	getline( cin , *line );
	getline( cin , *line2 );
	auto iter = line->begin();
	auto iter2 = line2->begin();
	if ( N % 2 == 1 ) {
		for ( int i = 0; i < line->length(); ++i ) {
			if ( (*iter == *iter2) ) {
				cout << "Deletion failed" << endl;
				return;
			}
			iter++;
			iter2++;
		}
		cout << "Deletion succeeded" << endl;
	} else {
		for ( int i = 0; i < line->length(); ++i ) {
			if ( (*iter != *iter2) ) {
				cout << "Deletion failed" << endl;
				return;
			}
			iter++;
			iter2++;
		}
		cout << "Deletion succeeded" << endl;
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