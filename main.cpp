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
  
    Vect p;
    p.set();
    
    Vect d;
    d.set();
    Vect c = p + d;
    c.get();

   
    Vect e;
    e.set();
    
    Vect f;
    f.set();
   Vect g = e - f;
    g.get();

   

    AutoTest();
    inp.close();

    return 0;
}
