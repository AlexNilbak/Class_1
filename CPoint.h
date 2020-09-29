#pragma once
using namespace std;

class CDist;
class CPoint {
    int x, y;
public:
    CPoint();
    CPoint(int, int);
    int X() const;
    int Y() const;
    CPoint operator+ (const CDist&);
    CDist operator- (const CPoint&);
};

