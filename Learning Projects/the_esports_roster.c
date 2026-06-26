/*
For the give code perform the following:
   Your Mission:
1. Populate the data for all 3 players using strcpy for the text and 
standard assignment for the KD ratio. (Remember how array indexing works: team[0].kd_ratio = 1.5;).

2. Write a for loop that cycles through the array.

3. Inside the loop, find the player with the highest kd_ratio and 
print out their In-Game Name and their KD as the "MVP".*/


#include <stdio.h>
#include <string.h>

// The Blueprint
typedef struct {
    char ign[50];       // In-Game Name
    char mainAgent[30]; // Character they play
    float kd_ratio;     // Kill/Death Ratio
} Player;

int main() {
    Player team[3] = {
        {"LucifeR", "Raze", 1.5},
        {"Serena", "Reyna", 1.2},
        {"Chicken Biryani", "Skye", 0.9}
    }; 
    for(int i = 0; i < 3; i++){
        for(int j = i + 1; j < 3; j++){
            if(team[j].kd_ratio > team[i].kd_ratio){
                Player temp = team[i];
                team[i] = team[j];
                team[j] = temp;
            }
        }
    }    
    printf("MVP: %s with KD Ratio: %.2f\n", team[0].ign, team[0].kd_ratio);
    return 0;
}