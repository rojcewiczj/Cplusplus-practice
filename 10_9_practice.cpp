#include <iostream>
#include <map>
#include <vector>
#include <algorithm> // for std::find
#include <iterator> // for std::begin, std::end
#include <string>
using namespace std;

int main()
{  
    int *int_ptr {nullptr};
    int_ptr = new int;
    cout << int_ptr << endl;
    delete int_ptr;


    size_t size{0};
    double *tem_ptr {nullptr};

    cout << "how many temps you need?" << endl;
    cin >> size;

    tem_ptr = new double[size];
    delete [] tem_ptr;


    return 0;
} 
