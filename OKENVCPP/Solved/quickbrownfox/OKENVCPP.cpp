// OKENVCPP.cpp : Kattis Environment
//

#include "kattismath.cpp"

//DEFINES
#define endl "\n";
#define nl "\n";
#define iter(var,data) for(auto var = data.begin(); var != data.end(); ++var)
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
	string *str = new string();
	cin >> N;
	getline( cin , *str );
	incfor( i , 0 , N ) {
		map<char , bool> alpha;
		char c = 'a';
		incfor( i , 0 , 26 ) {
			alpha.insert( pair<char , bool>{c++ , false} );
		}
		getline( cin , *str );
		for ( char& r : *str ) {
			if ( isalpha( tolower( r ) ) )
				alpha[tolower( r )] = true;
		}

		int count = 0;
		set<char> unique;
		iter( i , alpha ) {
			if ( i->second ) {
				count++;
			} else {
				unique.insert( i->first );
			}
		}
		if ( count == 26 ) {
			cout << "pangram" << endl;
		} else {
			cout << "missing ";
			for ( auto i = unique.begin(); i != unique.end(); ++i ) {
				cout << *i;
			}
			cout << endl;
		}
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