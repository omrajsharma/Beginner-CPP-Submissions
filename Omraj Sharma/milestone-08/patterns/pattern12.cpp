#include <iostream>

int main()
{
    int c = 1 ;
    for( int i = 1 ; i <= 5 ; i++ )
    {
        for( int j = 1 ; j <= 10 ; j++ )
        {
            if( j <= c || 10 - j <= c )
                std::cout << ' ' ;
            else
                std::cout << '*' ;
        }
        c++ ;
        std::cout << '\n' ;
    }

    return 0 ;
}