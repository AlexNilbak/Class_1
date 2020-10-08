/*
12. ќпределить классы CPoint дл€ работы с целочисленными точками на плоскости и CDist дл€ работы с рассто€нием между точками.
¬ классе должны быть определены необходимые конструкторы, операторы сложени€(CPoint и CDist, возвращающий CPoint,
а также CDist и CPoint, возвращающий CPoint), вычитани€(CPoint из CPoint, возвращающий CDist).
¬ отдельном файле должен быть написан тест на данный класс.
*/

#include <iostream>
#include <fstream>
#include "CPoint.h"
#include "CDist.h"
#include "Autotest.h"
using namespace std;

int main(void) {
    int k;
    k=Autotest1();
    if(k!=0){
        cout << "Problem with operator+(CPoint)\n" << endl;
        return 1;
    }
    k=Autotest2();
    if(k!=0){
        cout << "Problem with operator+(CDist)\n" << endl;
        return 1;
    }
    k=Autotest3();
    if(k!=0){
        cout << "Problem with operator-(CPoint)\n" << endl;
        return 1;
    }

    ifstream input("data.txt");
    if (!input.is_open()) {
        cout << "Cannot open 'data.txt'\n" << endl;
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
