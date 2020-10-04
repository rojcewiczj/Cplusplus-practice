#include <iostream>
#include <map>
#include <vector>
#include <iomanip>
using namespace std;
int main()
{   
    string name = "John is";

    for(auto c: name)
    {
        if (c == ' '){
            cout << "\t";
        }
        else {
        cout << c ;
        }
    }

    return 0;
}
