#pragma once
#include "CPoint.h"
#include "CDist.h"
using namespace std;

int Autotest1(){
    CPoint A(0,1);
    CDist B(1,2);
    CPoint S=A+B;
    if (S.X()==1 && S.Y()==3){
        return 0;
    }
    else{
        return 1;
    }
}
int Autotest2(){
    CDist A(-1,0);
    CPoint B(1,2);
    CPoint S=A+B;
    if (S.X()==0 && S.Y()==2){
        return 0;
    }
    else{
        return 1;
    }
}
int Autotest3(){
    CPoint A(2,1);
    CPoint B(1,2);
    CDist S=A-B;
    if (S.X()==1 && S.Y()==-1){
        return 0;
    }
    else{
        return 1;
    }
}
