#include <iostream>

int main()
{
    for( int i = 0 ; i < 5 ; i++ )
    {
        for( int j = 0 ; j < i+1 ; j++ )
        {
            std::cout << i*j ;
        }
        std::cout << '\n' ;
    }

    return 0;
}
