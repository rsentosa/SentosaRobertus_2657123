/* 
   File:   main
   Author: Robertus Sentosa
   Created on October 14, 2016, 6:32 PM
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
    char answer;                                 //answer for looping
    float prictod, pricago, rateinf, incrani;    //Price today, Price 1 year ago, Inflation rate, Annual increase
    
    //Looping
    do{
    
    //Input values
    cout<<"Enter the price of a large drink today:"<<endl;
    cin>>prictod;
    cout<<"Enter the price of a large drink a year ago:"<<endl;
    cin>>pricago;
    
    //Input Validation
    if(prictod<=0||pricago<=0){
        cout<<"Enter a positive number."<<endl;
        return 1;//Return failure
        }
    else
    
    //Process values -> Display Output
    rateinf=(prictod-pricago)/pricago*100;
    incrani=rateinf*prictod/100;
    
    //Displays only two decimal places
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);    
    
    cout<<"Inflation rate: "<<rateinf<<"%"<<endl;
    cout<<"In a year the cost of a large drink will be:  $"<<incrani+prictod<<endl;
    cout<<"In 2 years the cost of a large drink will be: $"<<incrani*2+prictod<<endl;
    
    //Looping
    cout<<"Would you like to run the program again?"<<endl;
    cin>>answer;
    }while((answer=='y')||(answer=='Y'));

    //Exit Program
    return 0;
}