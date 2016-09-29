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
    int getValue() const;
    bool isEven()const;
    bool isOdd()const;
    bool isPrime()const;
    
    static bool isEven(int);
    static bool isOdd(int);
    static bool isPrime(int);
    
    static bool isEven(const MyInteger&);
    static bool isOdd(const MyInteger&);
    static bool isPrime(const MyInteger&);
    
    bool equals(int) const ;
    bool equals(const MyInteger&) const;
    
    static int parseInt(const string&);
    
};


#endif /* MyIntegerClass_hpp */
