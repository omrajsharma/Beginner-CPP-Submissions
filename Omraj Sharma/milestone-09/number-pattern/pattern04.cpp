#include <iostream>

int main()
{
    for( int i = 1 ; i <= 5 ; i++ )
    {
        for( int j = i ; j <= 5 ; j++ )
        {
            std::cout << j ;
        }
        std::cout << '\n' ;
    }

    return 0;
}