// OKENVCPP.cpp : Kattis Environment
//

#include "kattismath.cpp"
#include <iostream>
#include <vector>
#include <sstream>
#include <iomanip>
#include <map>

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
using namespace IntervalASCII;

void CODE() {
	int park1 , park2 , park3;
	int start , end;
	int total = 0;
	vector<int> truck[3];

	cin >> park1 >> park2 >> park3;
	incfor( i , 0 , 3 ) {
		cin >> start >> end;
		truck[i] = vector<int>( 10000 );
		incfor( j , start + 1 , end + 1 ) {
			truck[i][j] = 1;
		}
	}
	incfor( i , 0 , 10000 ) {
		switch ( truck[0][i] + truck[1][i] + truck[2][i] ) {
			case 3:
				total += park3 * 3;
				break;
			case 2:
				total += park2 * 2;
				break;
			case 1:
				total += park1;
				break;
		}
	}
	cout << total << nl;
	return;
}
int main() {
	ios::sync_with_stdio( false );
#ifdef PRE_KATTIS
	if ( !isatty( fileno( stdin ) ) ) {
		cout << "InputFile detected" << endl;
	} else return 0;
#endif
	//***RUN***

	CODE();

	//***END****
#ifdef PRE_KATTIS
	return Pause();
#else
	return 0;
#endif
}