//////////////////////////////////////////////////////////////////////////////////////////
////////Fraction.cpp
#include "Fraction.h"
#include <iostream>
using namespace std;

void Fraction::SetFirst(int value)
{
    first = value;
}

void Fraction::SetSecond(unsigned int value)
{
    second = value;
}

bool Fraction::Init(int x, int y)
{
    first = x;
    if (y >= 0)
    {
        second = y;
        return true;
    }
    else
    {
        second = 0;
        return false;
    }
}
void Fraction::Display() const
{
    cout << "first = " << first << " second = " << second << endl;
    cout << "N = " << static_cast<double>(first) / second << endl;
}

void Fraction::Read()
{
    int x, y;
    cout << "first = ? ";
    cin >> x;
    do {
        cout << "second = ?";
        cin >> y;
    } while (!Init(x, y));
}


double Fraction::ipart()
{
    return static_cast<double>(first) / second;
}
