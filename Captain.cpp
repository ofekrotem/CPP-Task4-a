#include "Captain.hpp"

namespace coup{

    Captain::Captain(Game &game, string name) : Player(game,name){}
    void Captain::role(){
        cout<< "Captain"<<endl;
    }    
    void Captain::block(Player &player1){}
    void Captain::steal(Player &player1){
        if(player1.money>=2){
            player1.money-=2;
            money+=2;
        }
    }       
}