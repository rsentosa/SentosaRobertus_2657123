/* 
 * File:   main.cpp
 * Author: Robertus Sentosa
 * Created on November 16th, 2016, 9:37 AM
 * Purpose:  Lottery
 */

//System Libraries Here
#include <iostream>  //I/O
#include <cstdlib>   //Random
#include <ctime>     //Time
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void fillAry(int [],int);
void prntAry(int [],int);
void LotAry(int [],int);
void swap(int &,int &);
void minPos(int [],int,int);
void markSrt(int [],int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the random number seed
    srand(static_cast<unsigned int>(time(0)));  //random time
    
    //Declare all Variables Here
    int const SIZE=5;
    int array[SIZE],utilize;
    
    //Input or initialize values Here
    do{
        cout<<"How many numbers would you like to draw?"<<endl;
        cout<<"Choose a number between 1 and 5"<<endl;
        cin>>utilize;
    }while(utilize<1||utilize>100);
    
    //Fill the array
    fillAry(array,utilize);
    
    //Output Located Here
    prntAry(array,utilize);
    
    //Test out minPos
    markSrt(array,utilize);
    
    //Output Located Here
    LotAry(array,utilize);
    if(prntAry==LotAry)
        cout<<"You're a grand prize winner!"<<endl;

    //Exit
    return 0;
}

void markSrt(int a[],int size){
    for(int i=0;i<size-1;i++){
        minPos(a,size,i);
    }
}

void minPos(int a[],int size,int pos){
    for(int i=pos+1;i<size;i++){
        if(a[pos]>a[i])swap(a[pos],a[i]);
    }
}

void swap(int &a,int &b){

    //In place memory Swap
    a=a^b;
    b=a^b;
    a=a^b;
}

void LotAry(int a[],int n){
    //Output Located Here
    cout<<"User"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%10==9)cout<<endl;
    }
    cout<<endl;
}

void prntAry(int a[],int n){
    //Output Located Here
    cout<<"Lottery"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%10==9)cout<<endl;
    }
    cout<<endl;
}

void fillAry(int a[],int n){
    //Fill the array
    for(int i=0;i<n;i++){
        a[i]=(rand()%9)+1;//Random 2 digit number
    }
}