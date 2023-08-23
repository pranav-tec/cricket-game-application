#include"game.h"
using namespace std;

Game :: Game(){
    playersperteam=4;
    maxballs=6;
    totalplayers=11;
    players[0]="pranav";
    players[1]="pratheek";
    players[2]="dhoni";
    players[3]="kohli";
    players[4]="sachin";
    players[5]="jadeja";
    players[6]="rahul dravid";
    players[7]="harbajan singh";
    players[8]="chahal";
    players[9]="warner";
    players[10]="chris gayle";
    

    
    

    isfirstinnings=false;
    teama.name="Team-A";
    teamb.name="Team-B";
}

void Game::welcome(){
    cout<<"---------------------------------"<<endl;
    cout<<"|=========CRICK-IN==============|"<<endl;
    cout<<"|                               |"<<endl;
    cout<<"|welcome to virtual cricket game|"<<endl;
    cout<<"---------------------------------"<<endl;


}