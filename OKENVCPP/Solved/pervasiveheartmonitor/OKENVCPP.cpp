// OKENVCPP.cpp : Kattis Environment
//

#include "kattismath.cpp"
#include <iostream>
#include <vector>
#include <sstream>
#include <iomanip>
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

	while ( getline( cin , *s ) ) {
		string str;
		double d = 0 , sum = 0 , vals = 0;

		stringstream name;
		istringstream iss{ *s };
		while ( iss >> str ) {
			if ( isDouble( str , d ) ) {
				vals++;
				sum += d;
			} else {
				name << " " << str;
			}
		}

		cout << setprecision( 8 ) << sum / vals << name.str() << "\n";
	}
	delete s;
	//end
#ifdef PRE_KATTIS
	return Pause();
#else
	return 0;
#endif
}