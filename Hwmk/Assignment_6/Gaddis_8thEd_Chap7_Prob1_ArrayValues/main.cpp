/* 
   File:   main
   Author: Robertus Sentosa
   Created on November 16th, 2016, 2:00 PM
   Purpose:  
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
void minmax();
//Execution Begins Here!
int main(int argc, char** argv) {
    //Display Output
    minmax();
    //Exit Program
    return 0;
}

void minmax(){
    //Declaration of Variables
    int mn,mx;      //minimum number, maximum number
    int Numb = 10;  // limit to 10 numbers
    int a[Numb];    //pick the 10 numbers 
    //Input values
    cout<<"Enter 10 values:"<<endl;
    cout<<" "<<endl;
    for(int i=0;i<10;i++){
    cout<<"Enter value:";
    cin>>a[i];
    }
    //Process values -> Map inputs to Outputs
    mn=a[0];
    mx=a[0];
    for(int i=1;i<10;i++){
        if(mn>a[i]){
                mn=a[i];
        }
        else if(mx<a[i]){
                mx = a[i];
        }
    }
    //Exit Program
    cout<<"Maximum number is: "<< mx << endl;
    cout<<"Minimum number is: "<< mn << endl;
}