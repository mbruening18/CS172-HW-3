//
//  Quadratic.hpp
//  HW #03
//
//  Created by Megan Bruening on 9/26/16.
//  Copyright © 2016 Megan Bruening. All rights reserved.
//

#ifndef Quadratic_hpp
#define Quadratic_hpp

#include <stdio.h>

//EX03_02 – Liang Programming Exercise 9.6: Algebra: quadratic equations


class QuadraticEquation
{
private:
    int mA;
    int mB;
    int mC;
    
public:
    
    QuadraticEquation(int a, int b, int c);
    
    int geta();
    int getb();
    int getc();
    
    int getDiscriminant();
    double getRoot1();
    double getRoot2();
    
    
};

#endif /* Quadratic_hpp */
