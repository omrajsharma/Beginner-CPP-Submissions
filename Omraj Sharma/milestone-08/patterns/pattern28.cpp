#include <iostream>

int main()
{
    int sum = 0;
    int n = 1 ;
    for( int i = 1 ; i <= 5 ; i++ )
    {

        sum += i ;
        int sumTemp = sum ;

        for( int j = 1 ; j <= i ; j++ )
        {
            if( i%2 == 0 )
            {
                std::cout << sumTemp ;
                sumTemp-- ;
            }
            else
            {
                std::cout << n ;
                n++ ;
            }
            std::cout << '*' ;
        }

        std::cout << '\n' ;
        n = sum +1 ;
    }

    return 0;
}
