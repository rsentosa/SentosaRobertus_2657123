/* 
 * File:   main.cpp
 * Author: Robertus Sentosa
 * Created on October 15, 2016, 4:00 PM
 * Purpose:  Calculate the MPG of a car.
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
    float galgas, mpg;     //gallons of gas, miles per hour
    int miles,litrgas;     //Miles traveled, liters of gas
    char answer;           //answer for looping
    
    
    
    //Looping
    do{

    //Input or initialize values Here
    cout<<"This program will calculate your car's Miles Per Gallon (MPG)."<<endl;
    cout<<"Please enter the liters of gas used:"<<endl;
    cin>>litrgas;
    cout<<"Please enter the miles traveled:"<<endl;
    cin>>miles;

    //Input validation
    if(litrgas<0||miles<0){
        cout<<"Error! Cannot calculate negative numbers!"<<endl;
        return 1;//Return failure
        }
    else

    //Process/Calculations Here
        galgas=litrgas*LITRGAL;
        mpg=miles/galgas;
        
         

    //Displays only two decimal places
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    //Output Located Here
    cout<<"The car has traveled "<<mpg<<" miles per gallon of gas."<<endl;
        
    //Looping
    cout<<"Would you like to run the program again?"<<endl;
    cin>>answer;
    }while((answer=='y')||(answer=='Y'));
    
        //Exit
        return 0;
    }