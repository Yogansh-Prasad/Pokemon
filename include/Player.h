#pragma once
#include <string>
#include "Pokemon.h"
using namespace std;


namespace N_Player 
{
    class Player {
    public:
        string name;
        N_Pokemon::Pokemon chosenPokemon;

        Player(); // Default constructor
        Player(string p_name, N_Pokemon::Pokemon p_chosenPokemon); // Parameterized constructor

        void choosePokemon(int choice); // Method to choose a Pokemon
    };
}
