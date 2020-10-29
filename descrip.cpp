#include <string>
#include <iostream>
#include <iostream>
#include "Header.h"
#include "header1.h"
using namespace std;


void CRat::set(int x, int y) {
    this->x = x;
    this->y = y;
}
CRat CRat::operator+(const CRat& z) {
    CRat w;
    w.set(x * z.Y()+z.X() * y, y * z.Y());
    return w;
}
CRat CRat::operator-(const CRat& p) {
    CRat d;
    d.set(x* p.Y() - p.X()*y, y * p.Y());
    return d;
}
void CRat::get()const {
    cout << x;
    cout << y << endl;
};
CRat& CRat :: operator= (const CRat& b) {
    this->x = b.x;
    this->y = b.y;
    return *this;
}

