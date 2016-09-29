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

using namespace std;

//EX03_03 – Liang Programming Exercise 9.11: the EvenNumber class

// data field of the int type that represent integer value stored in the object
EvenNumber ::EvenNumber(int val)
{
    value = val;
}

// function that return value
 int EvenNumber:: getValue()
 {
     return value;
     
 }

//function that return value +2 to get the next even number
 int EvenNumber::getNext()
 {
     return value + 2;
 }

//function that return value -2 to get the next even number
 int EvenNumber::getPrevious()
 {
     return value - 2;
 }
 

