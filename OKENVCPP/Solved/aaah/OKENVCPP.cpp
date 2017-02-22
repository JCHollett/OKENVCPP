// OKENVCPP.cpp : Kattis Environment
//

#include <iostream>
#include <iomanip>
#include <ostream>
#include "kattismath.cpp"
#include <string>
#ifdef _DEBUG
int Pause() {
	return std::system( "pause" );
}
#endif // _DEBUG
using namespace std;
//using namespace constants;
//using namespace funcs;
//using namespace IntervalASCII;

int main() {
	string *str1 = new string();
	string *str2 = new string();
	getline( cin , *str1 );
	getline( cin , *str2 );
	if ( str1->length() >= str2->length() ) {
		cout << "go" << endl;
	} else {
		cout << "no" << endl;
	}

	//end
#ifdef _DEBUG
	return Pause();
#else
	return 0;
#endif
}