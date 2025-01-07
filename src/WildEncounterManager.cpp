#include "/D Drive/Pokemon Game/Pokemon/include/WildEncounterManager.h"

#include <cstdlib> // For rand()
#include <ctime>   // For time()

namespace N_Battle 
{
	WildEncounterManager::WildEncounterManager() {
		srand(time(0)); // Seed the random number generator
	}

	N_Pokemon:: Pokemon WildEncounterManager::getRandomPokemonFromGrass(const N_Pokemon::Grass& grass) {
		int randomIndex = rand() %  grass.wildPokemonList.size();
		return grass.wildPokemonList[randomIndex];
	}
}

