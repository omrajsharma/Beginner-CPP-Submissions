#include <iostream>

int main()
{
    for( int i = 1 ; i <= 4 ; i++ )
    {
        int n = i ;
        for( int j = 1 ; j <= 9 ; j++ )
        {
            if ( j <= 5-i || j >= 5+i )
                std::cout << ' ' ;
            else
            {
                std::cout << n ;
                j < 5 ? n-- : n++ ;
            }
        }
        std::cout << '\n' ;
    }

    return 0 ;
}
