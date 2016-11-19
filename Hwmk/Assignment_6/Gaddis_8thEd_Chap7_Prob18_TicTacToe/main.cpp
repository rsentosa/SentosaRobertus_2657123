/* 
   File:   main.cpp
   Author: Robertus Sentosa
   Created : November 18th, 2016, 3:45 PM
 * Purpose: tictactoe
 */

//System Libraries
#include <iostream>   //Input/Output objects

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
char TTT[3][3]={'1','2','3','4','5','6','7','8','9'};
char player = 'x';
//Function prototypes
void draw();            //create 3x3
void Input();           //replace number with either x or o
void Player();          //switch between players
char win();             //Win condition
//Execution Begins Here!
int main(int argc, char** argv) {
    //Display Output
    draw();
    while(1){
        Input();
        draw();
        if(win()=='x'){
            cout<<"x wins"<<endl;
            break;
        }
        else if (win()=='o'){
            cout<<"o wins"<<endl;
            break;
        }
        Player();
    }
    return 0;
}
void draw()
{
    cout<<"Tic Tac Toe"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<TTT[i][j]<<" ";
        }
        cout<<endl;
    }
}
void Input(){
    int a;
    cout<<"Press the number of the field: ";
    cin>>a;
    
    if (a==1)
    {
        if (TTT[0][0]=='1')
        TTT[0][0]=player;
        else
        {
            cout<<"Field is already in use"<<endl;
        }
    }
    else if (a==2)
    {
        if (TTT[0][1]=='2')
        TTT[0][1]=player;
        else
        {
            cout<<"Field is already in use"<<endl;
        }
    }
    else if (a==3)
    {
        if (TTT[0][2]=='3')
        TTT[0][2]=player;
        else
        {
            cout<<"Field is already in use"<<endl;
        }
    }
    else if (a==4)
        {
        if (TTT[1][0]=='4')
        TTT[1][0]=player;
        else
        {
            cout<<"Field is already in use"<<endl;
        }
    }
    else if (a==5)
        {
        if (TTT[1][1]=='5')
        TTT[1][1]=player;
        else
        {
            cout<<"Field is already in use"<<endl;
        }
    }
    else if (a==6)
        {
        if (TTT[1][2]=='6')
        TTT[1][2]=player;
        else
        {
            cout<<"Field is already in use"<<endl;
        }
    }
    else if (a==7)
        {
        if (TTT[2][0]=='7')
        TTT[2][0]=player;
        else
        {
            cout<<"Field is already in use"<<endl;
        }
    }
    else if (a==8)
        {
        if (TTT[2][1]=='8')
        TTT[2][1]=player;
        else
        {
            cout<<"Field is already in use"<<endl;
        }
    }
    else if (a==9)
        {
        if (TTT[2][2]=='9')
        TTT[2][2]=player;
        else
        {
            cout<<"Field is already in use"<<endl;
        }
    }
}
void Player(){
    if(player=='x')
        player='o';
    else
        player ='x';
}
char win(){
    //first player
    //Horizontal
    if (TTT[0][0] =='x' && TTT[0][1] =='x' && TTT[0][2] =='x')
        return 'x';
    if (TTT[1][0] =='x' && TTT[1][1] =='x' && TTT[1][2] =='x')
        return 'x';
    if (TTT[2][0] =='x' && TTT[2][1] =='x' && TTT[2][2] =='x')
        return 'x';
    //Vertical
    if (TTT[0][0] =='x' && TTT[1][0] =='x' && TTT[2][0] =='x')
        return 'x';
    if (TTT[0][1] =='x' && TTT[1][1] =='x' && TTT[2][1] =='x')
        return 'x';
    if (TTT[0][2] =='x' && TTT[1][2] =='x' && TTT[2][2] =='x')
        return 'x';
    //diagonal
    if (TTT[0][0] =='x' && TTT[1][1] =='x' && TTT[2][2] =='x')
        return 'x';
    if (TTT[0][2] =='x' && TTT[1][1] =='x' && TTT[2][0] =='x')
        return 'x';
    //second player
    //Horizontal
    if (TTT[0][0] =='o' && TTT[0][1] =='o' && TTT[0][2] =='o')
        return 'o';
    if (TTT[1][0] =='o' && TTT[1][1] =='o' && TTT[1][2] =='o')
        return 'o';
    if (TTT[2][0] =='o' && TTT[2][1] =='o' && TTT[2][2] =='o')
        return 'o';
    //vertical
    if (TTT[0][0] =='o' && TTT[1][0] =='o' && TTT[2][0] =='o')
        return 'o';
    if (TTT[0][1] =='o' && TTT[1][1] =='o' && TTT[2][1] =='o')
        return 'o';
    if (TTT[0][2] =='o' && TTT[1][2] =='o' && TTT[2][2] =='o')
        return 'o';
    //diagonal
    if (TTT[0][0] =='o' && TTT[1][1] =='o' && TTT[2][2] =='o')
        return 'o';
    if (TTT[0][2] =='o' && TTT[1][1] =='o' && TTT[2][0] =='o')
        return 'o';
    
    return '/';
}