#include "header1.h"
#include "Header.h"
Vect& Vect :: operator= (const Vect& b) {
	for (int i = 0; i < LENGTH; i++) {
		this->a[i] = b.a[i];
	}
	return *this;                               
};
Vect Vect :: operator+(const Vect& b) {
	Vect m;
	for (int i = 0; i < LENGTH; i++) {
		m.a[i] = a[i] + b.a[i];
	}
	return m;
};
Vect Vect :: operator-(const Vect& b) {
	Vect m;
	for (int i = 0; i < LENGTH; i++) {
		m.a[i] = a[i] - b.a[i];
	}
	return m;
};
void Vect :: get() {
	CRat m;
	cout << "(";
	for (int i = 0; i < LENGTH - 1; i++) {
		m = a[i];
		cout << m.x;
		cout << "/";
                cout << m.y 
		cout << ",";
	}
	m = a[LENGTH - 1];
	m.get();
	cout << ")";
};
void Vect:: set() {
	crat a[LENGTH];
	for (int i = 0; i < 2*LENGTH-1) {
		 crat a[i]
		 this->x = x;
                 this->y = y;
		 a[i].x = x;
		 a[i].y = y;
		  i+=2;
	}
	                             
};

