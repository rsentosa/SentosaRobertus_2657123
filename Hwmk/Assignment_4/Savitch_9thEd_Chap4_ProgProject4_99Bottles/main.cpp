/* 
   File:   main
   Author: Robertus Sentosa
   Created on October 17th, 2016, 7:54 PM
   Purpose:  Choose how many bottles of beer are on the wall
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
    char answer;     //Answer for looping
    int bottlec;     //bottle count
    
    //Looping
    do{
   
    //Input values
    cout<<"Enter how many bottles of beer are on the wall:"<<endl;
    cin>>bottlec;
    
        //Input validation
    if(bottlec<=0||bottlec>99){
        cout<<"Pick a number between 1-99."<<endl;
        return 1;//Return failure
        }
    else
    
    //Process values -> Display Output
    do{ cout<<bottlec<<" bottles of beer on the wall, "<<endl;
        cout<<bottlec<<" bottles of beer."<<endl;
        cout<<"Take one down and pass it around, "<<endl;
        bottlec--; 
        cout<<bottlec<<" bottles of beer on the wall."<<endl;
        cout<<endl;
      }
    while(bottlec>0);  //Stop when no bottles remain
    
    //Looping
    cout<<"Would you like to run the program again?"<<endl;
    cin>>answer;
    }while((answer=='y')||(answer=='Y'));

    //Exit Program
    return 0;
}