#include <iostream>
#include <map>
#include <vector>
#include <algorithm> // for std::find
#include <iterator> // for std::begin, std::end
#include <string>
using namespace std;
int main()
{  
 
  string secret_message {};
  cout << "Enter your secret message: ";
  getline(cin, secret_message);

  string encrypted_message {};

  cout << '\nEncrypting message...' << endl;

  for (char ch: secret_message)
  {
      size_t position = alphabet.find(ch);
      if(position != string::npos)
      {
          char new_char{key.at(position)};
          encrypted_message += new_char

      }
      else
      {
        encrypted_message += ch;
      }
      
  }

  string decrypted_message {};
  cout <<"\nDecrypted message.." << endl;

  for(char ch: encrypted_message){
      size_t position = key.find(ch);
      if(position != string::npos)
      {
          char new_char {alphabet.at(position)};
          decrypted_message += new_char;
      }
      else
      {
          decrypted_message += ch
      }
  }
  
  

    
    return 0;
}
