#include <iostream>
#include <map>
#include <vector>
#include <algorithm> // for std::find
#include <iterator> // for std::begin, std::end
#include <string>
using namespace std;
void handle_find(const vector <int> &v);
bool find(const vector <int> &v, int target);


void handle_find(const vector <int> &v)
{
    int target{};
    cout << "enter the number you want to find";
    cin >> target;
    if (find(v, target))
    {
        cout << target << " was found";
    }
    else
    {
        cout << "no such number";
    }
    
}

bool find(const vector <int> &v, int target)
{
    for(auto num: v)
    {
        if (num == target)
        {
            return true;
        }
    }
    return false;
}


int main()
{  

vector <int> numbers{10,2};
char selection{};

do {
    
    char selelction{};
    cin >> selection;
    switch(selection){
        case 'P':
            handle_find(numbers);
            break;
    }
    }while(selection != 'Q');
    cout << endl;
 
return 0;

} 
