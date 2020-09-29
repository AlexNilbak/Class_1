#include <iostream>
#include "CPoint.h"
#include "CDist.h"

CPoint::CPoint() {
    x = 0;
    y = 0;
}

CPoint::CPoint(int x, int y) {
    this->x = x;
    this->y = y;
}

int CPoint::X() const {
    return x;
}

int CPoint::Y() const {
    return y;
}

CPoint CPoint::operator+ (const CDist& dist) {
    int a, b;
    a = X() + dist.X();
    b = Y() + dist.Y();
    CPoint P(a, b);
    return P;
}

CDist CPoint::operator- (const CPoint& b) {
    CPoint k(X(), Y());
    CDist r(b, k);
    return r;
}
