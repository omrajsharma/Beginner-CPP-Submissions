#include <iostream>

int main()
{
    int c = 0 ;
    for( int i = 1 ; i <= 9 ; i++ )
    {
        for( int j = 1 ; j <= 9 ; j++ )
        {
            if( j <= 5-c || j >= 5+c )
                std::cout << '*' ;
            else
                std::cout << ' ' ;
        }
        i < 5 ? c++ : c-- ;
        std::cout << '\n' ;
    }

    return 0 ;
}
