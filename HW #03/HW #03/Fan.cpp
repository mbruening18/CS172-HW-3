//
//  Function.cpp
//  HW #03
//
//  Created by Megan Bruening on 9/23/16.
//  Copyright © 2016 Megan Bruening. All rights reserved.
//
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <ctime>
#include "Fan.h"


using namespace std;


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

