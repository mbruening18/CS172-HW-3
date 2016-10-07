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
#include "EvenNumber.hpp"
#include "SortCharactersinString.hpp"
#include "MyIntegerClass.hpp"


using namespace std;

int main()
{
//EX03_01 – Liang Programming Exercise 9.2: the Fan class
    
    // implements the class
    Fan F1,F2;

    // Declare the speed, radius, and on feature to the fan1 class
    F1.setSpeed(3);
    F1.setRadius(10);
    F1.setOn(true);
  
    //cout each feature of class
    cout << "Fan1 speed: " << F1.getSpeed() << endl;
    cout << "Fan1 radius: " << F1.getRadius() << endl;
    cout << "Fan1 on? " << boolalpha << F1.isOn() << endl;
    
    cout << " "<<endl;
    
    // Declare the speed, radius, and on feature to the fan2 class
    F2.setSpeed(2);
    F2.setRadius(5);
    F2.setOn(false);
    
    //cout each feature of class
    cout << "Fan2 speed: " << F2.getSpeed() << endl;
    cout << "Fan2 radius: " << F2.getRadius() << endl;
    cout << "Fan2 on? " << boolalpha << F2.isOn() << endl;

    cout << " "<<endl;
    
//EX03_02 – Liang Programming Exercise 9.6: Algebra: quadratic equations
    
    //declare integers a,b,c
    int a = 0;
    int b = 0;
    int c = 0;

    //have user enter the diffrent values for a,b,c
    cout << "Enter a value for a: ";
    cin >> a;
    cout << "Enter a value for b: ";
    cin >> b;
    cout << "Enter a value for c: ";
    cin >> c;
    
    cout << " "<<endl;
    
    /// implements the class
    QuadraticEquation QE(a,b,c);
    
    //calls the discriminatnt if its greater than 0
    if (QE.getDiscriminant() > 0)
    {
        cout << QE.getRoot1()<<endl;
        cout << QE.getRoot2()<<endl;
        
    }
    //if discriminatnt if its equal to 0
    else if (QE.getDiscriminant() == 0)
    {
         cout << QE.getRoot1();
    }

    //or if discriminatnt has no real roots
    else
    {
     cout << "The equation has no real roots"<<endl;
        
    }
    
    cout << " "<<endl;
    
//EX03_03 – Liang Programming Exercise 9.11: the EvenNumber class

    // have user enter an even number value
    int value=0;
    cout << "Enter an even number: ";
    cin >> value;
    
    cout << " "<<endl;
    
    //check whether the value they entered is even if not have them try again
    while(value%2==1)
    {
        cout << "The number you entered is not even, please try again: ";
        cin >> value;
        cout << "Your value is " <<value <<endl;
    }
    
    // implements the class
    EvenNumber EN1(value);
    
    // cout what the next and previous even number is
    cout << "The Next even number is : " << EN1.getNext() << endl;
    cout << "The Previous even number is : " << EN1.getPrevious() << endl;

    cout << " "<<endl;
    
//EX03_04 – Liang Programming Exercise 10.4: Sort characters in a string
    
    //have to user enter a string name or character
    string string;
    
    cout << "Enter a String s: ";
    cin >> string;
    //calls the sort function
    string = sort(string);
    //couts what the sorted string is
    cout << "The sorted string is "<< string << endl;
   
    cout << " "<<endl;
    
    
//EX03_05 – Liang Programming Exercise 10.10: the MyInteger class
    
    //Have the user enter a value
    cout << "Enter a value: ";
    cin >> value;
    // make the ones and zeros into true or false
    cout<< boolalpha;
    
    // implements the class
    MyInteger MI1(value);

    //cout if the value they entered is prime,even, or odd
    cout << "The value " <<value << ", is prime? " <<MI1.isPrime()<<endl;
    cout << "The value " <<value << ", is even? " <<MI1.isEven() <<endl;
    cout << "The value " <<value << ", is odd? " << MI1.isOdd() <<endl;

    cout << " "<<endl;
    
    //end program with return 0
    return 0;
    
    
}

