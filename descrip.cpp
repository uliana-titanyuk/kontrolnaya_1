#include "Header.h"
using namespace std;


void CRat::Set(int x, int y) {
    this->x = x;
    this->y = y;
}
CRat CRat::operator+(const CRat& d) {
    CRat p;
    p.Set(x * p.Y() + p.X() * y, y * p.Y());
    return p;
}
CRat CRat::operator-(const CRat& p) {
    CRat d;
    d.Set(x* p.Y() - p.X()*y, y * p.Y());
    return d;
}
void CRat::Get()const {
    cout << x;
    cout << y << endl;
};
CRat& CRat :: operator= (const CRat& b) {
    this->x = b.x;
    this->y = b.y;
    return *this;
}
