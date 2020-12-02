#include <iostream>

int main()
{
    char c ;
    for( int i = 1 ; i <= 4 ; i++ )
    {
        c = 'A';
        for( int j = 1 ; j <= 7 ; j++ )
        {
            if( j <= 5-i || j >= 3+i )
            {
                std::cout << char(c) ;
                j < 4 ? c++ : c-- ;
            }
            else
            {
                    std::cout << ' ' ;
                    if( j == 4)
                        c-- ;
            }
        }
        std::cout << '\n' ;
    }

    return 0 ;
}
