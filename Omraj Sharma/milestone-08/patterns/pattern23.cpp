#include <iostream>

int main()
{
    for( int i = 1 ; i <= 6 ; i++ )
    {
        for( int j = 1 ; j <= i ; j++ )
        {
            if( j % 2 != 0 )
                std::cout << 1 ;
            else
                std::cout << 0 ;
        }
        std::cout << '\n' ;
    }

    return 0 ;
}
