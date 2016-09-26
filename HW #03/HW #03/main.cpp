//
// Megan Bruening
// CS172 -- ASSIGNMENT #3
// Stephen Johnson
//
//  main.cpp
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
#include "Quadratic.hpp"
using namespace std;

int main()
{
//EX03_01 – Liang Programming Exercise 9.2: the Fan class
    
   
    Fan F1,F2;

    F1.setSpeed(3);
    F1.setRadius(10);
    F1.setOn(true);
  
    cout << "Fan1 speed: " << F1.getSpeed() << endl;
    cout << "Fan1 radius: " << F1.getRadius() << endl;
    cout << "Fan1 on? " << boolalpha << F1.isOn() << endl;
    
    F2.setSpeed(2);
    F2.setRadius(5);
    F2.setOn(false);
    
    cout << "Fan2 speed: " << F2.getSpeed() << endl;
    cout << "Fan2 radius: " << F2.getRadius() << endl;
    cout << "Fan2 on? " << boolalpha << F2.isOn() << endl;

    
    
//EX03_02 – Liang Programming Exercise 9.6: Algebra: quadratic equations
    
    int a = 0;
    int b = 0;
    int c = 0;

    cout << "Enter a value for a: ";
    cin >> a;
    cout << "Enter a value for b: ";
    cin >> b;
    cout << "Enter a value for c: ";
    cin >> c;
    
    QuadraticEquation QE(a,b,c);
    
    if (QE.getDiscriminant() > 0)
    {
        cout << QE.getRoot1()<<endl;
        cout << QE.getRoot2()<<endl;
        
    }
    else if (QE.getDiscriminant() == 0)
    {
         cout << QE.getRoot1();
    }

    else
    {
     cout << "The equation has no real roots";
        
    }
    
//EX03_03 – Liang Programming Exercise 9.11: the EvenNumber class
    
    
//EX03_04 – Liang Programming Exercise 10.4: Sort characters in a string
    /*
    string s1("I have a dream");
    string s2("Computer programming");
    
    //1
    s1[0];
    
    //s2
    s1=s2;
    
    //3
    s1 = "C++" +s2;
    
    //4
    s2 += "C++";
    
    //5
    s1 > s2;
    
    //6
    s1 >= s2;
    
    //7
    s1 < s2;
    
    //8
    s1 <= s2;
    
    //9
    s1 == s2;
    
    //10
    s1 != s2;
    
   
    
//EX03_05 – Liang Programming Exercise 10.10: the MyInteger class
    
    Count myCount;
    int times =0;
    for(int i = 0; i<100; i++)
    {
        increment (myCount,times)
        
        cout << "mycount.count is " << mycount.count;
        cout << " times is " <<times;
    }
    
     */
    return 0;
    
}

