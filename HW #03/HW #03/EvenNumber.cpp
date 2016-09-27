//
//  EvenNumber.cpp
//  HW #03
//
//  Created by Megan Bruening on 9/27/16.
//  Copyright © 2016 Megan Bruening. All rights reserved.
//

#include "EvenNumber.hpp"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <ctime>

//EX03_03 – Liang Programming Exercise 9.11: the EvenNumber class

EvenNumber ::EvenNumber()
{
    value = 1;
}
 int EvenNumber:: getValue()
 {
     return value;
     
 }
 int EvenNumber::getNext()
 {
     return value == value + 2;
 }
 int EvenNumber::getPrevious()
 {
     return value == value - 2;
 }
 

