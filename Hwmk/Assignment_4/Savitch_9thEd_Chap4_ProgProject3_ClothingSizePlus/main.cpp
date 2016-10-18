/* 
   File:   main
   Author: Robertus Sentosa
   Created on October 16, 2016, 11:21 PM
   Purpose:  Calculate clothing sizes based on user traits and future sizes
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
    char answer;                                           //Answer for looping
    float height, hat, jacket, waist, ftrjack, ftrwai;   //height, hat size, jacket chest size, waist size, future jacket size, future waist size
    int age, weight;                                     //age in years, weight in pounds 
   
    
    //Looping
    do{
    
    //Input values
    cout<<"This program will help find your clothing sizes."<<endl;
    cout<<"Enter your height in inches:"<<endl;
    cin>>height;
    cout<<"Enter your weight in pounds:"<<endl;
    cin>>weight;
    cout<<"Enter your age in years:"<<endl;
    cin>>age;
    
    //Process values -> Map inputs to Outputs
    hat=weight/height*2.9;      
    if(age>=40){
        jacket=height*weight/288+((age/10-3)*0.125);
        waist=weight/5.7+(((age-28)/2)*0.1);
        }       
    else if (age>=30){
        jacket=height*weight/288;
        waist=weight/5.7+(((age-28)/2)*0.1);
        }
    else{
        jacket=height*weight/288;
        waist=weight/5.7;
        }
    ftrjack=jacket+0.125;
    ftrwai=waist+0.5;

    //Displays only two decimal places
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);  

    //Display
    cout<<"Your current sizes"<<endl;
    cout<<"     hat size:             "<<hat<<" inches"<<endl;
    cout<<"     jacket size (chest): "<<jacket<<" inches"<<endl;
    cout<<"     waist size:          "<<waist<<" inches"<<endl;
    cout<<endl;
    cout<<"Your sizes after 10 years"<<endl;
    cout<<"     hat size:             "<<hat<<" inches"<<endl;
    cout<<"     jacket size (chest): "<<ftrjack<<" inches"<<endl;
    cout<<"     waist size:          "<<ftrwai<<" inches"<<endl;
    
    //Looping
    cout<<"Would you like to run the program again?"<<endl;
    cin>>answer;
    }while((answer=='y')||(answer=='Y'));
        
    //Exit Program
    return 0;
}