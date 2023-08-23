#include<vector>
#include"player.h"

class Team{
    public:
    Team();
    std::string name;
    int totalrunsscored;
    int wicketslost;
    int totalballsbowled;
    std::vector<Player> players;

};