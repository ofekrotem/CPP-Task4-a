#include "Duke.hpp"

namespace coup{
    Duke::Duke(Game &game, string name) : Player(game,name){}
    void Duke::role(){
        cout<<"Duke"<<endl;
    }
    void Duke::block(Player &player1){}
    void Duke::tax(){
        money+=3;
    }
}