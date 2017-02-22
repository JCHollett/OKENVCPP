// OKENVCPP.cpp : Kattis Environment
//
#include <iostream>
#include <istream>
#include <iomanip>
using namespace std;
class Rectangle {
    private:
    double width;
    double length;
    public:
    Rectangle() : width( 0 ) , length( 0 ) {};
    Rectangle( double x , double y ) : width( x ) , length( y ) {};
    double area() {
        return width * length;
    }
    friend Rectangle& operator>>( istream& is , Rectangle& r ) {
        is >> r.width >> r.length;
        return r;
    }
};

int main() {
    double cost;
    int lawns;
    double area = 0.0;
    cin >> cost >> lawns;
    Rectangle r;
    for ( int i = 0; i < lawns; ++i ) {
        area += (cin >> r).area();
    }
    cout << std::setprecision( 7 ) << std::fixed << area * cost << '\n';
    system( "pause" );
}