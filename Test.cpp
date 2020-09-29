/*
12. ���������� ������ CPoint ��� ������ � �������������� ������� �� ��������� � CDist ��� ������ � ����������� ����� �������.
� ������ ������ ���� ���������� ����������� ������������, ��������� ��������(CPoint � CDist, ������������ CPoint, 
� ����� CDist � CPoint, ������������ CPoint), ���������(CPoint �� CPoint, ������������ CDist).
� ��������� ����� ������ ���� ������� ���� �� ������ �����.
*/

#include <iostream>
#include <fstream>
#include "CPoint.h"
#include "CDist.h"
using namespace std;

int main(void) {
    ifstream input("data.txt");
    if (!input.is_open()) {
        cout << "Cannot open 'data.txt'\n";
        return 1;
    }
    int a1, a2, b1, b2, c1, c2;
    input >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
    CPoint A(a1, a2);
    CPoint B(b1, b2);
    CDist V(c1, c2);

    cout << "Points:\n" << "A= (" << a1 << "," << a2 << ")\n" << "B= (" << b1 << "," << b2 << ")" << endl;
    cout << "Vector:\n" << "V= (" << c1 << "," << c2 << ")\n" << endl;
    CPoint S = A + V;
    cout << "A + V = (" << S.X() << "," << S.Y() << ")" << endl;
    CPoint T = V + B;
    cout << "V + B = (" << T.X() << "," << T.Y() << ")" << endl;
    CDist R = B - A;
    cout << "B - A = (" << R.X() << "," << R.Y() << ")" << endl;

    input.close();
    return 0;
}
