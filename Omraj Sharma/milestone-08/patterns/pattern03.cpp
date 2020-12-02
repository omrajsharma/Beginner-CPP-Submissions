#include <iostream>

int main()
{
    for( int i = 1 ; i <=5 ; i++ )
    {
        for( int k = 1 ; k < i ; k++ )
            std::cout << ' ' ;
        for( int j = 5-i ; j >= 0 ; j-- )
            std::cout << "*" ;
        std::cout << "\n" ;
    }

    return 0 ;
}
