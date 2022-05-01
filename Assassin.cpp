#include "Assassin.hpp"

namespace coup{
    
    Assassin::Assassin(Game &game, string name) : Player(game,name){}
    void role(){
        cout<< "Assassin"<<endl;
    }
    void kill(Player &player1){}   
}