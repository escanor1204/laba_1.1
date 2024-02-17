//////////////////////////////////////////////////////////////////////////////////////////
////////Source.cpp

#include <iostream>
#include "Fraction.h"
using namespace std;

Fraction makeFraction(int x, int y)
{
    Fraction nn;
    if (!nn.Init(x, y))
        cout << "wrong argument to Init (second)" << endl;
    return nn;
}

int main()
{
    Fraction n;
    n.Init(10, 10);
    n.Display();
    cout << "N = " << n.ipart() << endl;
    n.Display();

    Fraction k;
    k.Read();
    k.Display();
    cout << "N = " << k.ipart() << endl;
    k.Display();

    Fraction i;
    int a, b;
    cout << "first = ? ";
    cin >> a;
    cout << "second = ?";
    cin >> b;

    i = makeFraction(a, b);
    i.Display();

    return 0;
}
