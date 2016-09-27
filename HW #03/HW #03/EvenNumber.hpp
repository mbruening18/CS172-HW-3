//
//  EvenNumber.hpp
//  HW #03
//
//  Created by Megan Bruening on 9/27/16.
//  Copyright © 2016 Megan Bruening. All rights reserved.
//

#ifndef EvenNumber_hpp
#define EvenNumber_hpp
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <ctime>
#include <stdio.h>

//EX03_03 – Liang Programming Exercise 9.11: the EvenNumber class


class EvenNumber
{
private:
    int value;
public:
    EvenNumber();
    
    int getValue();
    int getNext();
    int getPrevious();
};


#endif /* EvenNumber_hpp */
