#include <fstream>  
#include <string>
#include <iostream>
#include <iostream>
#include "Header.h"
#include "header1.h"
int main() {
    std::ifstream inp("data.txt");
    if (!inp.is_open()) {
        std::cout << "Error! Cannot open\n";
        return 1;
    }
    int A;
    int B;
    inp >> A;
    inp >> B;
    CRat p;
    p.set(A, B);
    inp >> A;
    inp >> B;
    CRat d;
    d.set(A, B);
    CRat c = p + d;
    c.get();

    inp >> A;
    inp >> B;
    CRat e;
    e.set(A, B);
    inp >> A;
    inp >> B;
    CRat f;
    f.set(A, B);
    CRat g = e - f;
    g.get();

   

    AutoTest();
    inp.close();

    return 0;
}
