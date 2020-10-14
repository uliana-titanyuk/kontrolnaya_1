#include "header1.h"

Vect& Vect :: operator= (const Vect& b) {
	for (int i = 0; i < LENGTH; i++) {
		this->a[i] = b.a[i];
	}
	return *this;                               
};
Vect Vect :: operator+(const Vect& b) {
	CComplVect m;
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
void  :: get() {
	CRat m;
	cout << "(";
	for (int i = 0; i < LENGTH - 1; i++) {
		m = a[i];
		m.get();
		cout << ",";
	}
	m = a[LENGTH - 1];
	m.get();
	cout << ")";
};
void  :: set() {
	for (int i = 0; i < LENGTH; i++) {
		get(a[i]);
	}
	return *a;                               
};
