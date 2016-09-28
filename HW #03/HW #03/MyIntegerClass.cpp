//
//  MyIntegerClass.cpp
//  HW #03
//
//  Created by Megan Bruening on 9/27/16.
//  Copyright © 2016 Megan Bruening. All rights reserved.
//
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <ctime>
#include "MyIntegerClass.hpp"



//EX03_05 – Liang Programming Exercise 10.10: the MyInteger class

MyInteger:: MyInteger (int val)
{
    value = val;
}

const int MyInteger::isEven()
{
    value%2 == 1;
    return true;
}

const int MyInteger::isOdd()
{
    return true;
}

const int MyInteger::isPrime()
{
    return true;
}

 int MyInteger::isEven(int)
{
    
    return true;
}

 int MyInteger::isOdd(int)
{
     return true;
}

 int MyInteger::isPrime(int)
{
     return true;
}

static int isEven(const MyInteger&)
{
    return true;
}
static int isOdd(const MyInteger&)
{
    return true;
}
static int isprime(const MyInteger&)
{
    return true;
}

const int equals(int)
{
    return true;
}
const int equals(const MyInteger&)
{
    return true;
}



int parseInt(const string&)
{
    int value;
    
}

