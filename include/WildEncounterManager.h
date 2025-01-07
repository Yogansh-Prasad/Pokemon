#pragma once
#include <vector>
#include "/D Drive/Pokemon Game/Pokemon/include/Grass.h"
#include "/D Drive/Pokemon Game/Pokemon/include/Pokemon.h"

namespace N_Battle 
{
    

    class WildEncounterManager {
    public:
        WildEncounterManager();
        N_Pokemon::Pokemon getRandomPokemonFromGrass(const N_Pokemon::Grass& grass);
    };

}

