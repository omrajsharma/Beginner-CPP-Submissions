#include <iostream>

int main()
{
    for( int i = 1 ; i <= 4 ; i++ )
    {
        for ( int j = 1 ; j <= 10 ; j++ )
        {
            if( j >= 5-i && j <= 10 - i )
                std::cout << '*' ;
            else
                std::cout << ' ' ;
        }
        std::cout << '\n' ;
    }

    return 0 ;
}
