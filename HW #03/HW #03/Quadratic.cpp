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

//three data fieds that represent 3 coefficients
QuadraticEquation::QuadraticEquation(int a, int b, int c)
{
    mA = a;
    mB = b;
    mC = c;
}

//get fuctions that return the 3 coeffiecents
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

//function that returns the equation
int QuadraticEquation::getDiscriminant()
{
    return mB * mB - (4*mA*mC);
}

// 2 functions that give us each of the roots of the equation
double QuadraticEquation::getRoot1()
{
    //checks if discriment is less than 0
    if(getDiscriminant() < 0)
    {
        return 0;
    }
    //otherwise does equation
    else
    {
        return (-mB + sqrt(getDiscriminant()))/(2*mA);
    }
}
double QuadraticEquation::getRoot2()
{
    //checks if discriment is less than 0
    if(getDiscriminant() < 0)
    {
        return 0;
    }
    //otherwise does equation 
    else
    {
        return (-mB - sqrt(getDiscriminant()))/(2*mA);
    }
}
