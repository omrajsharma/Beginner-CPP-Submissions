#include <iostream>

void cube ( int ) ;

int main()
{
    std::cout << "Enter a number : " ;
    int x ;
    std::cin >> x ;

    cube( x ) ;

    return 0;
}

void cube ( int x )
{
    x = x*x*x ;
    std::cout << "Cube of given number is : " << x ;
}
