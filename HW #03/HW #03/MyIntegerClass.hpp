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

// declares class called myinteger
class MyInteger
{
    // makes the following private
private:
    //creates a data feild that stores an int value
    int value;
    
    //makes the following private
public:
    // constructor that creates a myinteger object for specified int val
    MyInteger(int val);
    
    // constant function that return value
    int getValue() const;
    
    //crates boolean constant functions that return true if value is even, odd, prime respectively
    bool isEven()const;
    bool isOdd()const;
    bool isPrime()const;
    
    //creates static bool functions that return true if value is even, odd, prime respectively
    static bool isEven(int i);
    static bool isOdd(int i);
    static bool isPrime(int i);
    
    //creates static bool functions that return true if value is even, odd, prime respectively
    static bool isEven(const MyInteger& i);
    static bool isOdd(const MyInteger& i);
    static bool isPrime(const MyInteger& i);
    
    //creats bool functions that return true if the value in the object is equal to specified object
    bool equals(int i) const ;
    bool equals(const MyInteger& i) const;
    
    // creates a static function that converts a string into an int vlaue
    static int parseInt(const string& i);
    
};


#endif /* MyIntegerClass_hpp */
