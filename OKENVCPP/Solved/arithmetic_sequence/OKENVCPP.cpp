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

bool arithmetic( vector<int> v );
bool permute( vector<int> v ) {
	sort( range( v ) );
	return arithmetic( v );
}
bool arithmetic( vector<int> v ) {
	int c = *v.begin();
	int dif = *(++v.begin()) - *v.begin();
	for ( auto i = (++v.begin()); i != v.end(); ++i ) {
		if ( (*i - c) != dif )
			return false;
		c = *i;
	}
	return true;
}

void CODE() {
	int n = 0;
	int m = 0;
	int x = 0;
	cin >> n;
	vector<int> data;
	incfor( i , 0 , n ) {
		cin >> m;
		incfor( j , 0 , m ) {
			cin >> x;
			data.push_back( x );
		}
		if ( arithmetic( data ) ) {
			cout << "arithmetic" << endl;
		} else if ( permute( data ) ) {
			cout << "permuted arithmetic" << endl;
		} else {
			cout << "non-arithmetic" << endl;
		}
		data.clear();
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