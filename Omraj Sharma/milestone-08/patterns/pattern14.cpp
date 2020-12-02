#include <iostream>

int main()
{
    for( int i = 0 ; i <= 6 ; i++ )
    {
        for( int j = 6-i ; j >= 0 ; j-- )
            std::cout << j ;
        std::cout << '\n' ;
    }

    return 0 ;
}
