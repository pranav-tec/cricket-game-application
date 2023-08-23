#include<iostream>
#include<cstdlib>
#include<ctime>
#include<limits>
#include"team.h"

class Game{
    public:
    Game();
    int playersperteam;
    int maxballs;
    int totalplayers;
    std::string players[11];
    bool isfirstinnings;
    Team teama,teamb;
    Team *battingteam,*bowlingteam;
    Player *batsman,*bowler;
    void welcome();

};