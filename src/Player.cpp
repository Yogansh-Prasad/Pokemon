#include "/D Drive/Pokemon Game/Pokemon/include/Player.h"
#include "/D Drive/Pokemon Game/Pokemon/include/Pokemon.h"
#include "/D Drive/Pokemon Game/Pokemon/include/PokemonChoice.h"
#include "/D Drive/Pokemon Game/Pokemon/include/PokemonType.h"
#include "/D Drive/Pokemon Game/Pokemon/include/Utility.h"
#include "iostream"


using namespace std;

//using namespace N_Pokemon;




namespace N_Player 
{
    Player::Player() {
        name = "Trainer";
        chosenPokemon = N_Pokemon::Pokemon::Pokemon(); // Using the default Pokemon constructor
    }

    Player::Player(std::string p_name, N_Pokemon::Pokemon p_chosenPokemon) {
        name = p_name;
        chosenPokemon = p_chosenPokemon;
    }

    void Player::choosePokemon(int choice) {
        switch ((N_Pokemon::PokemonChoice)choice) {
        case N_Pokemon::PokemonChoice::CHARMANDER:
            chosenPokemon = N_Pokemon::Pokemon("Charmander", N_Pokemon::PokemonType::FIRE, 100, 4);
            break;
        case N_Pokemon::PokemonChoice::BULBASAUR:
            chosenPokemon = N_Pokemon::Pokemon("Bulbasaur", N_Pokemon::PokemonType::GRASS, 100, 5);
            break;
        case N_Pokemon::PokemonChoice::SQUIRTLE:
            chosenPokemon = N_Pokemon::Pokemon("Squirtle", N_Pokemon::PokemonType::WATER, 100, 3);
            break;
        default:
            chosenPokemon = N_Pokemon::Pokemon("Pikachu", N_Pokemon::PokemonType::ELECTRIC, 100, 4);
            break;
        }
        cout << "Player " << name << " chose " << chosenPokemon.name << "!\n";
        N_Utility::Utility::waitForEnter(); // Wait for user to press Enter before proceeding
    }
}

