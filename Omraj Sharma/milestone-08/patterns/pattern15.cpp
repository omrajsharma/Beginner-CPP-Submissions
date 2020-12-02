#include <iostream>

int main()
{
    int c = 1 ;
    for( int i = 1 ; i <= 9 ; i++ )
    {
        int p = 1 ;
        for( int j = 1 ; j <= 5 ; j++ )
        {
            if( j <= 5-i || i-j >= 5 )
                std::cout << ' ' ;
            else
            {
                std::cout << p ;
                p < c ? p++ : p ;
            }
        }
        i < 5 ? c++ : c-- ;
        std::cout << '\n' ;
    }

    return 0 ;
}
