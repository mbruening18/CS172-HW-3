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
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <ctime>
#include <stdio.h>
#include "Fan.h"







//EX03_01 – Liang Programming Exercise 9.2: the Fan class


//Declare fan class
class Fan
{
    //make the variables private
private:
    
    //speed specifies how fast the fan is going
    int Speed;
    //wheter the fan is on
    bool On;
    //what the radius of the fan is
    double Radius;
    
    //make the variables public
public:
    
    //no arg constructor
    Fan();

    //gets the speed
    int getSpeed();
    //sets the speed
    void setSpeed(int speed);
    // whether fan is on
    bool isOn();
    //turn it on
    void setOn(bool trueOrFalse);
    //gets radius
    double getRadius();
    //sets radius
    void setRadius(double radius);
    
};











#endif /* Fan_h */
