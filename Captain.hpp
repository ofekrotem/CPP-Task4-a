#include"Player.hpp"

using namespace std;

namespace coup{
    class Captain : public Player{
    public:
        Captain(Game &game, string name);
        void block(Player &player1);
        void steal(Player &player1);
        void role();
    };
}