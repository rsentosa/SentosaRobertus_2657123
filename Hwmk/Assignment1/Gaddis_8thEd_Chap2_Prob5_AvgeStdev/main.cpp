/* 
   File:   main
   Author: Robertus Sentosa
   Created on September 21, 2016, 10:41 AM
   Purpose: Average of Values
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cmath>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int a;
    int b;
    int c;
    int d;
    int e; 
    float avg,stdev;
    
    //Input values
    cout<<"This program calculates the mean and standard deviation"<<endl;
    a = 28;
    b = 32; 
    c = 37;
    d = 24; 
    e = 33; 
    
    //Process values -> Map inputs to Outputs
    avg=(a+b+c+d+e)/5;
    stdev=pow(((a-avg)*(a-avg)+(b-avg)*(b-avg)+(c-avg)*(c-avg)+
            (d-avg)*(d-avg)+(e-avg)*(e-avg))/4,0.5);
    
    //Display Output
    cout<<"The input values = "<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
    cout<<"The mean = "<<avg<<endl;
    cout<<"The standard Deviation = "<<stdev<<endl;
    
    //Exit Program
    return 0;
}