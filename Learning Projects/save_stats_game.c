/*
Your Mission:
Write a C program that simulates saving and loading a game.

The Blueprint: Create a struct GameSave that holds an integer level and an integer gold.

The Save Phase: 
* Create a variable from your struct and set level = 5 and gold = 1500.
* Open a file called save.dat in "wb" (Write Binary) mode.
* Use fwrite to dump that struct into the file.
* Close the file.

The Load Phase:

* Create a brand new, completely empty struct GameSave variable (e.g., loadedData).
* Open save.dat in "rb" (Read Binary) mode.
* Use fread to pull the binary data out of the file and directly into loadedData.
* Close the file.

The Proof: Print loadedData.level and loadedData.gold to the terminal to prove the data successfully made the round trip to your hard drive and back.*/
#include <stdio.h>
typedef struct{
    int level;
    int gold;
} GameSave;
int main(){
    GameSave save = {5, 1500};
    FILE *file = fopen("save.dat", "wb");
    fwrite(&save, sizeof(GameSave), 1, file);
    fclose(file);
    return 0;
}