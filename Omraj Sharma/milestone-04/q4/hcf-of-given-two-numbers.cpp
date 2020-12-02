#include <iostream>

int main()
{
    int x , y , temp , result ;

    std::cout << "Enter first number : ";
    std::cin >> x ;

    std::cout << "Enter second number : ";
    std::cin >> y ;

    if( x > y )
        temp = y / 2 ;
    else
        temp = x / 2 ;

    for( int i = 1 ; i <= temp ; i++ )
    {
        if( x%i == 0 && y%i == 0 )
            result = i ;
    }

    std::cout << "HCF of " << x << " and " << y << " : " << result << "\n" ;

    return 0 ;
}
