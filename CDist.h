#pragma once
using namespace std;

class CPoint;
class CDist {
    int x, y;
public:
    CDist();
    CDist(int, int);
    CDist(const CPoint&, const CPoint&);
    int X() const;
    int Y() const;
    CPoint operator+(const CPoint&);
};

