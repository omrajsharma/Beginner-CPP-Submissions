#include <iostream>

int main()
{
    std::cout << "Enter a number : ";
    int x ;
    std::cin >> x ;

    for( int i = 1 ; i <= x/2 ; i++ )
    {
        if( x%i == 0 )
            std::cout << i << " ";
    }
    std::cout << x << "\n" ;

    return 0 ;
}
