// ConVolume.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
double ConVolume(double rad, double ln);



int main()
{
    double rad = 0.,ln=0.;
    cout << "Radius=";
    cin >> rad;
    cout << "Slanght Height=";
    cin >> ln;
    cout << "Radius: " <<rad<< "Slaght Height: " <<ln<<" Volume: "<< ConVolume(rad, ln);
}
double ConVolume(double rad, double ln) {
    double volume;
    int z = 3;
    __asm {
        finit; initialization of x87
        fld ln
        fmul ln
        fld rad
        fmul rad
        fsub ST(1), ST(0)
            fld ST(1)
            fsqrt
            fldpi
            fmulp ST(1), ST(0)
            fmulp ST(1), ST(0)
            fild z
            fdivp ST(1),ST(0)
            fst volume

    }
    return volume;

}
