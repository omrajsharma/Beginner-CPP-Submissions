#include <iostream>

int main()
{
    for ( int i = 1 ; i <= 4 ; i++ )
    {
        for( int j = 1 ; j <= 8-(i*2-1) ; j++ )
        {
            std::cout << j ;
        }
        std::cout << '\n' ;
    }

    return 0;
}

