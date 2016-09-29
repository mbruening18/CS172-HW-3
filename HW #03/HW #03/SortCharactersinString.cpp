//
//  SortCharactersinString.cpp
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
#include "SortCharactersinString.hpp"

using namespace std;

//EX03_04 – Liang Programming Exercise 10.4: Sort characters in a string


string sort(string& s)
{
    string stur;
    stur = s;
    
    for(int i=0 ; i < stur.length();i++)
        
    {
        int smallest = i;
        
        for(int j = i+1; j < stur.length(); j++)
        {
            if(stur[j]< stur[smallest])
            {
                smallest = j;
            }
        }
        char temp = stur [smallest];
        stur [smallest]=stur[i];
        stur [i]=temp;
    }
    
    return stur;
}
