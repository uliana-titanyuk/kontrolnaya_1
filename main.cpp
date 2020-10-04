#include "Header.h"

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
    p.Set(A, B);
    inp >> A;
    inp >> B;
    CRat d;
    d.Set(A, B);
    CRat c = p + d;
    c.Get();

    inp >> A;
    inp >> B;
    CRat e;
    e.Set(A, B);
    inp >> A;
    inp >> B;
    CRat f;
    f.Set(A, B);
    CRat g = e - f;
    g.Get();

   

    AutoTest();
    inp.close();

    return 0;
}