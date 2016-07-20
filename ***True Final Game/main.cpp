//
//  main.cpp
//  bc the other one messed up
//
//  Created by Norma Martinez on 12/10/15.
//  Copyright © 2015 Norma Martinez. All rights reserved.
//

#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include "/Users/NormaIsa/Desktop/College Documents/Freshman Year/Intro to programming/Final Battle/Final Battle/main.cpp"
using namespace std;

class mainPlayer:public finalBattle {
public:
    
    int mask;
    int oceanStone;
    int snowyAlpsStone;
    int desertStone;
    int sword;
    int shield;
    
    mainPlayer() {
        mask = 0;
        oceanStone = 0;
        snowyAlpsStone = 0;
        desertStone = 0;
        sword = 0;
        shield = 0;
        
    }
    
    void ocean() {
        using namespace std::this_thread; // sleep_for, sleep_until
        using namespace std::chrono; // nanoseconds, system_clock, seconds
        
        int choice;
        string stonePlace;
        
        cout << "Welcome to the Atlantis Ocean!" << endl;
        sleep_until(system_clock::now() + seconds(2));
        cout << "There are 3 bottles with hints in them." << endl;
        sleep_until(system_clock::now() + seconds(2));
        cout << "But there are 6 places where you could find those hints." << endl;
        sleep_until(system_clock::now() + seconds(2));
        cout << "Good Luck!" << endl;
        sleep_until(system_clock::now() + seconds(2));
        
        while(1) {
            cout << "Choose a number from 1-6." << endl;
            cout << "Press anything else to type in where you think the stone is." << endl;
            cin >> choice;
            
            switch(choice) {
                case 1: cout << "Sorry there's nothing here. :/" << endl << endl;
                    break;
                    
                case 2: {cout << "You found a message in a bottle!" << endl;
                    sleep_until(system_clock::now() + seconds(2));
                    cout << "It says: Go to a place where people can go swimming." << endl << endl;
                }
                    break;
                    
                case 3: { cout << "You found a message in a bottle!" << endl;
                    sleep_until(system_clock::now() + seconds(2));
                    cout << "It says: There is a lot of sand near here" << endl << endl;
                }
                    break;
                    
                case 4: { cout << "You found a mask!" << endl;
                    sleep_until(system_clock::now() + seconds(2));
                    cout << "It'll help you get across the desert." << endl << endl;
                    mask ++;
                }
                    break;
                    
                case 5: cout << "Sorry there's nothing here. Keep trying!" << endl << endl;
                    break;
                    
                case 6: { cout << "You found a message in a bottle!" << endl << endl;
                    sleep_until(system_clock::now() + seconds(2));
                    cout << "It says: It starts with a the letter 'b'" << endl << endl;
                }
                    break;
                    
                default: { cout << "Type in where you think the stone is: " << endl << endl;
                    cin >> stonePlace;
                    
                    if (stonePlace == "beach" || stonePlace == "Beach") {
                        cout << "Congratulations! You found the stone!" << endl;
                        oceanStone++;
                    }
                }
                    return;

            }
        }
        
    }
    
    void snowyAlps() {
        using namespace std::this_thread; // sleep_for, sleep_until
        using namespace std::chrono; // nanoseconds, system_clock, seconds
        
        int secret;
        
        cout << "Welcome to the Snowy Alps! It's pretty cold here, huh?" << endl;
        sleep_until(system_clock::now() + seconds(2));
        cout << "THERE'S A MONSTER COMING STRAIGHT AT YOU!" << endl;
        cout << "WATCH OUT!" << endl;
        sleep_until(system_clock::now() + seconds(2));
        cout << "Just kidding! He's just coming up to you to tell you something!" << endl;
        sleep_until(system_clock::now() + seconds(2));
        cout << "Friendly monster: How are you walking around here without a sword or a shield?" << endl;
        sleep_until(system_clock::now() + seconds(2));
        cout << "You: Oh, I don't know! I just never had access to one!" << endl;
        sleep_until(system_clock::now() + seconds(2));
        cout << "Friendly monster: Well, I'll let you in on a secret! You wanna know?" << endl;
        sleep_until(system_clock::now() + seconds(2));
        cout << "Press 1 to say yes. Press 2 to say no." << endl;
        sleep_until(system_clock::now() + seconds(2));
        cin >> secret;

        if(secret == 1) {
            cout << "You: OF COURSE! I need a sword and a shield to defeat Xenotrix!" << endl;
            sleep_until(system_clock::now() + seconds(2));
            cout << "Friendly monster: Well, here. I have been saving a special sword and shield to give to somebody special." << endl;
            sleep_until(system_clock::now() + seconds(2));
            cout << "Friendly monster: You seem like the hero material." << endl;
            sleep_until(system_clock::now() + seconds(2));
            cout << "YOU GAINED THE SWORD OF LIGHT AND THE SHIELD OF SALVATION!" << endl;
            sleep_until(system_clock::now() + seconds(2));
            sword++;
            shield++;
            cout << "You: Have you seen a stone by any chance?" << endl;
            sleep_until(system_clock::now() + seconds(2));
            cout << "Friendly monster: Oh yea! The Snowy Alps stone? Here you go!" << endl;
            sleep_until(system_clock::now() + seconds(2));
            cout << "YOU OBTAINED THE SNOWY ALPS STONE." << endl;
            sleep_until(system_clock::now() + seconds(2));
            snowyAlpsStone++;
        }
        else{
            cout << "Friendly monster: Well, I guess you're missing out then." << endl;
            sleep_until(system_clock::now() + seconds(2));
            cout << "You: Have you seen a stone by any chance?" << endl;
            sleep_until(system_clock::now() + seconds(2));
            cout << "Friendly monster: Oh yea! The Snowy Alps stone? Here you go!" << endl;
            sleep_until(system_clock::now() + seconds(2));
            cout << "YOU OBTAINED THE SNOWY ALPS STONE." << endl;
            sleep_until(system_clock::now() + seconds(2));
            snowyAlpsStone++;
        }
    }
    
    void desert() {
        using namespace std::this_thread;
        using namespace std::chrono;
        
        
        cout << "Welcome to the Desert!" << endl;
        sleep_until(system_clock::now() + seconds(2));
        cout << "The sandstorm is really strong right now." << endl;
        sleep_until(system_clock::now() + seconds(2));
        cout << "It's hard to see anything." << endl;
        sleep_until(system_clock::now() + seconds(2));
        cout << "Look! There's a sign!" << endl;
        sleep_until(system_clock::now() + seconds(2));
        cout << "It says: In order to get the stone within the desert, you need a mask." << endl;
        sleep_until(system_clock::now() + seconds(2));
        cout << "The mask is hidden near the ocean." << endl;
        sleep_until(system_clock::now() + seconds(2));
        
        if(mask == 1) {
            cout << "You have the mask! Good Job!" << endl;
            sleep_until(system_clock::now() + seconds(2));
            cout << "You can cross the desert!" << endl;
            sleep_until(system_clock::now() + seconds(2));
            cout << "Congratulations! You found the stone!" << endl << endl;
            desertStone++;
            
        }
        
        else {
            cout << "I'm sorry, but you don't have a mask." << endl;
            sleep_until(system_clock::now() + seconds(2));
            cout << "You can't cross the desert." << endl;
            sleep_until(system_clock::now() + seconds(2));
            cout << "The winds are too strong, and you can't see!" << endl;
            sleep_until(system_clock::now() + seconds(2));
            cout << "Please find the mask." << endl;
        }
        
        
        
    }
    
    void townHall() {
        using namespace std::this_thread; // sleep_for, sleep_until
        using namespace std::chrono; // nanoseconds, system_clock, seconds

        finalBattle myBattle;
        int choice;
        
        cout << "Welcome to the final dungeon." << endl;
        sleep_until(system_clock::now() + seconds(2));
        
        
        if(oceanStone >= 1 && snowyAlpsStone >= 1 & desertStone >= 1) {
            cout << "Starting fight with Xenotrix in..." << endl;
            sleep_until(system_clock::now() + seconds(2));
            cout << "3..." << endl;
            sleep_until(system_clock::now() + seconds(2));
            cout << "2..." << endl;
            sleep_until(system_clock::now() + seconds(2));
            cout << "1..." << endl;
            sleep_until(system_clock::now() + seconds(2));
            
            while(1) {
                cout << "Press 1 to Attack Xenotrix" << endl;
                cout << "Press 2 to use your Special Attack" << endl;
                cout << "Press 3 to check your Health" << endl;
                cout << "Press 4 to check Xenotrix's Health" << endl;
                cout << "Press anything to finish the match." << endl;
                cin >> choice;
                
                switch(choice) {
                    case 1 : myBattle.attack();
                        break;
                        
                    case 2 : myBattle.specialAttack();
                        break;
                        
                    case 3 : myBattle.checkHealth();
                        break;
                        
                    case 4 : myBattle.checkXenotrixHealth();
                        break;
                        
                    default: myBattle.finishMatch();
                        exit(1);
                }
        }
        
        
        }
        else {
            cout << "I'm sorry, but you still need to find all the stones!" << endl;
            sleep_until(system_clock::now() + seconds(2));
            cout << "Please go back and find the rest of the stones!" << endl;
        }
    }
};

int main() {
    using namespace std::this_thread; // sleep_for, sleep_until
    using namespace std::chrono; // nanoseconds, system_clock, seconds
    
    mainPlayer myPlayer;
    int userInput3;
    
    cout << "*You will now start the journey*" << endl;
    sleep_until(system_clock::now() + seconds(2));
    cout << "*You must find 3 stones to get to the final dungeon, where the monster hid.*" << endl;
    sleep_until(system_clock::now() + seconds(2));
    cout << "*There is a stone at the ocean, the Snowy Alps, and the desert.*" << endl;
    sleep_until(system_clock::now() + seconds(2));
    cout << "*Then the final dungeon is in the main town hall, in the basement.*" << endl;
    sleep_until(system_clock::now() + seconds(2));
    cout << "So where would you like to go first?" << endl;
    sleep_until(system_clock::now() + seconds(2));
    
    
    while(1) {
        cout << "Press 1 to go to the ocean." << endl;
        cout << "Press 2 to go to the Snowy Alps." << endl;
        cout << "Press 3 to go to the desert." << endl;
        cout << "Press 4 to go to the Town Hall" << endl;
        cin >> userInput3;
        
        switch (userInput3) {
            case 1: myPlayer.ocean();
                break;
                
            case 2: myPlayer.snowyAlps();
                break;
                
            case 3: myPlayer.desert();
                break;
                
            case 4: myPlayer.townHall();
                break;
        }
        
        
    }

    
    
    
    
    
    
    return 0;
}