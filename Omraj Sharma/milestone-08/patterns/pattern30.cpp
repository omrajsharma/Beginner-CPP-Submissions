#include <iostream>

int main()
{
    int n ;
    int sum = 0 ;
    for( int i = 1 ; i <= 5 ; i++ )
    {
        sum += i ;
        int sumT = sum ;
        for( int j = 1 ; j <= 5 ; j++ )
        {
            if( j <= 5-i )
                std::cout << ' ';
            else
            {
                std::cout << (char)(sumT+64) ;
                sumT-- ;
            }
        }
        std::cout << '\n' ;
    }

    return 0;
}
