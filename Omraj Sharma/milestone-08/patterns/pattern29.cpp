#include <iostream>

int main()
{
    int c = 1 , cn = -3 ;
    for( int i = 1 ; i <= 9 ; i++ )
    {
        for( int j = 1 ; j <= 5 ; j++ )
        {
            if( i <= 5 )
            {
                if( j <= 5-c )
                {
                    std::cout << ' ' ;
                }
                else
                    std::cout << '*' ;
            }
            if( i >= 5 )
            {
                if( j <= cn )
                    std::cout << '*' ;
                else
                    std::cout << ' ' ;
            }
        }
        i < 7 ? cn++ : cn-- ;
        i < 3 ? c++ : c-- ;
        std::cout << '\n' ;
    }

    return 0;
}
