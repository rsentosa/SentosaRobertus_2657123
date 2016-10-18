/* 
 * File:   main.cpp
 * Author: Robertus Sentosa
 * Created on October 15, 2016, 3:47 PM
 * Purpose:  Calculate the MPG of many cars.
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
float LITRGAL=2.64179e-1f; //Conversion from liter to gallon

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float galgas, mpg;                //gallons of gas, miles per hour
    int miles, litrgas, numcar, count; //Miles traveled, liters of gas, number of cars, counter
   
    
    //Input or initialize values Here
    cout<<"This program will calculate multiple car's Miles Per Gallon (MPG)."<<endl;
    cout<<"Please enter the number of cars:"<<endl;
    cin>>numcar;
    
    //Input Validation
    if(numcar<=0){
        cout<<"Please pick a number larger than 0."<<endl;
        return 1;//Return failure
    }
    else    
     
    //Displays only two decimal places
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);    
        
    //Process/Output
    count=1;
    do {
        cout<<"Please enter the liters of gas used followed by the miles traveled for car "<<count<<":"<<endl;
        cin>>litrgas>>miles;
        galgas=litrgas*LITRGAL;
        mpg=miles/galgas;   
        cout<<"This car has traveled "<<mpg<<" miles per gallon of gas."<<endl;
        count++;
        numcar--;
       }
    while (numcar!=0);
    
  
    //Exit
    return 0;
}