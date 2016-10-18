/* 
   File:   main
   Author: Robertus Sentosa
   Created on October 11th, 2016, 10:15 AM
   Purpose:  Find the gravitational force of between two masses
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
float GRAVITY=6.673e-8f;  //Universal Gravity Constant cm^3/g/sec^2

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    char answer;              //Answer for looping
    float distanc;            //Distance apart
    float force;              //The force between the two objects
    float mass1;              //First Mass
    float mass2;              //Second Mass
 
    
    //Looping
    do{
    
    //Conversion of inputs
    cout<<"Enter the weight of the first object (in dynes):"<<endl;
    cin>>mass1;
    cout<<"Enter the weight of the second object(in dynes):"<<endl;     
    cin>>mass2;
    cout<<"Enter the distance between the two objects (in centimeters):"<<endl;
    cin>>distanc; 
        
    //Process values -> Map inputs to Outputs
    force=GRAVITY*mass1*mass2/(distanc*distanc);
    
    //Display Output
    cout<<"The gravitational force between the two object is : "<<force<<" dynes"<<endl;
    
    //Looping
    cout<<"Would you like to run the program again?"<<endl;
    cin>>answer;
    }while((answer=='y')||(answer=='Y'));
    
    //Exit Program
    return 0;
}