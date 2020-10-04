#include <iostream>
#include <map>
#include <vector>
#include <algorithm> // for std::find
#include <iterator> // for std::begin, std::end

using namespace std;
int main()
{   
    string ar {"asdfokgdokkkllkjgjldlofigjhgskaosidfk"};
    vector <vector <char>> substrings{};
    vector <char> substring {};
    map <int, int> dicti{};
    int i {1};
    while(i <= ar.size())
    {
        if(any_of(begin(substring), end(substring), [=](ar[i]){return true;}) )
        {   
            substrings.push_back(substring);
            substring = {};
            i = dicti[ar[i]];
            cout << ar[i] << endl;
            dicti = {};
            
        }
        else
        {
            dicti[ar[i]] = i;
            substring.push_back(ar[i]);
            cout << ar[i] << endl;
            i += 1;

        }
       
    }

    

    
    return 0;
}
