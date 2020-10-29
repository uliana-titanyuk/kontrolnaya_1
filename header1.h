#pragma once
#include <string>
#include <iostream>
#include <iostream>
#include "Header.h"
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
	 }
	Vect& operator=(const Vect& b);
	Vect operator+(const Vect& b);
  Vect operator-(const Vect& b);
	
	void get();
	void set();
};
