#include <iostream>

int main()
{
    for( int i = 1 ; i <= 5 ; i++ )
    {
        for( int j = 6-i ; j >= 1 ; j-- )
        {
            std::cout << j ;
        }
        std::cout << '\n' ;
    }

    return 0;
}
