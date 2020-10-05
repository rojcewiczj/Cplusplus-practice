#include <iostream>
#include <map>
#include <vector>
#include <algorithm> // for std::find
#include <iterator> // for std::begin, std::end

using namespace std;
int main()
{   
  vector <int> numbers {1,2,3,4};
  char selection {};

  do {
      //display menu
      cin >> selection;

      if(selection == 'P' || selection == 'p')
      {
          if(numbers.size() > 1)
          {
              cout << "[ ";
          for(auto num: numbers)
          {
              cout << num << " ";
          }
              cout << "]" << endl;
          }
          else
          {
              cout << "list is empty" << endl;
          }
          
      }
      else if (selection == 'A' || selection == 'a')
      {
          int to_add {};
          cout << "enter the num you want to add";
          cin >> to_add;
          numbers.push_back(to_add);
          cout << "added: ";
          cout << to_add;

      }
      

  } while(selection!= 'q' && selection != 'Q');
 

    

    
    return 0;
}
