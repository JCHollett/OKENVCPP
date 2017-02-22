// OKENVCPP.cpp : Kattis Environment
//
#include <iostream>
#include <map>
#include <math.h>
using namespace std;

int main() {
    map<char , int> cards;
    int score = 0;
    char x;
    while ( cin >> x ) {
        cards[x]++;
    }
    int lowest = cards[(*cards.begin()).first];
    for ( pair<char , int> p : cards ) {
        lowest = lowest < p.second ? lowest : p.second;
        score += pow( p.second , 2 );
    }
    if ( cards.size() == 3 )
        score += lowest * 7;
    cout << score << endl;
    system( "pause" );
}