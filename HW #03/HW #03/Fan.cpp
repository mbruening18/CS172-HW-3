//
//  Function.cpp
//  HW #03
//
//  Created by Megan Bruening on 9/23/16.
//  Copyright © 2016 Megan Bruening. All rights reserved.
//

#include <stdio.h>
#include "Fan.h"




//EX03_01 – Liang Programming Exercise 9.2: the Fan class

 
Fan::Fan()
 {
 Speed = 1;
 On = false;
 Radius = 5;
 }
 
int Fan::getSpeed()
{
    return Speed;
}

void Fan::setSpeed(int speed)
{
    Speed = speed;
}

bool Fan:: isOn()
{
    return On;
}

void Fan::setOn(bool trueOrFalse)
{
    On = trueOrFalse;
}

double Fan::getRadius()
{
    return Radius;
}

void Fan::setRadius(double radius)
{
    Radius = radius;
}





//EX03_03 – Liang Programming Exercise 9.11: the EvenNumber class

/*
int getValue()
{
    return false;
}
int getNext()
{
    return EvenNumber;
}
int getPrevious()
{
    return EvenNumber;
}




//EX03_04 – Liang Programming Exercise 10.4: Sort characters in a string
 
 
//EX03_05 – Liang Programming Exercise 10.10: the MyInteger class

 void increment (Count c, int times)
{
    c.count++;
    times++;
}


 */
