//MEHETRE MAHESH RANGNATH
//BT19CSE064 
//ASSIGNMENT-1
//DATE: 02-02-2021, 
//Qno.5

#include "test_message.h"
#include <iostream>
using namespace std;

message :: message(string m)
{
    mseg = m;
}

void message :: print()
{
    cout<<"\n"<<get_mseg();
}

void message :: print(string s)
{
    cout<<"\n"<<s<<get_mseg();
}