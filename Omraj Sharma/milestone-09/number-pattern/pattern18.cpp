#include <iostream>

int main()
{
    for ( int i = 1 ; i <= 5 ; i++ )
    {
        for ( int j = (i*2-1) ; j <= 9 ; j += 2 )
        {
            std::cout << j ;
        }
        std::cout << '\n' ;
    }


    return 0;
}

