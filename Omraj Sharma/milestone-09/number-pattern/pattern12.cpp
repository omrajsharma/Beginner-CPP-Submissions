#include <iostream>

int main()
{
    int n = 5 ;
    for( int i = 1 ; i <= 5 ; i++ )
    {
        if( i%2 != 0 )
        {
            for( int j = 1 ; j <= n ; j++ )
                std::cout << j ;
        }
        else
        {
            for( int j = n ; j >= 1 ; j-- )
                std::cout << j ;
        }
        std::cout << '\n' ;
        n-- ;
    }


    return 0;
}

