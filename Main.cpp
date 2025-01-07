#include "/D Drive/Pokemon Game/Pokemon/include/Game.h"
#include "/D Drive/Pokemon Game/Pokemon/include/Player.h"
#include "/D Drive/Pokemon Game/Pokemon/include/ProfessorOak.h"
#include "/D Drive/Pokemon Game/Pokemon/include/Utility.h"
#include "/D Drive/Pokemon Game/Pokemon/include/BattleState.h"



#include <iostream>
#include <limits> // Include this header to use std::numeric_limits
#include <string>




int main() {

	// Continue with the main flow of the game
	N_Character::ProfessorOak professor("Professor Oak");
	N_Player::Player player;

	// Greet the player and offer Pokemon choices
	professor.greetPlayer(player);
	professor.offerPokemonChoices(player);

	// Explain the main quest
	professor.explainMainQuest(player);

	// Start the main game loop
	N_Main::Game game;
	game.gameLoop(player);

	return 0;
}