#include <iostream>

int main()
{
    for( int i = 1 ; i <= 4 ; i++ )
    {
        int n = 1 ;
        char c = 'A' ;
        for( int j = 1 ; j <= 7 ; j++ )
        {
            if( j > 4-i && j < 4+i )
            {
                if( j <= 4 )
                {
                    std::cout << n ;
                    n++ ;
                }
                else
                {
                    std::cout << c ;
                    c++ ;
                }
            }
            else
                std::cout << ' ' ;
        }
        std::cout << '\n' ;
    }

    return 0 ;
}
