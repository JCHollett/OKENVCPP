// OKENVCPP.cpp : Kattis Environment
//
#include <iostream>;
#include <queue>;
using namespace std;

queue<int> Bijele() {
    queue<int> Pieces;
    Pieces.push( 1 );
    Pieces.push( 1 );
    Pieces.push( 2 );
    Pieces.push( 2 );
    Pieces.push( 2 );
    Pieces.push( 8 );
    return Pieces;
}
int main() {
    int x = 0;
    queue<int> bijele = Bijele();
    try {
        while ( cin >> x ) {
            cout << (bijele.front() - x) << ' ';
            bijele.pop();
        }
    } catch ( ... ) {
        return -1;
    }
    return 0;
}