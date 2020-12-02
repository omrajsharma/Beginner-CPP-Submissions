#include <iostream>

int main()
{
    for( int i = 0 ; i <= 6 ; i++ )
    {
        char c = 'A' ;
        for( int j = 1 ; j <= 7 ; j++ )
        {
            if( j <= 4-i || j >= 4+i )
            {
                std::cout << c ;
                c++ ;
            }
            else
            {
                std::cout << ' ' ;
                c++ ;
            }
        }
        std::cout << '\n' ;
    }

    return 0 ;
}
