#include <iostream>

int multiply ( int , int );

int main()
{
    std::cout << "Enter First Number : " ;
    int x ;
    std::cin >> x ;

    std::cout << "Enter Second Number : " ;
    int y ;
    std::cin >> y ;

    int multi = multiply( x , y ) ;

    std::cout << "Multiplication is " << multi << '\n' ;

    return 0;
}

int multiply ( int a , int b )
{
    return a*b ;
}
