#pragma once
#include <string>
#include <iostream>
#include <iostream>
#include "Header.h"
#define LENGTH 4
using namespace std;

class Vect {
private:
	CRat a[LENGTH/2];
public:
	Vect() {
		for (int i = 0; i < LENGTH/2; i++) {
			CRat m;
			a[i] = m;
		};
	}
	Vect(const CRat *b) {
		for (int i = 0; i < LENGTH/2; i++) {
			a[i] = b[i];
		}
	 }
	Vect& operator=(const Vect& b);
	Vect operator+(const Vect& b);
  Vect operator-(const Vect& b);
	
	void get();
	Vect& set();
};
