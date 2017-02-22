// OKENVCPP.cpp : Kattis Environment
//

#include "kattismath.cpp"
#include <iostream>
#include <vector>
#include <sstream>
#include <iomanip>
#include <map>
#define endl "\n";
#define nl "\n";
#define incfor(var,x,y) for(int var = x; var < y; ++var)
#define decfor(var,x,y) for(int var = y; var >= y; --var)
#ifdef PRE_KATTIS
#include <io.h>
int Pause() {
	return std::system( "pause" );
}
#endif // PRE_KATTIS
using namespace std;
//using namespace constants;
//using namespace funcs;
using namespace IntervalASCII;

int main() {
#ifdef PRE_KATTIS
	if ( !isatty( fileno( stdin ) ) ) {
		cout << "InputFile detected" << endl;
	} else return 0;
#endif

	ios::sync_with_stdio( false );
	string *s = new string();
	int N = 0;
	int X = 0;
	while ( cin >> N && N != 0 ) {
		map<int , int> one;
		map<int , int> two;
		vector<int> data;
		incfor( i , 0 , N ) {
			cin >> X;
			one.insert( pair<int , int>{X , i} );
		}
		incfor( i , 0 , N ) {
			cin >> X;
			data.push_back( X );
		}
		sort( data.begin() , data.end() );
		map<int , int>::iterator iter = one.begin();
		incfor( i , 0 , N ) {
			two.insert( pair<int , int>{iter->second , data[i] } );
			iter++;
		}
		for ( pair<int , int> p : two ) {
			cout << p.second << nl;
		}
		cout << endl;
	}
	delete s;
	//end
#ifdef PRE_KATTIS
	return Pause();
#else
	return 0;
#endif
	}