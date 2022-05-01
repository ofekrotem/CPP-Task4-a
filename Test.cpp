#include "doctest.h"
#include<iostream>
#include<string>
#include<vector>
#include <stdexcept>
#include "Game.hpp"
#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"

using namespace std;
using namespace coup;

TEST_CASE("Demo game"){
    Game game{};	
	Captain captain{game, "Baruch"};
	Duke duke{game, "Avi"};
	Assassin assassin{game, "Amram"};
	Ambassador ambassador{game, "Igal"};	
	Contessa contessa{game, "Neomi"};
	
	vector<string> players_vector = game.players();
    CHECK_EQ(captain.coins(),0);
	CHECK_EQ(duke.coins(),0);
	CHECK_EQ(assassin.coins(),0);    
	CHECK_EQ(ambassador.coins(),0);
	CHECK_EQ(contessa.coins(),0);          
    
	CHECK_NOTHROW(captain.income());
	CHECK_NOTHROW(captain.income());

	CHECK_NOTHROW(assassin.income());

    CHECK_NOTHROW(duke.income());
	CHECK_NOTHROW(duke.income());
	CHECK_NOTHROW(duke.income());
	

	CHECK_NOTHROW(ambassador.income());
	CHECK_NOTHROW(ambassador.income());

	CHECK_NOTHROW(duke.income());
	CHECK_NOTHROW(duke.income());
	CHECK_NOTHROW(duke.income());
	CHECK_NOTHROW(duke.income());
	CHECK_NOTHROW(duke.income());

	CHECK_NOTHROW(ambassador.income());

	CHECK_EQ(captain.coins(),2);
	CHECK_EQ(assassin.coins(),1);
    CHECK_EQ(duke.coins(),8);
    CHECK_EQ(ambassador.coins(),3);
	CHECK_EQ(contessa.coins(),0); 
}