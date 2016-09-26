//
//  Function.hpp
//  HW #03
//
//  Created by Megan Bruening on 9/23/16.
//  Copyright © 2016 Megan Bruening. All rights reserved.
//

//#ifndef FAN_H
//#define FAN_H
#ifndef Fan_h
#define Fan_h

#include <stdio.h>
#include "Fan.h"




void increment ();


//EX03_01 – Liang Programming Exercise 9.2: the Fan class



class Fan
{
private:
    int Speed;
    bool On;
    double Radius;
    
public:
    Fan();

    int getSpeed();
    void setSpeed(int speed);
    bool isOn();
    void setOn(bool trueOrFalse);
    double getRadius();
    void setRadius(double radius);

   
    
};




 
/*

//EX03_03 – Liang Programming Exercise 9.11: the EvenNumber class


class EvenNumber
{
public:
    int value;
    
    EvenNumber()
    {
        value=0;
    }
};



//EX03_04 – Liang Programming Exercise 10.4: Sort characters in a string

 class Count
{
public:
    int count;
    Count (int c)
    {
        count = c;
    }
    
    Count ()
    {
        count = 0;
    }
};

 
*/

#endif /* Fan_h */
