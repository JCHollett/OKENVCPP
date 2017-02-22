// OKENVCPP.cpp : Defines the entry point for the console application.
//

#include <iostream>
//#include <string>
#include <math.h>
//#include <map>
#include <algorithm>
//#include <unordered_map>

using namespace std;
int main() {
	int N = 0;
	int IN = 0;
	int X[4];
	do {
		cin >> IN;
		X[N] = IN;
	} while ( ++N <= 3 );
	sort( X , X + 4 );
	cout << X[0] * X[2] << endl;
	//system( "pause" );
	return 0;
}