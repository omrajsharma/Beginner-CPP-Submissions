#include <iostream>

int main()
{
    for( int i = 1 ; i <= 5 ; i++ )
    {
        for( int j = 5-i ; j >= 0 ; j-- )
            std::cout << ' ' ;
        for( int k = 0 ; k < i ; k++)
            std::cout << "* " ;
        std::cout << '\n' ;
    }

    return 0 ;
}
