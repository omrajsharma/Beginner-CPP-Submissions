#include <iostream>

int main()
{
    for( int i = 1 ; i <= 4 ; i++ )
    {
        char c = 'A' ;
        for( int j = 1 ; j <= 9 ; j++ )
        {
            if( j <= 4-i || j >= 4+i )
                std::cout << ' ' ;
            else
            {
                std::cout << c ;
                j < 4 ? c++ : c-- ;
            }
        }
        std::cout << '\n' ;
    }

    return 0 ;
}
