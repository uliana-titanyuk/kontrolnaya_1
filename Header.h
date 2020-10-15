#pragma once
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <fstream>
void AutoTest();
class CRat;

class CRat {
    int x, y;
public:
    int X()const {
        return x;
    }
    int Y()const {
        return y;
    }
    CRat() {
        x = 0;
        y = 1;
    }
    void Set(int x, int y);
    CRat operator+ (const CRat& d);
    CRat operator- (const CRat& p);
    CRat& operator=(const CRat& b);
    void Get()const;
};

