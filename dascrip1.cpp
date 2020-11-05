#include "header1.h"
#include <string>
#include <iostream>
#include <iostream>
#include "Header.h"
Vect& Vect :: operator= (const Vect& b) {
	for (int i = 0; i < LENGTH/2; i++) {
		this->a[i] = b.a[i];
	}
	return *this;                               
};
Vect Vect :: operator+(const Vect& b) {
	Vect m;
	for (int i = 0; i < LENGTH/2; i++) {
		m.a[i] = a[i] + b.a[i];
	}
	return m;
};
Vect Vect :: operator-(const Vect& b) {
	Vect m;
	for (int i = 0; i < LENGTH/2; i++) {
		m.a[i] = a[i] - b.a[i];
	}
	return m;
};
void Vect :: get() {
	CRat m;
	cout << "(";
	for (int i = 0; i < LENGTH/2; i++) {
		m = a[i];
		m.get();
		cout << ",";
	}
	
	cout << ")";
		cout << "\n";
		cout << "\n";
};
 Vect& Vect :: set() {
	CRat a[LENGTH];
	for (int i = 0; i < LENGTH/2; i++) {
		 int A;
		 int B;
		 //inp >> A;
         //inp >> B;
        CRat m;
    
		 m.set(A,B);
		  //this->x = x;
          //this->y = y ;
		 	this->a[i] = m;
	}
	return *this; 
 };
		 
