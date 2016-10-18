/* 
   File:   main
   Author: Robertus Sentosa
   Created on October 13, 2016, 4:45 PM
   Purpose:  Calculate new credit balance after compounding interest
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
    float monrate, balance;    //monthly interest rate, initial balance
    char answer;               //answer for looping
    int months;                //number of months compounded

    
    //Looping
    do{
   
    //Input values 
    cout<<"This program will take your initial credit balance and compound monthly interest."<<endl;
    cout<<"Initial balance?"<<endl;
    cin>>balance; 
    cout<<"How many months?"<<endl;
    cin>>months;
    cout<<"Monthly rate?"<<endl;
    cin>>monrate;
    
    //Process values -> Map inputs to Outputs
    monrate=monrate/100;                 //converts percent to decimal
    do {
        balance=balance*monrate+balance; //compounds the balance
        months--;
    } while (months!=0);                 //while months hit 0 stop the loop
    
    //Displays only two decimal places
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);  
           
    //Output
    cout<<"The new due balance after compound interest is: $"<<balance<<endl;   
                
    //Looping
    cout<<"Would you like to run the program again?"<<endl;
    cin>>answer;
    }while((answer=='y')||(answer=='Y'));
        
    //Exit Program
    return 0;
}