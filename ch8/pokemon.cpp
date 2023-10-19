#include <iostream>
using namespace std;

struct Pokemon {
    string pokeName;
    string type;
    int level;
    int healthPercentage;
};

struct Trainer {
    string trainerName;
    char gender;
    int numBadges;
    Pokemon first, second, third, fourth, fifth, sixth;
};

// Write your code for the function printPokeInfo here.
void printPokeInfo(Pokemon pmon) {
    cout << pmon.pokeName << " (Lv. " << pmon.level <<
         ", " << pmon.healthPercentage << "% HP)" << endl;
}

// Write your code for the function printTrainerInfo here.
void printTrainerInfo(Trainer tner) {
    cout << "Trainer " << tner.trainerName << " has "
         << tner.numBadges << " badges and " <<
         tner.trainerName << "'s team consists of" << endl;
    printPokeInfo(tner.first);
    printPokeInfo(tner.second);
    printPokeInfo(tner.third);
    printPokeInfo(tner.fourth);
    printPokeInfo(tner.fifth);
    printPokeInfo(tner.sixth);
}
// Write your code for the function healPokemon here.
void healPokemon(Trainer &tner){
    tner.first.healthPercentage = 100;
    tner.second.healthPercentage = 100;
    tner.third.healthPercentage = 100;
    tner.fourth.healthPercentage = 100;
    tner.fifth.healthPercentage = 100;
    tner.sixth.healthPercentage = 100;
}


// Write your code for the function pokeCenter here.
void pokeCenter(Trainer &t) {
    cout << "Welcome to the Pokémon Center. Would you like me to take your Pokémon? (y/n) ";
    char response;
    cin >> response;
    if (response == 'y') {
        cout << "Okay, I'll take your Pokémon for a few seconds..." << endl;
        healPokemon(t);
        cout << "Your Pokémon are now healed. We hope to see you again." << endl;
    } else if (response == 'n'){
        cout << "We hope to see you again." << endl;
    } else {
        cout << "Sorry, not a valid input." << endl;
    }
}


int main() {
    Pokemon exeggutor = {"Exeggutor", "Grass & Psychic", 58, 78};
    Pokemon alakazam = {"Alakazam", "Psychic", 54, 0};
    Pokemon arcanine = {"Arcanine", "Fire", 58, 24};
    Pokemon rhydon = {"Rhydon", "Ground & Rock", 56, 55};
    Pokemon gyarados = {"Gyarados", "Water & Flying", 58, 100};
    Pokemon pidgeot = {"Pidgeot", "Normal & Flying", 56, 35};
    Trainer blue = {"Blue", 'M', 8, exeggutor, alakazam, arcanine, rhydon, gyarados, pidgeot};
    printTrainerInfo(blue);
    pokeCenter(blue);
    printTrainerInfo(blue);  // Pokemon should now all be healed to 100% health
}
