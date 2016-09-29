//
//  Quadratic.hpp
//  HW #03
//
//  Created by Megan Bruening on 9/26/16.
//  Copyright © 2016 Megan Bruening. All rights reserved.
//

#ifndef Quadratic_hpp
#define Quadratic_hpp
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <ctime>
#include <stdio.h>

//EX03_02 – Liang Programming Exercise 9.6: Algebra: quadratic equations

//declares Quad Equation
class QuadraticEquation
{
    
//make the variables private
private:
    
    //data feilds that represent 3 coefficents
    int mA;
    int mB;
    int mC;
    
// makes the variables public
public:
    
    //constructor for arguments a,b,c
    QuadraticEquation(int a, int b, int c);
    
    //three get functions
    int geta();
    int getb();
    int getc();
    
    // function that return the discriment
    int getDiscriminant();
    
    //fuctions that return the two roots of the equation
    double getRoot1();
    double getRoot2();
    
    
};

#endif /* Quadratic_hpp */
