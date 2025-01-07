#pragma once
#include "Pokemon.h"

namespace N_Battle 
{
    struct BattleState {
        N_Pokemon::Pokemon playerPokemon;
        N_Pokemon::Pokemon wildPokemon;
        bool playerTurn;
        bool battleOngoing;
    };
}

