#include <iostream>

int main()
{
    for( int i = 1 ; i <= 4 ; i++ )
    {
        char c = 'A' ;
        int n = 1 ;
        for( int j = 1 ; j <= 8 ; j++ )
        {
            if( j <= 4-i || j > 4+i )
                std::cout << ' ' ;
            else{
                if( j <= 4 )
                {
                    std::cout << c ;
                    c++ ;
                }
                else
                {
                    std::cout << n ;
                    n++ ;
                }
            }
        }
        std::cout << '\n' ;
    }

    return 0 ;
}
