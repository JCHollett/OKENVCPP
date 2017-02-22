// OKENVCPP.cpp : Kattis Environment
//
#include <iostream>;
using namespace std;

int value( char& card , char& suit , char& dom ) {
    switch ( card ) {
        case 'A':
            return 11;
        case 'K':
            return 4;
        case 'Q':
            return 3;
        case 'J':
            return dom == suit ? 20 : 2;
        case 'T':
            return 10;
        case '9':
            return dom == suit ? 14 : 0;
        case '8':
            return 0;
        case '7':
            return 0;
    }
}

int main() {
    int hands;
    char dominant;
    char card;
    char suit;
    int score = 0;
    cin >> hands >> dominant;
    hands <<= 2;
    for ( int i = 0; i < hands; ++i ) {
        cin >> card >> suit;
        score += value( card , suit , dominant );
    }
    cout << score << '\n';
    system( "pause" );
}