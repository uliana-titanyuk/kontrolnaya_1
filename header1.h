#pragma once
#include <string>
#include <iostream>
#include <iostream>
#define LENGTH 2
using namespace std;
class Vect {
private:
	CRat a[LENGTH];
public:
	Vect() {
		for (int i = 0; i < LENGTH; i++) {
			CRat m;
			a[i] = m;
		};
	}
	Vect(const CRat *b) {
		for (int i = 0; i < LENGTH; i++) {
			a[i] = b[i];
		}
	};
	Vect& operator=(const CComplVect& b);
	Vect operator+(const CComplVect& b);
  Vect operator-(const CComplVect& b);
	Vect Conjugate();
	Void get();
	Void set();
};
