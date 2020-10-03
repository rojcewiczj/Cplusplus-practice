#include <iostream>
#include <map>
#include <vector>

using namespace std;
int main()
{   
   char letter_grade{};

   cout << "enter the letter grade you expect on the exam";
   cin >> letter_grade;

   switch (letter_grade) {
        case 'a':
        case 'A':
            cout << "YOu need a 90 or above, study hard" << endl;
            break;
        case 'b':
        case 'B':
            cout << "You need 80-90 for a B, go study" << endl;
            break;
        case 'd':
        case 'D':
            cout << "Hmm, you should strive for a better grade. All you need is 60-69" << endl;
            break;
        case 'f':
        case 'F':
            {
                char confirm {};
                cout << "Are you sure (Y/N)";
                cin >> confirm;
                if (confirm == 'y' || confirm == 'Y')
                {
                    cout << "OK, i guess you didnt study" << endl;
                }
                else if (confirm == 'n' || confirm == 'N')
                {
                    cout << "Good- go study" << endl;
                }
                else 
                {
                    cout << "illegal choice" << endl;
                }
                break;
            }
        default:
            cout << "Sorry thats not a valid grade" << endl;
   }




    
    return 0;
}
