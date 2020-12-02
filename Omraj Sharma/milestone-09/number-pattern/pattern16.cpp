#include <iostream>

int main()
{
    for( int i = 1 ; i <= 4 ; i++ )
    {
        for ( int j = 1 ; j <= i ; j++ )
        {
            if ( i%2 != 0 )
                std::cout << ( j%2 != 0 ) ;
            else
                std::cout << ( j%2 == 0 ) ;
        }
        std::cout << '\n' ;
    }

    return 0;
}

