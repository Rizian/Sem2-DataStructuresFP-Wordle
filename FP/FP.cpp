#include <iostream>
#include "variables.hpp"
#include <experimental/random>
#include <bits/stdc++.h>
#include <array>

using namespace std;

int main()
{
    cout<<"Welcome to WORDLE!! "<<"\n"<<endl;
    
    while(run){
        if(attempts < 1){
                cout<<" "<<endl;
                cout<<"GAME OVER, Attempts left: "<<attempts<<endl;
                break;
        }
        cout<<" "<<endl;
        cout<<"You have "<<attempts<<" attempts left."<<endl;
        cout<<"Enter Your Answer(Letter by letter): "<<endl;
        cin>> ans1;
        cin>> ans2;
        cin>> ans3;
        cin>> ans4;
        cin>> ans5;
        char char1 = toupper(ans1);
        char char2 = toupper(ans2);
        char char3 = toupper(ans3);
        char char4 = toupper(ans4);
        char char5 = toupper(ans5);
        cout<<" "<<endl;

        char concat [5] = {char1,char2,char3,char4,char5};
        char concat1 = char1+char2+char3+char4+char5;

        if(sizeof(concat) > 5){
                cout<<"Please enter 5-letter words!!"<<endl;
                continue;
        }

        cout<<concat<<endl;

        // if(key[0] == char1){
	// 	cout<<char1<<" Exists in word, Position correct."<<endl;

        // }else if(char1 == key[1] || char1 == key[2] || char1 == key[3] || char1 == key[4]){
        //         cout<<char1<<" Exists in word, Position incorrect"<<endl;
        // }else {
        //         cout<<char1<<" Does not exist in word"<<endl;
        // }
        // //char 2
        // if(key[1] == char2){                
        //     cout<<char2<<" Exists in word, Position correct."<<endl;

        // }else if(char2 == key[0] || char2 == key[2] || char2 == key[3] || char2 == key[4]){
        //         cout<<char2<<" Exists in word, Position incorrect"<<endl;
        // }else {
        //         cout<<char2<<" Does not exist in word"<<endl;
        // }
        // //char 3
        // if(key[2] == char3){               
        //     cout<<char3<<" Exists in word, Position correct."<<endl;

        // }else if(char3 == key[0] || char3 == key[1] || char3 == key[3] || char3 == key[4]){
        //         cout<<char3<<" Exists in word, Position incorrect"<<endl;
        // }else {
        //         cout<<char3<<" Does not exist in word."<<endl;
        // }
        // //char 4
        // if(key[3] == char4){
        //     cout<<char4<<" Exists in word, Position correct."<<endl;

        // }else if(char4 == key[0] || char4 == key[1] || char4 == key[2] || char4 == key[4]){
        //         cout<<char4<<" Exists in word, Position incorrect."<<endl;
        // }else {
        //         cout<<char4<<" Does not exist in word."<<endl;
        // }
        // //char 5
        // if(key[4] == char5){
        //     cout<<char5<<" Exists in word, Position correct."<<endl;

        // }else if(char5 == key[1] || char5 == key[2] || char5 == key[3] || char5 == key[0]){
        //         cout<<char5<<" Exists in word, Position incorrect."<<endl;
        // }else {
        //         cout<<char5<<" Does not exist in word."<<endl;
        // }
        // if(concat == key){
        //         cout<<"YOU WON!! CONGRATULATIONS."<<endl;
        //         break;
        // }
        // attempts --;
    }
    
}



