#include "Ambassador.hpp"

namespace coup{
    Ambassador::Ambassador(Game &game, string name) : Player(game, name){}
    void Ambassador::role(){
        cout<< "Ambassador"<<endl;
    }
    void Ambassador::block_Stealing(){}
    void Ambassador::transfer(Player &player1,Player &player2){
        player1.money--;
        player2.money++;
    }        
}