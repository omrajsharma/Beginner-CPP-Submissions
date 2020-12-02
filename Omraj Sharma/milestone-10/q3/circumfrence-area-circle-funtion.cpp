#include <iostream>

void display( int ) ;

int main()
{
    std::cout << "Enter the radius of circle : " ;
    int rad ;
    std::cin >> rad ;

    display( rad ) ;

    return 0;
}

void display( int rad )
{
    float circum = 2*(3.14*rad) ;
    float area = 3.14*( rad * rad ) ;

    std::cout << "Circumference : " << circum << " Area : " << area << '\n' ;
}
