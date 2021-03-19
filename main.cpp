//MEHETRE MAHESH RANGNATH
//BT19CSE064 
//ASSIGNMENT-1
//DATE: 02-02-2021
//Q 5:
//program to demonstrate constructors. constructor with default argument, overloading 
//function and input argument
#include<iostream>
#include "test_message.h"

using namespace std;
int main()
{
    message m;
    m.print(); //Prints what is inside data member of string

    string p;
    cout<<"\nEnter the String: \n";
    cin>>p; //taken input of other string.
    m.print(p); 
}