/* 
   File:   main.cpp
   Author: Robertus Sentosa
   Created on December 11th, 2016, 3:00 PM
   Purpose: Christmas Edition: Unscramble the word game! 
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <string>     //for words
#include <ctime>      //time
#include <cstdlib>    //standard library

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
class Player {
private: 
    string name;
    int highscore; 
    
public: 
    Player();
    Player(string Pname, int Phighscore); //Pname = Player name, Phighscore = Player highscore
    string getname();
    int gethighscore();
    void setname(string s); //string s name for variable
    void sethighscore(int hs); //int hs name for variable
}; 

Player::Player() {
    name = "";
    highscore = 0;
    return;
}

    Player::Player(string Pname, int Phighscore) : name(Pname), highscore(Phighscore) {}
    
    string Player::getname() {
        return name;
    }
    
    int Player::gethighscore() {
        return highscore;
    }

    void Player::setname(string s) { //string s name for variable
        name = s;
        return;
    }
    
    void Player::sethighscore(int hs) { //int hs name for variable
        highscore = hs;
        return;
    }

void MAKE_ARRAY (string arr[][2]) {
    
    string bells[] = {"lelsb", "bells"};
    string snow[] = {"owsn", "snow"};
    string candles[] = {"sdlneac", "candles"};
    string greetings[] = {"ingstgeer", "greetings"};
    string holiday[] = {"lahyido", "holiday"};
    string candy_cane[] = {"aydcn ncea", "candy cane"};
    string stockings[] = {"sksgocint", "stockings"};
    string mistletoe[] = {"ttisomeel", "mistletoe"};
    string wreath[] = {"tawerh", "wreath"};
    string decorations[] = {"nreaocotids", "decorations"};
    string elves[] = {"seelv", "elves"};
    string santa[] = {"ntaas", "santa"};
    string gifts[] = {"tsgfi", "gifts"};
    string frost[] = {"trfso", "frost"};
    string christmas_tree[] = {"mshtiscar rete", "Christmas tree"};
    string angel[] = {"gelan", "angel"};
    string grinch[] = {"ingrch", "grinch"};
    string hot_chocolate[] = {"oth occhtela", "hot chocolate"};
    string family[] = {"milyfa", "family"};
    string nutella[] = {"ellanut", "nutella"};
    string ginger_bread[] = {"inggre readb", "ginger bread"};
    string north_pole[] = {"rthno elop", "north pole"};
    string carols[] = {"olsca", "carols"};
    string celebrate[] = {"ratebcele", "celebrate"};
    string chimney[] = {"neymchi", "chimney"};
    string cookies[] = {"ookcies", "cookies"};
    string holly[] = {"yollh", "holly"};
    string icicles[] = {"clesici", "icicles"};
    string ornaments[] = {"mentsorna", "ornaments"};
    string lights[] = {"ightls", "lights"};
    
    arr[0][0]= bells[0];
    arr[0][1]= bells[1];
    arr[1][0]= snow[0];
    arr[1][1]= snow[1];
    arr[2][0]= candles[0];
    arr[2][1]= candles[1];
    arr[3][0]= greetings[0];
    arr[3][1]= greetings[1];
    arr[4][0]= holiday[0];
    arr[4][1]= holiday[1];
    arr[5][0]= candy_cane[0];
    arr[5][1]= candy_cane[1];
    arr[6][0]= stockings[0];
    arr[6][1]= stockings[1];
    arr[7][0]= mistletoe[0];
    arr[7][1]= mistletoe[1];
    arr[8][0]= wreath[0];
    arr[8][1]= wreath[1];
    arr[9][0]= decorations[0];
    arr[9][1]= decorations[1];
    arr[10][0]= elves[0];
    arr[10][1]= elves[1];
    arr[11][0]= santa[0];
    arr[11][1]= santa[1];
    arr[12][0]= gifts[0];
    arr[12][1]= gifts[1];
    arr[13][0]= frost[0];
    arr[13][1]= frost[1];
    arr[14][0]= christmas_tree[0];
    arr[14][1]= christmas_tree[1];
    arr[15][0]= angel[0];
    arr[15][1]= angel[1];
    arr[16][0]= grinch[0];
    arr[16][1]= grinch[1];
    arr[17][0]= hot_chocolate[0];
    arr[17][1]= hot_chocolate[1];
    arr[18][0]= family[0];
    arr[18][1]= family[1];
    arr[19][0]= nutella[0];
    arr[19][1]= nutella[1];
    arr[20][0]= ginger_bread[0];
    arr[20][1]= ginger_bread[1];
    arr[21][0]= north_pole[0];
    arr[21][1]= north_pole[1];
    arr[22][0]= carols[0];
    arr[22][1]= carols[1];
    arr[23][0]= celebrate[0];
    arr[23][1]= celebrate[1];
    arr[24][0]= chimney[0];
    arr[24][1]= chimney[1];
    arr[25][0]= cookies[0];
    arr[25][1]= cookies[1];
    arr[26][0]= holly[0];
    arr[26][1]= holly[1];
    arr[27][0]= icicles[0];
    arr[27][1]= icicles[1];
    arr[28][0]= ornaments[0];
    arr[28][1]= ornaments[1];
    arr[29][0]= lights[0];
    arr[29][1]= lights[1];
}

void DISPLAY_MENU(string &username) {
    string input;
    cout << " Welcome to the Christmas Edition: Unscramble the Word Game!" << endl;
    cout << endl;
    cout << " How to play: Unscramble as many words as you can to earn points!"<< endl;
    cout << " But you better hurry, you only have 30 seconds to play!!!"<< endl;
    cout << " Please enter your name: ";
    cin >> username;
    
    cout << " ********"<< " Enter any key to Start the Game "<< "********"<<endl;
    cin >> input;
    return;
}

bool CHECK (string arr [][2], int current, string word,int initial_time,int &current_time){
    while (word!=arr[current][1] && (current_time < 30) ){
        cout << " Incorrect! Try again!" << endl;
        current_time= time(0)-initial_time;
        cout << "Current time: " << current_time << "sec." << endl;
        getline(cin,word);
    }
    
    if(word==arr[current][1]) {
    cout << "Correct! ";
    current_time= time(0)-initial_time;
    cout << "Current time: " << current_time << "sec." << endl;
    return true;
    }
    
    current_time= time(0)-initial_time;
    return false;
}

void PLAY (string arr[][2], int &score){
    int i = 0;
    string input;
    int start_time = time(0);
    int current_time = 0;
    
    while (i<20 && current_time < 30) {
        cout << "Current word: ";
        cout << arr[i][0] << endl;
        getline(cin,input); 
        
        if(CHECK(arr, i,input, start_time,current_time)) {
            score++;
        }
        
        cout <<" Your total score is " <<score <<" point so far! " << endl;
        i++;
    }
    if(current_time > 20) {
        cout << "---------------------------" << endl;
        cout << "You ran out of time, GG." << endl;
    }
    
    return;
}

void ADD_PLAYER (Player players[], int &num_players, string pname, int phighscore){
    players[num_players] = Player(pname,phighscore);
    num_players++;
    return;
}

//Execution Begins Here!
int main() {
    //Declaration of Variables
    string words [30][2]; 
    string name; 
    int score = 0;
    int highscore = 0;
    char decide = 'Y';
    Player players[10];
    int num_players = 0;
    
    //Input values
    MAKE_ARRAY(words);
    
    while (decide == 'Y' || decide == 'y'){    
        DISPLAY_MENU(name);

        PLAY(words, score);
        
        if (score>highscore){
            highscore=score;
        }
        
        cout << name << ", your highscore is "<< highscore << "." << endl;
        
        ADD_PLAYER(players, num_players, name, highscore);
        
        cout << "======================================" << endl;
        cout << "Scores:" << endl;
        
        for(int i = 0; i < num_players; i++) {
            cout << players[i].getname() << "......." << players[i].gethighscore() << "points." << endl;
        }
        cout << "======================================" << endl;
        
        cout << " Enter 'Y' to play again! Press any key to exit the game. " << endl;
        cin >> decide;
    }
    
    //Exit Program
    return 0;
}