#include "header1.h"
#include <string>
#include <iostream>
#include <iostream>
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
		m.get();
		cout << ",";
	}
	
	cout << ")";
};
void Vect:: set() {
	CRat a[LENGTH];
	for (int i = 0; i < 2*LENGTH-1;i+=2) {
		 CRat m;
		 int x;
		 int y;
		 //this->x ;
        // this->y ;
		 m.set(x,y);
		 a[i]=m;
	}
	                             
};
