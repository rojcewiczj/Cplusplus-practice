#include <iostream>
#include <map>
#include <vector>
#include <algorithm> // for std::find
#include <iterator> // for std::begin, std::end
#include <string>
using namespace std;

const double pi {3.14159};

double calc_area_circle(double radius)
{
return pi * radius * radius;
}

double calc_volume_cylinder(double radius, double height)
{
    return calc_area_circle(radius) * height;
}

void area_circle()
{
    double radius{};
    cout << "\n Enter the radius of the circle: ";
    cin >> radius;
    
    cout << "The area of a circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
}

void volume_cylinder()
{
    double radius{};
    double height{};
    cout << "\n Enter the radius of the cylinder: ";
    cin >> radius;
    cout << "\n enter the height of the cylinder: ";
    cin >> height;

    cout << "The volume of a cylinder with radius " << radius << " and height " << height << " is " << calc_volume_cylinder(radius, height) << endl;

}

int main()
{  
 
    area_circle();
    volume_cylinder();

    return 0;
}
