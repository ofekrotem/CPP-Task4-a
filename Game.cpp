#include "Game.hpp"

namespace coup{
    Game::Game(){
        help = 0;
    }
    vector<string> Game::players(){
        vector<string> ans;
        for(Player *player1 : players_arr)
        {
            ans.push_back(player1->name);
        }

        return ans;
    }
    string Game::turn(){
        return "Ofek";
    }
    string Game::winner(){
        if (this->players_arr.size() <= 0){throw runtime_error("No players");}
        if (this->players_arr.size() == 1){return players_arr[help]->name;}
        return "Still no winner, Keep playing!";
    }
    void Game::add_a_Player(Player *player1)
    {
        players_arr.push_back(player1);
    }
}