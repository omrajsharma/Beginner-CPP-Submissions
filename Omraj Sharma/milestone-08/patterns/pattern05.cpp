#include <iostream>

int main()
{
    for( int i = 1 ; i <= 5 ; i++ )
    {
        for( int j = 6-i ; j > 0 ; j-- )
            std::cout << " " ;
        for( int k = 1 ; k <= i*2 -1 ; k++ )
            std::cout << '*' ;
        std::cout << '\n' ;
    }

    return 0 ;
}
