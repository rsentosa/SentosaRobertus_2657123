/* 
 * File:   main.cpp
 * Author: Robertus Sentosa
 * Created on October 11, 2016, 5:25 PM
 * Purpose:  Calculate the better MPG of 2 cars.
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
    float galgas, mpg, caruno, cardos; //gallons of gas, miles per hour, first car, second car
    char answer;                       //answer for looping
    int miles, litrgas;                 //Miles traveled, liters of gas
  
             
    //Looping
    do{
    
    //Input/Process values 
    cout<<"This program will compare the two car's MPG to find the superior one."<<endl; 
    cout<<"Enter the liters of gas used followed by the miles traveled for car 1:"<<endl;
    cin>>litrgas>>miles;
    galgas=litrgas*LITRGAL;
    mpg=miles/galgas;
    caruno=mpg;
                
    //Input/Process values 
    cout<<"Enter the liters of gas used followed by the miles traveled for car 2:"<<endl;
    cin>>litrgas>>miles;
    galgas=litrgas*LITRGAL;
    mpg=miles/galgas;
    cardos=mpg;
     
    //Displays only two decimal places
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);   
    
    //Display Output
    if (caruno>cardos){
    cout<<"Car 1 is superior with "<<caruno<<" MPG"<<endl;
    cout<<"Car 2 is inferior with "<<cardos<<" MPG"<<endl;
    }else if (caruno<cardos){
    cout<<"Car 2 is superior with "<<cardos<<" MPG"<<endl;
    cout<<"Car 1 is inferior with "<<caruno<<" MPG"<<endl;
    }else if (caruno=cardos){
    cout<<"Car 1 is the same: "<<cardos<<" MPG"<<endl;
    cout<<"Car 2 is the same: "<<caruno<<" MPG"<<endl;
    }
    
    //Looping
    cout<<"Would you like to run the program again?"<<endl;
    cin>>answer;
    }while((answer=='y')||(answer=='Y'));
    
    //Exit
    return 0;
}