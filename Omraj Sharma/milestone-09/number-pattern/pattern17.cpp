#include <iostream>

int main()
{
    for( int i = 1 ; i <= 5 ; i++ )
    {
        if( i%2 != 0 )
        {
            for( int j = 1 ; j <= ( i*2-1) ; j += 2 )
                std::cout << j ;
        }
        else
        {
            for ( int j = 2 ; j <= i*2 ; j += 2 )
                std::cout << j ;
        }
        std::cout << '\n' ;
    }


    return 0;
}

