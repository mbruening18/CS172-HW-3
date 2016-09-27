//
//  Quadratic.cpp
//  HW #03
//
//  Created by Megan Bruening on 9/26/16.
//  Copyright © 2016 Megan Bruening. All rights reserved.
//

#include "Quadratic.hpp"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <ctime>


using namespace std;

//EX03_02 – Liang Programming Exercise 9.6: Algebra: quadratic equations


QuadraticEquation::QuadraticEquation(int a, int b, int c)
{
    mA = a;
    mB = b;
    mC = c;
}

int QuadraticEquation::geta()
{
    return mA;
}
int QuadraticEquation::getb()
{
    return mB;
}
int QuadraticEquation::getc()
{
    return mC;
}

int QuadraticEquation::getDiscriminant()
{
    return mB * mB - (4*mA*mC);
}
double QuadraticEquation::getRoot1()
{
    if(getDiscriminant() < 0)
    {
        return 0;
    }
    else
    {
        return (-mB + sqrt(getDiscriminant()))/(2*mA);
    }
}
double QuadraticEquation::getRoot2()
{
    if(getDiscriminant() < 0)
    {
        return 0;
    }
    else
    {
        return (-mB - sqrt(getDiscriminant()))/(2*mA);
    }
}
