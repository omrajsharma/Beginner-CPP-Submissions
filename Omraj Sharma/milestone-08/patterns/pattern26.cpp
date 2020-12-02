#include <iostream>

int main()
{
    for( int i = 1 ; i <= 4 ; i++ )
    {
        char c = (char)(i + 64 ) ;
        for( int j = 1 ; j <= i ; j++ )
        {
            std::cout << c ;
            c-- ;
        }
        std::cout << '\n' ;
    }

    return 0 ;
}
