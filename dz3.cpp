#include <iostream>

int main()
{
    std::cout << "Enter the radius of the circle: ";
    double radius;
    std::cin >> radius;

    const double PI = 3.1415;
    double diameter = radius * 2;
    double area = PI * radius * radius;
    double length = 2 * PI * radius;

    std::cout << "------ Circle information ------\n";
    std::cout << "Radius = " << radius << std::endl;
    std::cout << "Diameter = " << diameter << std::endl;
    std::cout << "Area = " << area << std::endl;
    std::cout << "Length = " << length << std::endl;

    return 0;
}