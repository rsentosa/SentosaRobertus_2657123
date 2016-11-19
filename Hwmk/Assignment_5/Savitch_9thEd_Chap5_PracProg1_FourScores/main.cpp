/* 
   File:   main.cpp
   Author: Robertus Sentosa
   Created on November 09, 2016, 5:04 PM
   Purpose: Find the average and standard deviation of four scores
 */

//System Libraries
#include <iostream>  //Input/output objects
#include <cmath>     //Math library
using namespace std; //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
float finAver(int &,int &,int &,int &);
float finDev(int &,int &,int &,int &,float &);

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declaration of Variables
    int sco1,sco2,sco3,sco4; //Scores 1-4
    float average,stdDev;    //Average and Standard Deviation
    char repeat;             //Repeats the program
    
    //Initialization
    cout<<"This program is going to take 4 scores and calculate the average along with "
            "the standard deviation."<<endl;
    
    do{
        //Set values
        do{
            cout<<"Enter the first score (0-100):";
            cin>>sco1;
        }while(sco1<0||sco1>100);
        do{
            cout<<"Enter the second score (0-100):";
            cin>>sco2;
        }while(sco2<0||sco2>100);
        do{
            cout<<"Enter the third score (0-100):";
            cin>>sco3;
        }while(sco3<0||sco3>100);
        do{
            cout<<"Enter the fourth score (0-100):";;
            cin>>sco4;
        }while(sco4<0||sco4>100);

        //Process values -> Map inputs to outputs
        average=finAver(sco1,sco2,sco3,sco4);       //Sets the Average
        stdDev=finDev(sco1,sco2,sco3,sco4,average); //Sets the Standard Deviation

        //Display Output
        cout<<"Average: "<<average<<endl;
        cout<<"Standard Deviation: "<<stdDev<<endl;
        
        //Repeat the Program
        cout<<"Would you like to run this program again? (Y/N)"<<endl;
        cin>>repeat;
    }while(repeat=='y'||repeat=='Y');
    
    //Exit Program
    return 0;
}

float finAver(int &sco1,int &sco2,int &sco3,int &sco4){
    //Declare Variables
    int total=sco1+sco2+sco3+sco4;  //Totals the scores
    float average=total/4;          //Calculates average
    return average;
}

float finDev(int &sco1,int &sco2,int &sco3,int &sco4,float &avrg){
    //Declare Variables
    float stdDev;
    //Find Standard Deviation
    stdDev=pow((sco1-avrg)*(sco1-avrg)+(sco2-avrg)*(sco2-avrg)
            +(sco3-avrg)*(sco3-avrg)+(sco4-avrg)*(sco4-avrg)/4,0.5);
    return stdDev;
}