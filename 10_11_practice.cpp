#include <iostream>
#include <map>
#include <vector>
#include <algorithm> // for std::find
#include <iterator> // for std::begin, std::end
#include <string>
using namespace std;

void double_data(int *int_ptr)
{
    *int_ptr *= 2;
}


int main()
{  
 int value {10};
 int *int_ptr {nullptr};

 cout << "Value: " << value << endl; //10

double_data(&value);

cout << "Value: " << value << endl;

int_ptr = &value;

double_data(int_ptr);

cout << "Value: " << value << endl;



  
    return 0;
} 
