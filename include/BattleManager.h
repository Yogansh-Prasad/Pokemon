#pragma once
#include "BattleState.h"
#include "Player.h"



namespace N_Battle 
{

    class BattleManager {
    public:
        void startBattle(N_Player::Player& player, N_Pokemon::Pokemon& wildPokemon);
    private:
        BattleState battleState;

        void battle();
        void handleBattleOutcome();
        void updateBattleState();
    };
}
