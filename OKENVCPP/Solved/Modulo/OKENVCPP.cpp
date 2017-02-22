// OKENVCPP.cpp : Kattis Environment
//
#include <iostream>
#include <set>
#include <math.h>
using namespace std;

int main() {
    set<int> modulo;
    int x;
    while ( cin >> x ) {
        modulo.insert( x % 42 );
    }
    cout << modulo.size() << '\n';
}