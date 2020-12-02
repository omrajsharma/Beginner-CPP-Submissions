#include <iostream>

int main()
{
    int b = 1 , f = 7 ;
    for( int i = 1 ; i <= 7 ; i++ )
    {
        for( int j = 1 ; j <= 7 ; j++ )
        {
            if( j != b && j != f )
                std::cout << "*" ;
            else if ( j == b )
                std::cout << "\\" ;
            else if( j == f )
                std::cout << "/" ;

        }
        b++ ;
        f-- ;
        std::cout << '\n' ;
    }

    return 0 ;
}
