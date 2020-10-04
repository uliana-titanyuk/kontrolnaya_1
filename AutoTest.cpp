#include "Header.h"

using namespace std;

void AutoTest() {
	CRat p;
	p.Set(1, 2);
	CRat d;
	d.Set(1, 1);
	CRat P = p + d;
	if (P.X() == 3 && P.Y() == 2) {
		cout << "AutoTest passed..." << endl;
	}
	else {
		cout << "AutoTest falled..." << endl;
	}
}