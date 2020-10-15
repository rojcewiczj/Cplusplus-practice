#include <iostream>
#include <map>
#include <vector>
#include <algorithm> // for std::find
#include <iterator> // for std::begin, std::end
#include <string>
using namespace std;
class Player
{
    public:
        string name;
        int health;
    
    Player();
    Player(string name_, int health_)
    {
     name = name_;
     health = health_;
    }

};


int main()
{  
  Player Joe;
  cout << Joe.name;
  Player guy("Frank",100);
  cout << guy.health;





  
    return 0;
} 
