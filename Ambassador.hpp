#include"Player.hpp"

namespace coup{
    class Ambassador : public Player{
    public:
        Ambassador(Game &game, string name);
        void transfer(Player &player1,Player &player2);
        void block_Stealing();
        void role();
    };
}