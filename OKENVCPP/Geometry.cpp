#ifndef sstream_H
#define sstream_H
#include <sstream>
#endif // !sstream_H
#ifndef String_H
#define String_H
#include <string>
#endif
#ifndef iostream_H
#define iostream_H
#include <iostream>
#endif
#ifndef math_h
#define math_h
#include <math.h>
#endif
#ifndef kattismath_h
#define kattismath_h
#include "kattismath.cpp"
#endif
using namespace std;
namespace Geometry {
    struct Point {
        public:
        double X , Y;
        Point() : X( 0 ) , Y( 0 ) {};
        Point( double x , double y ) : X( x ) , Y( y ) {};
        friend istream& operator>>( istream& is , Point &P ) {
            is >> P.X >> P.Y;
            return is;
        }
        friend ostream& operator<<( ostream& os , const Point &p ) {
            os << "(" << p.X << "," << p.Y << ")";
            return os;
        }
        double length() {
            return sqrt( pow( X , 2 ) + pow( Y , 2 ) );
        }
    };
    class Shape {
        public:
        virtual bool isInside( Point ) = 0;
        virtual string str( void ) = 0;
        virtual double getArea() = 0;
        virtual double getPerimeter() = 0;
    };
    class Rectangle : public Shape {
        public:
        Point BL;
        Point TR;
        Rectangle() : BL( Point() ) , TR( Point() ) {};
        Rectangle( Point bl , Point tr ) : BL( bl ) , TR( tr ) {};
        friend istream& operator>>( istream& is , Rectangle &R ) {
            return(is >> R.BL >> R.TR);
        }
        friend ostream& operator<<( ostream& os , const Rectangle &R ) {
            os << R.BL << "->" << R.TR;
            return os;
        }
        double getPerimeter() {
            return 2 * (getWidth() + getHeight());
        }
        double getArea() {
            return getWidth() * getHeight();
        }
        double getWidth() {
            return TR.X - BL.X;
        }
        double getHeight() {
            return TR.Y - BL.Y;
        }
        string str( void ) {
            stringstream ss;
            ss << this->BL << "->" << this->TR;
            return ss.str();
        }
        bool isInside( Point P ) {
            if ( P.X <= TR.X && P.X >= BL.X )
                if ( P.Y <= TR.Y && P.Y >= BL.Y )
                    return true;
                else return false;
            else return false;
        }
    };
    class Circle : public Shape {
        private:
        Point C;
        double R;
        public:
        Circle() : C( Point() ) , R( 0 ) {};
        Circle( Point c , double r ) : C( c ) , R( r ) {};
        friend istream& operator>>( istream& is , Circle &Cir ) {
            is >> Cir.R;
            return is;
        }
        friend ostream& operator<<( ostream& os , const Circle &Cir ) {
            os << Cir.C << "->" << Cir.R;
            return os;
        }
        double getRadius() {
            return R;
        }
        double getDiameter() {
            return 2 * R;
        }
        double getArea() {
            return constants::PI * pow( R , 2 );
        }
        double getPerimeter() {
            return constants::PI * 2 * R;
        }
        string str( void ) {
            stringstream ss;
            ss << this->C << "->" << this->R;
            return ss.str();
        }
        double length() {
            return C.length();
        }
        bool isInside( Point p ) {
            if ( pow( p.X - C.X , 2 ) + pow( p.Y - C.Y , 2 ) <= pow( R , 2 ) ) {
                return true;
            } else return false;
        }
    };
}