/* 
 * File:   main.cpp
 * Author: Robertus Sentosa
 * Created on October 14, 2016, 1:55 PM
 * Purpose:  Calculate total value of a person's stock
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char answer;                  //answer for looping
    int numsha, stocpri;         //Number of shares, Stock price
    float frac1, frac2, totpri;  //Numerator of portion, denominator of portion, total price
    
    //Looping
    do{
    
    //Input or initialize values Here
    cout<<"This program will determine the total value of your stock."<<endl;
    cout<<"Number of shares owned of the stock?"<<endl;
    cin>>numsha;
    cout<<"Whole dollar amount of the stock?"<<endl;
    cin>>stocpri;
    cout<<"Fractional portion of the stock? (enter two numbers):"<<endl;
    cin>>frac1>>frac2;
            
    //Input/Process values 
    if(numsha<0||stocpri<=0||frac2<=0||frac1<=0){
        cout<<"Error! Invalid input!"<<endl;
        return 1;//Return failure
        }
    else 
    
    //Process/Calculations Here
    totpri=stocpri*(numsha*frac1/frac2);
            
    //Displays only two decimal places
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);    
    
    //Output Located Here
    cout<<"Your total value for the stock is: $"<<totpri<<endl;
    
    //Looping
    cout<<"Would you like to run the program again?"<<endl;
    cin>>answer;
    }while((answer=='y')||(answer=='Y'));

    //Exit
    return 0;
}