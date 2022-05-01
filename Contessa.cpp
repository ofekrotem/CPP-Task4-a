#include "Contessa.hpp"

namespace coup{

    Contessa::Contessa(Game &game, string name) : Player(game,name){}
    void Contessa::role(){
        cout<<"Contessa"<<endl;
    }
    void Contessa::block(Player &player1){}    
}