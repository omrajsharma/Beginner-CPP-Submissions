#include <iostream>

void oddEven ( int ) ;

int main()
{
    std::cout << "Enter a number : " ;
    int x ;
    std::cin >> x ;

    oddEven ( x ) ;

    return 0;
}

void oddEven( int a )
{
    if( a%2 == 0 )
        std::cout << "This is an Even Number " ;
    else
        std::cout << "This is an Odd Number " ;
}
