#include <iostream>

int main()
{
    for( int i = 1 ; i <= 5 ; i++ )
    {
        for( int j = 0 ; j <= 5-i ; j++ )
            std::cout << (char)(j+65) ;
        for( int k = 1 ; k < i*2-1 ; k++ )
            std::cout << ' ' ;
        for( int l = 5-i ; l >= 0 ; l-- )
            std::cout << (char)(l+65) ;
        std::cout << '\n' ;
    }

    return 0 ;
}
