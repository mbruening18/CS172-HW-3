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

//creates a data feild that stores an int value sets equal to val
MyInteger:: MyInteger (int val)
{
    value = val;
}

// constant function that return value
int MyInteger:: getValue() const
{
    return value;
    
}

//unctions that return true if value is even, odd, prime respectively
bool MyInteger::isEven() const
{
   
    return MyInteger:: isEven(value);
}

bool MyInteger::isOdd() const
{
    return MyInteger:: isOdd(value);
}

bool MyInteger::isPrime() const
{
    return MyInteger:: isPrime(value);
}

// implements the equation for making it even
bool MyInteger::isEven(int i)
{
    
    return i%2 == 0;
}

// implements the equation for making it odd
bool MyInteger::isOdd(int i)
{
     return i%2 == 1;
}

// implements the equation for checking if it is prime
bool MyInteger::isPrime(int i)
{
    
    bool isPrime = true;
    // checks the value
    for(int divisor = 2; divisor <= i / 2; divisor++)
    {
        
        if (i % divisor == 0)
        {
            isPrime=false;
        }
    }
    //returns prime
    return isPrime;
}

//checks if the integer enter is even and return if even, odd, prime respectively
bool MyInteger::isEven(const MyInteger& i)
{
    return i.isEven();
}
bool MyInteger::isOdd(const MyInteger& i)
{
    return i.isOdd();
}
bool MyInteger::isPrime(const MyInteger& i)
{
    return i.isPrime();
}

//return if function is equal to i
bool MyInteger::equals(int i) const
{
    return value == i;
}
bool MyInteger::equals(const MyInteger& i) const
{
    return i.equals(value);
}


//returns the converted string into a value
int MyInteger::parseInt(const string& i)
{
    return stoi(i);

}


