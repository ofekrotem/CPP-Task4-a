#include "Player.hpp"

namespace coup{
    class Game;        
    Player::Player(Game &game , string name){
        this->game = &game;
        this->name = name;
        this->money = 0;
    }
    void Player:: income(){
        this->money++;
    }
    void Player::foreign_aid(){
        this->money+=2;
    }
    void Player::coup(Player &player1){
        cout<<"Asta la vista "<<player1.name<<" !"<<endl;
    }
    void Player::role(){}
    int Player::coins(){
        return this->money;
    }
}