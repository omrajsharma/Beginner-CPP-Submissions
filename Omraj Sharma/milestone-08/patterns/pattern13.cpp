#include <iostream>

int main()
{
    int c = 1 ;
    for( int i = 1 ; i <= 4 ; i++ )
    {
        int c = i ;
        for( int j = 1 ; j < 10 ; j++ )
        {
            if( j <= 5-i || j >= 5+i )
                std::cout << ' ' ;
            else
            {
                std::cout << c ;
                j < 5 ? c++ : c-- ;
            }
        }
        std::cout << '\n' ;
    }

    return 0 ;
}
