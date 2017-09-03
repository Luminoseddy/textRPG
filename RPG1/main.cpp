//
//  main.cpp
//  RPG1
//
//  Created by Edward Palermo on 2/25/16.
//  Copyright © 2016 PalermoX. All rights reserved.
//

#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdio.h>
using namespace std;


//Declaring Prototype functions.
void inBattle();
void inBattle2();
void bossBattle();
void specialMovesCount();
void specialMoveCountMon2();
void specialMoveCountBoss();
void warrLevelUp();
void warrStats();
void ifUserDied();

void castleEntrance();
bool room1();
bool room2();
bool room3();
void room1CLR();
void room2CLR();
void room3CLR();
void roomCLRMessage();

void castleAreaB();
bool room1B();
bool room2B();
bool room3B();
bool room4B();
void room1BCLR();
void room2BCLR();
void room3BCLR();
void room4BCLR();
void endGame();

//HERO STATS
int warrAtt=0, warrDef=0,totWarrDef=0, warrHp=0, warrLevel=0;
float totWarrAtt=0, totWarrHp=0;

//MONSTER STATS
int monAtt=0,monDef=0,totMonHp2=0, monAtt2=0,monDef2=0, totMonHp=0, giantHp=0, giantDef=0, giantAtt=0, totGiantHp=0;


//OTHER
int useSpec=0, totalExp=0, expWon=0, door=0, goldCoins=0, coinsWon=0;
char battleChoice, mainMenu, diffLv, quitOpt, heroChoice, helpFindStolItem, openChest, enterCastle, travel;

string charName;

int main(){

    warrAtt =2;
    warrDef =1;
    warrHp  =5;
    
    do
    {
            cout<<"Welcome to Hero Fortress!!\n\n";
            cout<<"A)Play Game\n";
            cout<<"B)Change Difficulty Level\n";
            cout<<"C)Gameplay Instructions\n";
            cout<<"D)Quit Game\n\n";
            cin>>mainMenu;
        
        switch (toupper(mainMenu))
        {
            case 'A':
                cout<<"Entering Game..\nLoading..\n";
                cout<<"Character Name: \n";
                cin>> charName;
                cout<<"\nChoose your Hero!\n\n";
                cout<<"A)Warrior\nB)Barberian (Coming soon!)\nC)Wizard (Coming soon!)\nD)Archer (Coming soon!)\nE)Elf (Coming soon!)\n";
                cin>>heroChoice;
                cout<<"\n";
                
                while(toupper(heroChoice) != 'A')
                {
                    if(toupper(heroChoice) == 'B'|| toupper(heroChoice) == 'C' || toupper(heroChoice) == 'D' || toupper(heroChoice) == 'E')
                    {
                        cout<<"Character not available yet.\n";
                        cout<<"A)Warrior\nB)Barberian (Coming soon!)\nC)Wizard (Coming soon!)\nD)Archer (Coming soon!)\nE)Elf (Coming soon!)\n";
                        cin>>heroChoice;
                        cout<<"\n";
                    }
                    else
                    {
                        cout<<"Key Invalid\n\n";
                        cout<<"A)Warrior\nB)Barberian (Coming soon!)\nC)Wizard (Coming soon!)\nD)Archer (Coming soon!)\nE)Elf (Coming soon!)\n";
                        cin>>heroChoice;
                        cout<<"\n";
                    }
                }
                
                
                switch (toupper(heroChoice))
                {
                    case 'A':
                        cout<<charName << endl;
                        cout<<"You have chosen to be a Warrior!\n";
                        cout<< charName<<" is adventuring inside the Lost Forest, and meets a Goblin named Inku.\n\n";
                        cout<<"Hello, my name is Inku, I need your help. What is your name?\n";
                        cout<<"Ummm, my name is... " << charName <<"."<<endl;
                        cout<<"What is the problem Inku?\n";
                        cout<<charName<<", a Giant around the forest stole several of my ingredients\n";
                        cout<<"that I have been using to create a powerful healing potion.\n";
                        cout<<"Without these ingrediants I won't be able to cure my wife from her illness.\n";
                        cout<<"Can you find the Giant for me and bring back my ingredients?\n";
                        cout<<"I'll reward you.\n\n";
                        cout<<charName<<", will you help Inku find the stolen ingredients (Y/N)\n";
                        cin>>helpFindStolItem;
                        cout<<"\n";
                        
                        while(toupper(helpFindStolItem) != 'Y'){
                           if(toupper(helpFindStolItem) =='Y'){
                                cout<<"Thank you "<<charName<< ",I last remember the Giant going down that path over there\n";
                                cout<<"and singing along about how happy he is going back 'home' to his fortress.\n";
                                cout<<"Please find him and bring me back the ingredients.\n";
                            }
                            else if(toupper(helpFindStolItem) == 'N'){
                                cout<<"Huh? Why not? I will reward you with a potion that can help you continue\n";
                                cout<<"your quest, don't be an ass, these ingredients are important.\n";
                                cout<<"Will you help me find the missing ingredients "<<charName<<". (Y/N)\n"<<endl;
                                cin>> helpFindStolItem;
                                cout<<"\n";
                            }
                            else{
                                cout<<"Enter Y or N to continue\n";
                                cin>>helpFindStolItem;
                            }
                        }
                        cout<<"You follow the path Inku pointed to, you see a fortrees castle.\nPress enter to continue\n";
                        cin.ignore();
                        cin.get();
                        
                        //Inside Castle Main entrance
                        castleEntrance();
                        endGame();
                        break;
                        
                    case 'B':
                        cout<<charName<<endl;
                        cout <<"You have chosen to be a Barberian!\n";
                        break;
                        
                    case 'C':
                        cout<<charName<<endl;
                        cout <<"You have chosen to be a Wizard!\n";
                        break;
                        
                    case 'D':
                        cout<<charName<<endl;
                        cout <<"You have chosen to be a Archer!\n";
                        break;
                    case 'E':
                        cout<<charName<<endl;
                        cout <<"You have chosen to be a Elf!\n";
                        break;
                }
                break;
            case 'B':
                cout<<"A)Easy\nB)Medium\nC)Hard\nD)Master\n";
                cin>>diffLv;
                
                    if (toupper(diffLv) == 'A'){
                        cout<<"Difficult lv: Easy\n";
                    }
                    else if(toupper(diffLv) == 'B'){
                        cout<<"Difficult lv: Medium\n";
                    }
                    else if(toupper(diffLv)=='C'){
                        cout<<"Difficult lv: Hard\n";
                    }
                    else if(toupper(diffLv)=='D'){
                        cout<<"Difficult level: Master\n";
                    }
                    else{
                        cout<<"You didn't choose a difficult level try again\n\n";
                        cin>>diffLv;
                    }
                break;
                
            case 'C':
                cout<<"GAMEPLAY\n---------------\n";
                cout<<"Continue through the Castle's hallways and rooms and defeat enemies to find clues and\n";
                cout<<"keys to make it to the 25th floor!\nGood Luck!!\n";
                break;
                
            case 'D':
                cout<<"Game is quitting\n";
                cout<<"Are you sure you want to quit? (Y/N)\n";
                cin>>(quitOpt);
                break;
           
        }
    }while (toupper(quitOpt) != 'Y' || toupper(mainMenu) != 'D');
    cout<<"Thanks for playing!\n\n";
    return 0;
}

void castleEntrance()
{
    bool firstEntrance = true;
    bool room1Cleared = false;
    //bool room2Cleared = false;
    bool room3Cleared = false;
    
    while(true)
    {
        
            if(firstEntrance)
                cout<<"Inside the castle main entrance you see 3 doorways, which door would you like to go to?\n";
            else
                cout<<"Back in main room, which door would you like to go to?\n";
        
            cout<<"Room 1\nRoom 2 \nRoom 3\n--------------\n9: Character stats\n";
            cin>>door;
            cout<<"\n";
        
            while(!(door == 1 || door == 2 || door == 3 || door == 9))
            {
              cout<<"Enter a door number 1, 2, 3, or 9\n";
              cin.clear();
              cin.ignore(numeric_limits<streamsize>::max(), '\n'); // determine how many characters to ignore from the cin input, aka max()
              cout << "Not in exist\n";
              cin>>door;
              cout<<"\n";
            }

            //Starting with door 1
            if(door == 1)
            {
                if(room1Cleared == true)
                    room1CLR();
                else
                    room1Cleared = room1();
                firstEntrance = false;
            }
            //If starting with room 2
            if(door == 2)
            {
                if(room1Cleared and room3Cleared)
                {
                    castleAreaB();
                    break;
                }
                else
                {
                    cout<<"You must clear room 1 and 3.\nPress enter to continue\n";
                    cin.ignore();
                    cin.get();
                }
                firstEntrance = false;
            }
            //If starting with room 3
            if(door == 3)
            {
                if(room3Cleared)
                    room3CLR();
                else
                    room3Cleared = room3();
                firstEntrance = false;
            }
            if(door == 9)
                warrStats();
    }
}

bool room1()
{
     cout<<"Entering room 1, you spot an enemy!\n\n";
     inBattle();
     return true;
}

bool room2()
{
     cout<<"Can't continue till doors 1 and 3 are clear.\n";
     return true;
}

bool room3(){
    cout<<"Walking inside you spot a chest, would you like to open it? (Y/N)\n";
    cin >>openChest;
   
        if (toupper(openChest) == 'Y'){
            cout<<"A monster appears!\n\n";
            inBattle();
            cout<<"You open chest\n";
            coinsWon = rand() %100;
            cout<<"You recieve a wooden sword, and "<<coinsWon<<" gold coins!\n\n";
            goldCoins += coinsWon;
        }
        else{
            while(toupper(openChest)!='Y'){
                cout<<"Enter Y to open chest\n";
                cin>>openChest;
            }
            cout<<"A monster appears!\n\n";
            inBattle();
            cout<<"You open chest\n";
            coinsWon = rand() %100;
            cout<<"You recieve a wooden sword, and "<<coinsWon<<" gold coins!\n\n";
            goldCoins += coinsWon;
        }
    cout<<"Press enter to continue back to main entrance\n";
    cin.ignore();
    cin.get();
    return true;
}

void room1CLR() {roomCLRMessage();}
void room2CLR() {roomCLRMessage();}
void room3CLR() {roomCLRMessage();}
void castleAreaBCLR(){}

void castleAreaB(){
     bool castleRoomB   = true;
     bool room1BCleared = false;
     bool room2BCleared = false;
     bool room3BCleared = false;
     bool room4BCleared = false;


    while(true){
        if(castleRoomB){
            cout<<"Deeper inside the castle, which door would you like to go to?\n";
        }

        else {
            cout<<"Back in castle room B, which door would you like to go to?\n";
        }
        cout<<"Room 1B\nRoom 2B\nRoom 3B\nRoom 4B\n--------------\n9: Character stats\n";
        cin>>door;
        cout<<"\n";
        while(!(door == 1 || door == 2 || door == 3 || door == 4 || door == 9))
        {
            cout<<"Enter a door number 1, 2, 3, 4 or 9\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // determine how many characters to ignore from the cin input, aka max()
            cout << "Not in exist\n";
            cin>>door;
            cout<<"\n";
        }

        //Starting with door 1
        if(door == 1){
            if(room1BCleared == true) {
                room1BCLR();
            }
            else{
                room1BCleared = room1B();
            }
            castleRoomB = false;
        }
        
        //If starting with room 2
        if(door == 2){
            if(room2BCleared == true) {
                room2BCLR();
            }
            else{
                room2BCleared = room2B();
            }
            castleRoomB = false;
        }
        
        //If starting with room 3
        if(door == 3){
            if(room3BCleared == true) {
                room3BCLR();
            }
            else {
                room3BCleared = room3B();
            }
            castleRoomB = false;
        }
        
        if(door == 4){
            if(room1BCleared and room2BCleared and room3BCleared){
                if (room4BCleared){
                    room4BCLR();
                }
                else{
                    room4BCleared = room4B();
                    break;
                }
            }
            else{
                cout<<"You must clear both room 1, 2 and 3.\nPress enter to continue\n";
                cin.ignore();
                cin.get();
            }
                castleRoomB = false;
        }
        if(door==9){
            warrStats();
        }
    }
}


//Second room of the castle.
bool room1B(){
    cout<<"You spot a chest, would you like to open it? (Y/N)\n";
    cin>>openChest;
    
    if (toupper(openChest) == 'Y'){
        cout<<"A monster appears!!!\n\n";
        inBattle2();
        cout<<"You open chest\n";
        coinsWon = rand() %100;
        cout<<"You recieve an amulet, and "<<coinsWon<<" gold coins!\n";
        goldCoins += coinsWon;
    }
    else{
        while(toupper(openChest)!='Y'){
            cout<<"Enter Y to open chest\n";
            cin>>openChest;
        }
        cout<<"A monster appears!!!\n\n";
        inBattle2();
        cout<<"You open chest\n";
        coinsWon = rand() %100;
        cout<<"You recieve a amulet, and "<<coinsWon<<" gold coins!\n";
        goldCoins += coinsWon;
    }
    cout<<"Press enter to continue\n";
    cin.ignore();
    cin.get();
    return true;
}

bool room2B(){
    cout<<"You spot a chest, would you like to open it? (Y/N)\n";
    cin>>openChest;
    
    if (toupper(openChest) == 'Y'){
        cout<<"A monster appears!!!\n\n";
        inBattle2();
        cout<<"You open chest\n";
        coinsWon = rand() %100;
        cout<<"You recieve bronze Helmet, and "<<coinsWon<<" gold coins!\n";
        goldCoins += coinsWon;
    }
    else{
        while(toupper(openChest)!='Y'){
            cout<<"Enter Y to open chest\n";
            cin>>openChest;
        }
        cout<<"A monster appears!!!\n\n";
        inBattle2();
        cout<<"You open chest\n";
        coinsWon = rand() %100;
        cout<<"You recieve a bronze helmet, and "<<coinsWon<<" gold coins!\n";
        goldCoins += coinsWon;
    }
    return true;
}

bool room3B(){
    cout<<"You spot a chest, would you like to open it? (Y/N)\n";
    cin>>openChest;
    
    if (toupper(openChest) == 'Y'){
        cout<<"A monster appears!!!\n\n";
        inBattle2();
        cout<<"You open chest\n";
        coinsWon = rand() %100;
        cout<<"You recieve a healing potion, and "<<coinsWon<<" gold coins!\n";
        goldCoins += coinsWon;
    }
    else{
        while(toupper(openChest)!='Y'){
            cout<<"Enter Y to open chest\n";
            cin>>openChest;
        }
        
        cout<<"A monster appears!!!\n\n";
        inBattle2();
        cout<<"You open chest\n";
        coinsWon = rand() %100;
        cout<<"You recieve a healing potion , and "<<coinsWon<<" gold coins!\n";
        goldCoins += coinsWon;
    }

    return true;
}

bool room4B(){
    bossBattle();
    return true;
}

void room1BCLR(){
    roomCLRMessage();
}

void room2BCLR(){
    roomCLRMessage();
}

void room3BCLR(){
    roomCLRMessage();
}

void room4BCLR(){
    cout<<"Castle 100% completed\n";
    cout<<"\n\n";
}


void bossBattle(){
    
    warrLevelUp();
    totGiantHp  =100;
    giantDef = rand()%1+5;
    giantAtt = rand()%5+12;
    
    cout<<"We have it to the boss room\n";
    cout<<"Hello "<<charName<<" I have been waiting for you..\n";
    cout<<charName<<":You're the one that has Inku's ingredients.\nHand it over!!\nGiant:Ha! not without a fight!\n";
    cout<<charName<<" A battle between you and I is no challenge, I would just hand it over if I were you\n";
    cout<<"Giant: Hahahahahaaaa!!\nYou really think I am going to hand it over to you?!! Without a fight?!!\nKeep dreaming!\n";
    cout<<charName<<":Alright, you asked for it\n\n";
    cout<<"Let the battle begin!!\n\nPress enter to continue.\n";
    cin.ignore();
    cin.get();
    
    while(totGiantHp >= 0 || totWarrHp <= 0){
        cout<<"A)Attack\nB)Defense\nC)Special Attack\n\n";
        cin >> battleChoice;
        switch (toupper(battleChoice)){
                
            case 'A':
                cout <<"Attack!: ";
                totGiantHp = (totGiantHp - totWarrAtt)+giantDef;
                cout<<"Total enemy health: "<< totGiantHp << endl;
                cout<<"Enemy attacks!: ";
                totWarrHp = (totWarrHp - giantAtt)+totWarrDef;
                cout<<"Total Hero health: "<< totWarrHp <<endl;
                break;
                
            case 'B':
                cout <<"Defend!\nEnemy hits!: ";
                totWarrHp = (totWarrHp - giantAtt*(1/2));
                cout<<"Hero health: "<<totWarrHp<<endl;
                break;
                
            case 'C':
                cout <<"Special attack!\n";
                cout <<"Special attack! :";
                totGiantHp =totMonHp -totWarrAtt*2;
                cout<<"Monster HP: "<<totGiantHp<< endl;
                cout<<"Enemy attacks!: ";
                totWarrHp= totWarrHp - giantAtt;
                cout<<charName<<" HP: "<<totWarrHp<<endl;
                specialMoveCountBoss();
                break;
        }
    }
    
    cout<<"Giant: Ahhh!! you fool! You have defeated me only in this battle, we shall meet again!\n\n";
    cout<<"You have obtained Inku's ingredients!\n\n";
    cout<<"**Portal Appears**\n\nPress enter to enter portal and teleport back to Inku\n";
    cin.ignore();
    cin.get();
}

void inBattle(){
    
    warrLevelUp();
    
    cout<<"Warrior Level: "<<warrLevel<<endl;
    
    while(totMonHp >= 0 || totWarrHp <= 0){         //Keep looping till it defeats what happens in while.
    
        cout<<"A)Attack\nB)Defense\nC)Special Attack\n\n";
        cin >> battleChoice;
        
        switch (toupper(battleChoice)){
                
            case 'A':
                cout <<"Attack!: ";
                totMonHp = (totMonHp - totWarrAtt)+monDef;
                cout<<"Enemy health: "<< totMonHp << endl;
                cout<<"Enemy attacks!: ";
                totWarrHp = (totWarrHp - monAtt)+totWarrDef;
                cout<<charName<< " health: "<< totWarrHp <<endl;
                ifUserDied();
                cout<<"\n";
                break;
                
            case 'B':
                cout <<"Defend!\nEnemy hits!: ";
                totWarrHp = (totWarrHp - monAtt*(1/2));
                cout<<charName<<" health: "<<totWarrHp<<endl;
                cout<<"\n";
                break;
                
            case 'C':
                cout <<"Special attack! :";
                totMonHp =totMonHp -totWarrAtt*2;
                cout<<"Monster HP: "<<totMonHp<< endl;
                cout<<"Enemy attacks!: ";
                totWarrHp= totWarrHp - monAtt;
                cout<<charName<<" HP: "<<totWarrHp<<endl;
                specialMovesCount();
                break;
        }
    }
    cout<<"Enemy defeated.\n";
    
    srand(static_cast<unsigned int>(time(0)));
    coinsWon = rand() %5 + 100;
    expWon = 50;
    goldCoins += coinsWon;
    totalExp += expWon;
    
    cout<<"You earned: "<<coinsWon<< " of gold coins\n";
    cout<<"You earned: " << expWon <<" exp\n\n";
    cout<<"Total Exp: "<<totalExp<<".\n\nPress enter to continue\n";
    cin.ignore();
    cin.get();
   }

void inBattle2(){
    warrLevelUp();
    
    totMonHp2= 30;
    monDef2 =rand()%1+2;
    monAtt2= rand() %2+7;
    
    
    while(totMonHp2 >= 0 || totWarrHp <= 0){
        cout<<"A)Attack\nB)Defense\nC)Special Attack\n\n";
        cin >> battleChoice;
        switch (toupper(battleChoice)){
                
            case 'A':
                cout <<"Attack!: ";
                totMonHp2 = (totMonHp2 - totWarrAtt)+monDef2;
                cout<<"Enemy health: "<< totMonHp2 << endl;
                cout<<"Enemy attacks!: ";
                totWarrHp = (totWarrHp - monAtt2)+totWarrDef;
                cout<<charName<< " health: "<< totWarrHp <<endl;
                cout<<"\n";
                break;
                
            case 'B':
                cout <<"Defend!\nEnemy hits!: ";
                totWarrHp = (totWarrHp - monAtt2*(1/2));
                cout<<charName<<" health: "<<totWarrHp<<endl;
                cout<<"\n";
                break;
                
            case 'C':
                cout <<"Special attack!\n";
                totMonHp2 =totMonHp2 -totWarrAtt*2;
                cout<<"Monster HP: "<<totMonHp2<< endl;
                cout<<"Enemy attacks!: ";
                totWarrHp= totWarrHp - monAtt2;
                cout<<charName<<" HP: "<<totWarrHp<<endl;
                specialMoveCountMon2();
                cout<<"\n";
                break;
        }
    }
    cout<<"Enemy defeated.\n";
    
    srand(static_cast<unsigned int>(time(0)));
    coinsWon  = rand() % 100;
    expWon    = 55;
    goldCoins+= coinsWon;
    totalExp += expWon;
    
    cout<<"You earned: "<<coinsWon<< " of gold coins\n";
    cout<<"You earned: "<<expWon<<" exp\n\n";
    cout<<"Total Exp: " <<totalExp<<".\n\nPress enter to continue\n";
    cin.ignore();
    cin.get();
}

void specialMovesCount()
{
    //This where the loop for Special move count will go;
    const int MAX_TURNS = 4;
    
    //Referencing totMonHp to totalMonHp
    int& totalMonHp = totMonHp;
    
    useSpec =0;
    ++useSpec;
    
    cout<<"Current monster health using reference.. "<<totalMonHp<<endl;
    
   do{
        cout<<"\nA)Attack\nB)Defense\nC)(Can't Use) Moves Left:"<< useSpec<< "\n";
        cin >> battleChoice;
        
        switch (toupper(battleChoice)){
            case 'A':
                totalMonHp = (totalMonHp - totWarrAtt);
                cout<<"Enemy Health: "<< totalMonHp << endl;
                cout<<"Enemy Attacks!: ";
                totWarrHp = (totWarrHp - monAtt);
                cout<<charName<<" health: "<< totWarrHp <<endl;
                ++useSpec;
                cout<<"Moves Left:"<< useSpec<< "/4\n";
                break;
                
            case 'B':
                cout <<"Defend!\nEnemy hits!\n";
                totWarrHp = (totWarrHp - monAtt*(1/2));
                cout<<"Hero health: "<<totWarrHp<<endl;
                ++useSpec;
                cout<<"Moves Left:"<< useSpec<< "/4\n";
                break;
                
            case 'C':
                cout <<"Can't use: Moves Left:"<< useSpec<< "/4 \n\n";
                break;
        }
   } while (totalMonHp >=0 || totWarrHp <=0 || useSpec == MAX_TURNS);
}

void specialMoveCountMon2()
{
    //This where the loop for Special move count will go;
    const int MAX_TURNS = 4;
    useSpec =0;
    ++useSpec;
    do{
        cout<<"\nA)Attack\nB)Defense\nC)(Can't Use) Moves Left:"<< useSpec<< "\n";
        cin >> battleChoice;
        
        switch (toupper(battleChoice)){
            case 'A':
                totMonHp2 = (totMonHp2 - totWarrAtt);
                cout<<"Total enemy health: "<< totMonHp2 << endl;
                cout<<"Enemy attacks!\n";
                totWarrHp = (totWarrHp - monAtt2);
                cout<<"Total Hero health: "<< totWarrHp <<endl;
                ++useSpec;
                break;
                
            case 'B':
                cout <<"Defend!\nEnemy hits!\n";
                totWarrHp = (totWarrHp - monAtt2*(1/2));
                cout<<"Hero health: "<<totWarrHp<<endl;
                ++useSpec;
                cout<<"Moves Left:"<< useSpec<< "/4\n";
                break;
                
            case 'C':
                cout <<"Can't use: Moves Left:"<< useSpec<< "/4 \n";
                break;
        }
    }while (useSpec == MAX_TURNS || totMonHp2 >= 0 || totWarrHp <= 0);
}


void specialMoveCountBoss(){
    //This where the loop for Special move count will go;
    const int MAX_TURNS = 4;
    useSpec =0;
    ++useSpec;
    do{
        cout<<"\nA)Attack\nB)Defense\nC)(Can't Use) Moves Left:"<< useSpec<< "\n";
        cin >> battleChoice;
        
        switch (toupper(battleChoice)){
            case 'A':
                totGiantHp = (totGiantHp - totWarrAtt);
                cout<<"Total enemy health: "<< totGiantHp << endl;
                cout<<"Enemy attacks!\n";
                totWarrHp = (totWarrHp - giantAtt);
                cout<<"Total Hero health: "<< totWarrHp <<endl;
                ++useSpec;
                break;
                
            case 'B':
                cout <<"Defend!\nEnemy hits!\n";
                totWarrHp = (totWarrHp - giantAtt*(1/2));
                cout<<"Hero health: "<<totWarrHp<<endl;
                ++useSpec;
                cout<<"Moves Left:"<< useSpec<< "/4\n";
                break;
                
            case 'C':
                 cout <<"Can't use: Moves Left:"<< useSpec<< "/4 \n";
                 break;
        }
    }while (useSpec == MAX_TURNS || totGiantHp >= 0 || totWarrHp <= 0);
}

void roomCLRMessage()
{
     cout<<"Room has been completed\nPress enter to continue\n";
     cin.ignore();
     cin.get();
}



void endGame()
{
        cout<<charName <<": Hello Inku, I have found the Giant in the fortress castle and received the ingredients you needed\n";
        cout<<"to cure your wife."<<endl<<"Inku: Thank you "<<charName<<". You are a great hero! I can now make this potion to\n";
        cout<<"save my wife! Here please take this as a reward for helping me.\nPress enter to continue\n\n";
        cin.ignore();
        cin.get();
        cout<< "You recieve a power up potion!\n";
        cout<< "Quest completed! You are now teleported to city of Falador.\n\n";
}

void ifUserDied()
{    if (totWarrHp <= 0)
        {
            cout<<"Oh dear, you are dead.";
        }

}

void warrLevelUp(){
//Calculate how much exp is required per level
    
/*
    int levels = 5;
    int xp_for_first_level = 50;
    int xp_for_last_level = 250;
    
    double B = log((double)xp_for_last_level / xp_for_first_level) / (levels - 1);
    double A = (double)xp_for_first_level / (exp(B) - 1.0);
    
    for (int i = 1; i <= levels; i++)
    {
        int old_xp = round(A * exp(B * (i - 1)));
        int new_xp = round(A * exp(B * i));
        cout << "Level: "<<i<< " Total Exp needed: " << (new_xp - old_xp) <<endl;
    }
*/
    static const int required_experience[] =        //Using an Array[]
    {
        0, 50, 75, 95, 112, 167, 250, 330
    };
    
    while(totalExp >= required_experience[warrLevel])
        ++warrLevel;
    
    totMonHp= 10*warrLevel;
    monAtt  = (rand()%1+3)*warrLevel;
    monDef  = 2*warrLevel;
    
    
    totWarrAtt = (warrAtt+1) *warrLevel;
    totWarrHp  = (warrHp +10)*warrLevel;
    totWarrDef =  warrDef    *warrLevel;
}

 void warrStats()
{
    warrLevelUp();

    cout<<"Level: "    <<warrLevel <<endl;
    cout<<"Attack: "   <<totWarrAtt<<endl;
    cout<<"Hitpoints: "<<totWarrHp <<endl;
    cout<<"Defense: "  <<totWarrDef<<endl;
    cout<<"Total Exp: "<<totalExp  <<endl;
    cout<<"Coins: "    <<goldCoins <<endl;
    cout<<"\n";
}
