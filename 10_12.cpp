#include <iostream>
#include <map>
#include <vector>
#include <algorithm> // for std::find
#include <iterator> // for std::begin, std::end
#include <string>
using namespace std;

class Player
{
    // attributes
    string name {"player"};
    int health {100};
    int exp{3};
    // methods
    void talk(string);
    bool is_dead();
};

class Account
{
  // attributes
  string name {"Account"};
  double balance;

  // methods
  bool deposit (double);
  bool withdraw(double);
};

int main()
{  
    Account frank_account;
    Account jim_account;

    Player frank;
    Player hero;

    Player players[] {frank, hero};

    vector <Player> player_vec {frank};
    player_vec.push_back(hero);

    Player *enemy {nullptr};
    enemy = new Player;

    delete enemy;



  
    return 0;
} 
