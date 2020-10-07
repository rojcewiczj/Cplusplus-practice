#include <iostream>
#include <map>
#include <vector>
#include <algorithm> // for std::find
#include <iterator> // for std::begin, std::end
#include <string>
using namespace std;

int num = 3;
double numnum = 3.5;

void add(int num = num, double numnum = numnum)
{
    cout << num + numnum;
}

int main()
{  
 
    add(5, 3.5);

    return 0;
} 
