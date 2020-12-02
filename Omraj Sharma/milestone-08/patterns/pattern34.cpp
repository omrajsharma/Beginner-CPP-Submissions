#include <iostream>

int main()
{
    int k = 1, p ;
    for ( int i = 1 ; i <= 5 ; i++ )
    {
        p = k ;
        for ( int j = 1 ; j <= i ; j++ )
        {
            std::cout << p ;
            p = p - ( 5 - i + j ) ;
        }
        std::cout << '\n' ;
        k = k+ 1 + 5 - i ;
    }

    return 0;
}
