#include <iostream>
#include "CDist.h"
#include "CPoint.h"

CDist::CDist() {
    x = 0;
    y = 0;
}

CDist::CDist(int x, int y) {
    this->x = x;
    this->y = y;
}

CDist::CDist(const CPoint& a, const CPoint& b) {
    this->x = b.X() - a.X();
    this->y = b.Y() - a.Y();
}

int CDist::X() const {
    return x;
}

int CDist::Y() const {
    return y;
}

CPoint CDist::operator+(const CPoint& a) {
    int m, n;
    m = X() + a.X();
    n = Y() + a.Y();
    CPoint P(m, n);
    return P;
}

