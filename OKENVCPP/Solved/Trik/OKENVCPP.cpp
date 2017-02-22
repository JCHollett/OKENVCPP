// OKENVCPP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

//    A
//[0][1][2]
//P->1 else P->0
//    B
//[0][1][2]
//P->2 else P->1
//    C
//[0][1][2]
//P->2 else P->0
using namespace std;
int main() {
	int Answer[3] = { 1,2,3 };
	int* Ptr = Answer;
	string *s = new string();
	getline( cin , *s );
	for ( char& I : *s ) {
		switch ( I ) {
			case 'A':
				if ( Ptr == Answer ) Ptr = Answer + 1;
				else if ( Ptr == Answer + 1 ) Ptr = Answer;
				break;
			case 'B':
				if ( Ptr == Answer + 1 ) Ptr = Answer + 2;
				else if ( Ptr == Answer + 2 ) Ptr = Answer + 1;
				break;
			case 'C':
				if ( Ptr == Answer ) Ptr = Answer + 2;
				else if ( Ptr == Answer + 2 ) Ptr = Answer;
				break;
			default:
				cerr << "Error: Bad Case";
				break;
		}
	}
	delete s;
	cout << *Ptr << endl;
	cin.get();
	return 0;
}