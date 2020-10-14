#include <iostream>
#include <map>
#include <vector>
#include <algorithm> // for std::find
#include <iterator> // for std::begin, std::end
#include <string>
using namespace std;

void display (vector <string> *v)
{
    for(auto str: *v)
    {
        cout << str << " ";
        cout << endl;
        (*v).at(0) = "Funny";
    }
}

int main()
{  
 vector <string> stooges {"Larry", "Moe", "Curly"};
 display(&stooges);
 cout << stooges[0] << endl;
 



  
    return 0;
} 
