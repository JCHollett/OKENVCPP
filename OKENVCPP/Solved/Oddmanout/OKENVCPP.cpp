// OKENVCPP.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>
#include <string>
#include <math.h>
#include <map>
#include <unordered_map>

using namespace std;
int main() {
	unordered_map<int , bool> nums;
	unordered_map<int , bool>::iterator Iter;
	int X = 0;
	int C = 0;
	int N = 0;
	int M = 0;
	cin >> N;
	do {
		cin >> M;
		nums.clear();
		for ( int i = 0; i < M; ++i ) {
			cin >> X;
			Iter = nums.find( X );
			if ( Iter == nums.end() ) {
				nums.insert( pair<int , bool>{X , false} );
			} else Iter->second = true;
		}
		Iter = nums.begin();
		while ( Iter->second ) {
			Iter++;
		}
		cout << "Case #" << ++C << ": " << Iter->first << endl;
		nums.clear();
	} while ( --N > 0 );
	return 0;
}