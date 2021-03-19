//MEHETRE MAHESH RANGNATH
//BT19CSE064 
//ASSIGNMENT-1
//DATE: 02-02-2021, 
//Qno.5
#ifndef TEST_MESSAGE_H
#define TEST_MESSAGE_H
#include<string>

using namespace std;
class message
{
    private:
        string mseg;
    public:
        message(string mseg="VNIT NAGPUR");  //single string with Default value
        string get_mseg(){ 
            return mseg; 
        }
        void set_mseg(string s){ 
            mseg = s; 
        }
        void print();
        void print(string s);
};

#endif