#include <iostream>

void minMax( int , int ) ;

int main()
{
    std::cout << "Enter two number to compare : " ;
    int x , y ;
    std::cin >> x >> y ;

    minMax( x , y ) ;

    return 0;
}

void minMax( int a , int b )
{
    if( a > b )
        std::cout << "First > Secone " ;
    else
        std::cout << "Second > First " ;
}
