#include <iostream>

int main()
{
    for( int i = 1 ; i <= 5 ; i++ )
    {
        for( int j = 1 ; j <= 6-i ; j++ )
        {
            std::cout << j ;
        }
        std::cout << '\n' ;
    }

    return 0;
}
