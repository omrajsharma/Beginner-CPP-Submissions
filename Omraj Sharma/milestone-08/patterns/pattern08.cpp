#include <iostream>

int main()
{
    for( int i = 1 ; i <= 5 ; i++ )
    {
        for( int j = 5- i ; j >= 0 ; j-- )
            std::cout << ' ' ;
        for( int k = 1 ; k <= i ; k++ )
            std::cout << k ;
        for( int l = i-1 ; l > 0 ; l-- )
            std::cout << l ;
        std::cout << '\n' ;
    }

    return 0 ;
}
