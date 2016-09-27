//
//  MyIntegerClass.hpp
//  HW #03
//
//  Created by Megan Bruening on 9/27/16.
//  Copyright © 2016 Megan Bruening. All rights reserved.
//

#ifndef MyIntegerClass_hpp
#define MyIntegerClass_hpp
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <ctime>
#include <stdio.h>



//EX03_05 – Liang Programming Exercise 10.10: the MyInteger class

class MyInteger
{
private:
    int value;
    
public:
    int isEven();
    int isOdd();
    int isPrime();
    
};


#endif /* MyIntegerClass_hpp */
