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
using namespace std;


//EX03_05 – Liang Programming Exercise 10.10: the MyInteger class

class MyInteger
{
private:
    int value;
    
public:
    MyInteger(int val);
    
    const int isEven();
    const int isOdd();
    const int isPrime();
    
    static int isEven(int);
    static int isOdd(int);
    static int isPrime(int);
    
    static int isEven(const MyInteger&);
    static int isOdd(const MyInteger&);
    static int isprime(const MyInteger&);
    
    const int equals(int);
    const int equals(const MyInteger&);
    
    int parseInt(const string&);
    
};


#endif /* MyIntegerClass_hpp */
