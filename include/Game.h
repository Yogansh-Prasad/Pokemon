#pragma once
#include "Grass.h"
#include "Player.h"

namespace N_Main 
{
	class Game {
	private:
		N_Pokemon::Grass forestGrass;
	public:
		Game();
		void gameLoop(N_Player::Player& player);
	};
}


