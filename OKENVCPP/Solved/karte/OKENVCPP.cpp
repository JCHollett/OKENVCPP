// OKENVCPP.cpp : Kattis Environment
//
#include <iostream>
#include <string>
#include <stack>
#include <iomanip>
#include <set>
#include <istream>
#include <ostream>
#include <fstream>
#include <map>
using namespace std;
class Card;
class Deck;
class Card {
    private:
    char suit;
    int value;
    public:
    Card() : suit( '\0' ) , value( 0 ) {};
    Card( char x , int y ) : suit( x ) , value( y ) {};
    friend istream& operator>>( istream& is , Card& card ) {
        if ( is.bad() ) return is;
        is >> card.suit >> card.value;
        return is;
    }
    friend ostream& operator<<( ostream& os , Card& card ) {
        os << card.suit << setfill( '0' ) << setw( 2 ) << card.value;
        return os;
    }
    int getSuit() const {
        return Card::getSuit( this->suit );
    }
    static int getSuit( int index ) {
        switch ( index ) {
            case 'P':
                return 0;
            case 'K':
                return 1;
            case 'H':
                return 2;
            case 'T':
                return 3;
        }
    }
    bool operator>( const Card& other ) const {
        return this->getSuit() != other.getSuit() ? this->getSuit() > other.getSuit() : this->value > other.value;
    }
    bool operator<( const Card& other ) const {
        return this->getSuit() != other.getSuit() ? this->getSuit() < other.getSuit() : this->value < other.value;
    }
    bool operator==( const Card& other ) const {
        return this->getSuit() == other.getSuit() && this->value == other.value;
    }
};
class Deck {
    private:
    map<char , set<Card>> cards;
    public:
    Deck() {}
    bool Add( Card c ) {
        int before = cards[c.getSuit()].size();
        cards[c.getSuit()].insert( c );
        if ( cards[c.getSuit()].size() == before ) {
            return false;
        }
        return true;
    }
    friend ostream& operator<<( ostream& os , Deck& deck ) {
        cout << 13 - deck.cards[Card::getSuit( 'P' )].size() << ' ' << 13 - deck.cards[Card::getSuit( 'K' )].size() << ' ' << 13 - deck.cards[Card::getSuit( 'H' )].size() << ' ' << 13 - deck.cards[Card::getSuit( 'T' )].size() << '\n';
        return os;
    }
};
int main() {
    Card card;
    Deck deck;
    while ( cin >> card ) {
        if ( !deck.Add( card ) ) {
            cout << "GRESKA" << endl;
            return 0;
        }
    }
    cout << deck;
    system( "pause" );
}