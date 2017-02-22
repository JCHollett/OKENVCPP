// OKENVCPP.cpp : Kattis Environment
//
#include <stdio.h>
#include <math.h>
#include <unordered_map>
#include <algorithm>
#include <vector>
using namespace std;

void prnt( char c ) {
    switch ( c ) {
        case 'a':
            printf( "%s\n" , "Adrian" );
            break;
        case 'b':
            printf( "%s\n" , "Bruno" );
            break;
        case 'c':
            printf( "%s\n" , "Goran" );
            break;
    }
}
int main() {
    char * line;
    char bruno[4] = { 'B','A','B','C' };
    char adrian[3] = { 'A','B','C' };
    char goran[6] = { 'C','C','A','A','B','B' };
    int N = 0;
    unordered_map<char , int> scores;
    line = new char[N];
    scanf( "%d" , &N );
    scanf( "%s" , line );
    for ( int i = 0; i < N; ++i ) {
        if ( line[i] == adrian[i % 3] ) {
            ++scores['a'];
        }
        if ( line[i] == bruno[i % 4] ) {
            ++scores['b'];
        }
        if ( line[i] == goran[i % 6] ) {
            ++scores['c'];
        }
    }
    vector<pair<char , int>> trans( scores.size() );
    transform( scores.begin() , scores.end() , trans.begin() , []( pair<const char , int> a )-> pair<char , int> {return pair<char , int>( a.first , a.second ); } );
    sort( trans.begin() , trans.end() , []( pair<char , int> a , pair<char , int>b )->bool {return a.second != b.second ? a.second > b.second : a.first < b.first; } );
    N = trans.begin()->second;
    printf( "%d\n" , N );
    for ( std::vector<pair<char , int>>::iterator iter = trans.begin(); iter != trans.end(); ++iter ) {
        if ( iter->second == N )
            prnt( iter->first );
    }
}