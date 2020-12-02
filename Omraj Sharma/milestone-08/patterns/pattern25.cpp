#include <iostream>

int main()
{
    int n = 1 ;
    for( int i = 1 ; i <= 21 ; i++ )
    {
        int nt = n ;
        for( int j = 1 ; j <= 21 ; j++ )
        {
            if( j > 11-n && j < 11+n )
            {
                if( nt > 9 )
                    nt = 0 ;
                else if( nt < 0 )
                    nt = 9 ;

                std::cout <<  nt ;
                j < 11 ? nt++ : nt-- ;
            }
            else
                std::cout << ' ' ;
        }

        std::cout << '\n' ;
        i < 11 ? n++ : n-- ;
    }

    return 0 ;
}
