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

//no arg constuctor
Fan::Fan()
// defalt fan factors
 {
 Speed = 1;
 On = false;
 Radius = 5;
 }

//gets the speed returns speed
int Fan::getSpeed()
{
    return Speed;
}

//sets speed sets equal to speed
void Fan::setSpeed(int speed)
{
    Speed = speed;
}

//gets wether it is on return on
bool Fan:: isOn()
{
    return On;
}

//sets if fan is on to true or false
void Fan::setOn(bool trueOrFalse)
{
    On = trueOrFalse;
}

//gets radius returns radius
double Fan::getRadius()
{
    return Radius;
}

//sets the radius sets equal to radius
void Fan::setRadius(double radius)
{
    Radius = radius;
}

