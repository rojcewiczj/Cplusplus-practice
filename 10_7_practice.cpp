#include <iostream>
#include <map>
#include <vector>
#include <algorithm> // for std::find
#include <iterator> // for std::begin, std::end
#include <string>
using namespace std;

void static_test()
{
    int num = 0;
    num += 1;
    cout << num;
}


int main()
{  
   static_test();
   static_test();
   static_test();
   static_test();




  
    return 0;
} 
