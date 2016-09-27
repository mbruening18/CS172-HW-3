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











#endif /* Fan_h */
