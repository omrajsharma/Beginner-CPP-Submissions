#include <iostream>

int main()
{
    for( int i = 1 ; i <= 5 ; i++ )
    {
        int n = 6-i ;
        for ( int j = 1 ; j <= 5 ; j++ )
        {
            if( j <= i )
            {
                std::cout << n ;
                n++ ;
            }
            else
                std::cout << 5 ;
        }
        std::cout << '\n' ;
    }

    return 0;
}

