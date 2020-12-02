#include <iostream>

void displayResult( int ) ;

int main()
{
    std::cout << "Enter the radius of the circle " ;
    int rad ;
    std::cin >> rad ;

    displayResult( rad ) ;

    return 0;
}

void displayResult( int r )
{
    int dia = 2*r ;
    int circum = 2*(3.14*r) ;
    int area = 3.14*( r*r ) ;

    std::cout << "Radium Details \nDiameter : " << dia << "\nCircumference : " << circum << "\nArea : " << area << '\n' ;
}
