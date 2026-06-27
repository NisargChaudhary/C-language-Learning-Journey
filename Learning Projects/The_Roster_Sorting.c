/*
Alphabetize a list of players based on their In-Game Names.

The Rules:
1. Create an array of 3 Player structs (just like you did before).
2. Give them these names: "LucifeR", "Sergio", "Chicken Biryani".
3. Write a sorting loop, but instead of using >, use the <string.h> function strcmp.
(Hint: strcmp(stringA, stringB) returns a positive number if stringA comes after stringB alphabetically).
4. If they are out of order, swap the entire struct using a temp variable.
5. Print the newly alphabetized roster.
*/
#include <stdio.h>
#include <string.h>
typedef struct{
    char ign[50];
    char mainAgent[30];
    float kd_ratio;
} Player;
int main(){
    Player team[3] = {{"LucifeR", "Raze", 1.5}, {"Sergio", "Breach", 1.2}, {"Chicken Biryani", "Skye", 0.9}};
    for(int i = 0; i < 3; i++){
        for(int j = i + 1; j < 3; j++){
            if(strcmp(team[i].ign, team[j].ign) > 0){
                Player temp = team[i];
                team[i] = team[j];
                team[j] = temp;
            }
        }
    }
    printf("Alphabetized roster:\n");
    for(int i = 0; i < 3; i++){
        printf("%s %s %f\n", team[i].ign, team[i].mainAgent, team[i].kd_ratio);
    }
    return 0;
}