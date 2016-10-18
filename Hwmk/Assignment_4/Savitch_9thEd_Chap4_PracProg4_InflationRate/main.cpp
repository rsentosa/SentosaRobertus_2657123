/* 
   File:   main
   Author: Robertus Sentosa
   Created on October 15, 2016, 7:34 PM
   Purpose:  Calculate inflation rate using the cost of a large drink.
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    char answer;                         //answer for looping
    float prictod, pricago, rateinf;     //Price today, Price 1 year ago, Inflation rate
    
    //Looping
    do{
    
    //Input values
    cout<<"This program will calculate the inflation rate using the cost of a large drink."<<endl;
    cout<<"Enter the price of a large drink today:"<<endl;
    cin>>prictod;
    cout<<"Enter the price of a large drink a year ago:"<<endl;
    cin>>pricago;
    
    //Input/Process values 
    if(prictod<=0||pricago<=0){
        cout<<"Enter a positive number."<<endl;
        return 1;//Return failure
        }
    else
    
    //Process values -> Map inputs to Outputs
    rateinf=(prictod-pricago)/pricago*100;
    
    //Displays only two decimal places
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);  
    
    //Display Output
    cout<<"The inflation rate is : "<<rateinf<<"%"<<endl;
    
    //Looping
    cout<<"Would you like to run the program again?"<<endl;
    cin>>answer;
    }while((answer=='y')||(answer=='Y'));

    //Exit Program
    return 0;
}