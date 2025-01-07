#pragma once
#include <iostream>
#include "Player.h"
using namespace std;

namespace N_Character 
{
	class ProfessorOak {
	public:
		string name;

		ProfessorOak(string p_name);
		void greetPlayer(N_Player::Player& player);
		void offerPokemonChoices(N_Player::Player& player);
		void explainMainQuest(N_Player::Player& player);
	};

}
