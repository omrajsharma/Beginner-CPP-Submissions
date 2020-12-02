#include <iostream>

void add ( int , int ) ;

int main()
{
    std::cout << "Enter First Number : " ;
    int x ;
    std::cin >> x ;

    std::cout << "Enter Second Number : " ;
    int y ;
    std::cin >> y ;

    add( x , y ) ;

    return 0;
}

void add ( int a , int b )
{
    std::cout << "Sum : " << a+b << '\n';
}
