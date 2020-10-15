#include <iostream>
#include <map>
#include <vector>
#include <algorithm> // for std::find
#include <iterator> // for std::begin, std::end
#include <string>
using namespace std;

class Move{
    private:
        int *data; //raw pointer
    public:
        void set_data_value(int d) { *data = d;}
        int get_data_value() {return *data;}
        Move (int d); // Constructor
        Move (const Move &source); // Copy Constructor
        ~ Move();

};

Move::Move(const Move &source){
    data = new int;
    *data = *source.data;
};


int main()
{  
    vector <Move> vec;
    
    vec.push_back(Move{10});
    vec.push_back(Move{20});





  
    return 0;
} 
